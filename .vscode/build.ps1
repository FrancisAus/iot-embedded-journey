param(
    [Parameter(Mandatory = $true)][string]$SourceFile
)

$ErrorActionPreference = 'Stop'

# gcc 需要英文临时目录（中文用户名会破坏临时文件路径）
$env:TEMP   = 'D:\Temp'
$env:TMP    = 'D:\Temp'
$env:TMPDIR = 'D:\Temp'
$env:Path   = 'D:\MSYS2\ucrt64\bin;' + $env:Path

$gcc    = 'D:\MSYS2\ucrt64\bin\gcc.exe'
$srcDir = Split-Path -Parent $SourceFile

if (-not $srcDir -or -not (Test-Path -LiteralPath $srcDir)) {
    Write-Host "[错误] 找不到源文件所在目录：$srcDir"
    exit 1
}

Set-Location -LiteralPath $srcDir

$ext = [IO.Path]::GetExtension($SourceFile)
if ($ext -ne '.c' -and $ext -ne '.cpp') {
    Write-Host "[错误] 当前文件不是 .c/.cpp：$SourceFile"
    exit 1
}

# 关键：中文文件名不能直接作为参数传给 gcc（PowerShell 5.1 会转坏编码）
# 先复制成英文名，再用相对路径编译，参数里不含任何中文
$tmpName = '._build_tmp' + $ext
Copy-Item -LiteralPath $SourceFile -Destination (Join-Path $srcDir $tmpName) -Force

if ($ext -eq '.cpp') { $gcc = 'D:\MSYS2\ucrt64\bin\g++.exe' }

& $gcc '-g' '-Wall' '-Wextra' '-finput-charset=UTF-8' '-fexec-charset=UTF-8' $tmpName '-o' '_run.exe'
$code = $LASTEXITCODE

Remove-Item -LiteralPath (Join-Path $srcDir $tmpName) -Force -ErrorAction SilentlyContinue

if ($code -ne 0) {
    Write-Host "[失败] 编译未通过，退出码 $code"
    exit $code
}

Write-Host "[成功] 已生成 _run.exe"
exit 0