#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int STDateType;

typedef struct Stack
{
	STDateType* a;
	//ջ��
	int top;
	//����
	int capacity;
}ST;

//��ʼ��ջ
void StackInit(ST* ps);

//����ջ
void StackDestroy(ST* ps);

//��ջ
void StackPush(ST* ps, STDateType x);

//��ջ

//ɾ��
void StackPop(ST* ps);

//��ȡջ��Ԫ��
STDateType StackTop(ST* ps);

//��ȡջ��Ԫ�ظ���
int StackSize(ST* ps);

//���ջ�Ƿ�Ϊ�գ����򷵻ط���������������򷵻�0
bool StackEmpty(ST* ps);