#include"SqStack.h"
using namespace std;


//��ʼ��ջ
void initStack(SqStack* s)
{
	s->top = -1;
	s->elem = 0;
	s->size = 0;
}

//��ջ
int pushStack(SqStack* s, int elem)
{
	++s->top;
	s->elem = elem;
	++s;
	return s->top;
}

//��ջ
Status popStack(SqStack* s, ElemType newtop)
{
	if (s->top = -1) {
		cout << "����һ����ջ" << endl;
	}
	int i = s[s->top];
	cout << "����һ����ջ" << i << endl;
}

	
int main() 
{
	ElemType elem;
	ElemType newtop;
	struct SqStack s[100];
	initStack(s);
	cin >> elem;
	while (elem) {
		newtop = pushStack(s, elem);
	}

	popStack(s, newtop);



	system("pause");
	return 0;
}