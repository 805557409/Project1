#include"SqStack.h"
using namespace std;


//初始化栈
void initStack(SqStack* s)
{
	s->top = -1;
	s->elem = 0;
	s->size = 0;
}

//入栈
int pushStack(SqStack* s, int elem)
{
	++s->top;
	s->elem = elem;
	++s;
	return s->top;
}

//出栈
Status popStack(SqStack* s, ElemType newtop)
{
	if (s->top = -1) {
		cout << "这是一个空栈" << endl;
	}
	int i = s[s->top];
	cout << "这是一个空栈" << i << endl;
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