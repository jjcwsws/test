#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


typedef struct BinaryTreeNode* QDataType;
typedef struct QListNode
{
	struct QListNode* next;
	QDataType data;
}QNode;

//队列的结构
typedef struct Queue
{
	QNode* front;
	QNode* rear;
}Queue;

//初始化队列
void QueueInit(Queue* q);

//队尾入队列
void QueuePush(Queue* q, QDataType data);

//对头出队列
void QueuePop(Queue* q);

//获取队列头部元素
QDataType QueueFront(Queue* q);

//获取队尾元素
QDataType QueueBack(Queue* q);

//获取队列中有效元素个数
int QueueSize(Queue* q);

//检测队列是否为空，如果为空返回真，如果非空返回假
bool QueueEmpty(Queue* q);

//销毁队列
void QueueDestroy(Queue* q);