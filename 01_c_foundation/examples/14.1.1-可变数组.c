#include "14.1.1-可变数组.h"
#include <stdio.h>
#include <stdlib.h>

const BLOCK_SIZE = 20;
// typedef struct {
//     int *array;
//     int size;
// } Array;

Array array_create(int init_size)//创建
{
    Array a;
    a.size = init_size;
    a.array = (int*)malloc(sizeof(int)*a.size);
    return a;
}
void array_free(Array *a)//回收
{
    free(a->array);
    a->array = NULL;
    a->size = 0;
}

//封装
int array_size(const Array *a)//当前有多少数组可用
{
    return a->size;
}

int* array_at(Array *a, int index)//访问数组有多少个单元
{
    if (index >= a->size)
    {
        array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE-(a->size));
    }
    
    return &(a->array[index]);
}
//上个函数的其他写法(gat&&set)：
int array_get(const Array *a,int index)
{
    return a->array[index];
}
void array_set(Array *a,int index,int value)
{
    a->array[index] = value;
}


void array_inflate(Array *a, int more_size)//让数组增长
{
    int *p = (int*)malloc(sizeof(int)(a->size + more_size));
    int i;
    for (i = 0; i < a->size; i++)
    {
        p[i] = a->array[i];
    }//此循环==函数memcpy
    free(a->array);
    a->array = p;
    a->size += more_size;
    
}


int main(int argc,const char* argv[])
{
    Array a = array_create(100);
    printf("array_size(&a)=%d\n",array_size(&a));//而不是a.size
    
    *array_at(&a,0) = 10;
    printf("*array_at(&a,0)=%d\n",*array_at(&a,0));//用*是因为方便赋值到数组里
    
    int number;
    int cnt = 0;

    while (number != -1)
    {
        scanf("%d",&number);
        *array_at(&a,cnt++) = number;
        if (number != -1)
        {
            scanf("%d",array_at(&a,cnt++));
        }
    }

    array_free(&a);
    return 0;
}