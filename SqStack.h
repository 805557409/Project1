#pragma once
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#include <malloc.h>
#include <stdlib.h>
using namespace std;

typedef enum Status
{
	ERROR = 0, SUCCESS = 1
} Status;

typedef int ElemType;

typedef struct SqStack
{
	ElemType  elem;
	int top;
	int size;
} SqStack;


//���������˳��ջ
void initStack(SqStack* s);//��ʼ��ջ
Status isEmptyStack(SqStack* s);//�ж�ջ�Ƿ�Ϊ��
Status getTopStack(SqStack* s, ElemType* e); //�õ�ջ��Ԫ��
Status clearStack(SqStack* s);//���ջ
Status destroyStack(SqStack* s);//����ջ
Status stackLength(SqStack* s, int* length);//���ջ����
int pushStack(SqStack* s, int elem);//��ջ
Status popStack(SqStack* s, ElemType newtop);//��ջ


#endif