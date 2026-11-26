#ifndef __14_1_1_可变数组_H__
#define __14_1_1_可变数组_H__

typedef struct {
    int *array;
    int size;
} Array;

Array array_create(int init_size);				//创建
void array_free(Array *a);					//回收
int array_size(const Array *a);					//当前有多少数组可用
int* array_at(Array *a, int index);				//访问数组有多少个单元
void array_inflate(Array *a, int more_size);	//让数组增长

#endif