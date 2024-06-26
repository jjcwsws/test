#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

// 静态顺序表
//#define N 1000
//typedef int SLDataType;
//
//struct SeqList
//{
//	SLDataType a[N];
//	int size;
//};


// 动态顺序表
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;        // 存储有效数据个数
	int capacity;    // 空间大小
}SL;

// 管理数据 -- 增删查改
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);
void SLCheckCapacity(SL* ps);

// 头插头删 尾插尾删
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);

void SLPopFront(SL* ps);
// 在pos位置插入x
void SLInsert(SL* ps, int pos, SLDataType x);
// 删除pos位置的值
void SLErase(SL* ps, int pos);





