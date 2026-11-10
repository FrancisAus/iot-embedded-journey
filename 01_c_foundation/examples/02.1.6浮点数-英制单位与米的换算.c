#include <stdio.h>

int main()
{
	double foot;
	double inch;
	
	printf("请输入英制单位身高,"
	"例如输入\"6 2\"表示6英尺2英寸\n");
	
	scanf("%lf %lf",&foot,&inch);
	
	double answer = (foot + inch / 12.0) * 0.3048;
	printf("身高的国际单位是%f米\n",answer);

	//或从第13行写成
	//printf("身高的国际单位是%f米\n",
	//((foot + inch / 12) * 0.3048));
	
	return 0;
	
}
