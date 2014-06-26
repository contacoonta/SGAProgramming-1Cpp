/*
	�ڱ� ���� ����ü
	( Linked List )
	
	1. �߰��� ���ϴ�.
	2. ����⵵ ���ϴ�.
	3. ������ ũ�Ⱑ ����.
*/
#include <stdio.h>

struct node
{
	char chName;
	int data;

	node* pnode;
};

void showNode(node * phead);

void main()
{
	node a;
	a.chName = 'a';
	a.data = 10;
	a.pnode = nullptr;


	node b;
	b.chName = 'b';
	b.data = 21;
	b.pnode = nullptr;

	a.pnode = &b;


	node c;
	c.chName = 'c';
	c.data = -52;
	c.pnode = nullptr;

	b.pnode = &c;

	//showNode(&a);


	// ���ο� ��� d ����.
	// d �� a �տ� �ٴ´�. ( ��, d�� �Ӹ� )
	
	node d;
	d.chName = 'd';
	d.data = 13;
	d.pnode = nullptr;

	d.pnode = &a;

	//showNode(&d);


	// ���ο� ��� e ����. e = 2;
	// e �� b �� c ���̿� ����.

	node e;
	e.chName = 'e';
	e.data = 2;
	e.pnode = nullptr;

	e.pnode = &c;
	b.pnode = &e;

	//showNode(&d);


	// b ��带 ���� �Ѵ�.
	a.pnode = &e;

	showNode(&d);


	// d �� �Ӹ�. �츮�� �Ӹ��� �ȴ�.
	// c �� ���� �Ϸ���?
	node* pn = searchNode(�Ӹ�, char id'?')
}

/*
	77

	10
	21
	-52
*/
void showNode(node * phead)
{
	//printf("%d\n", phead->data); //a
	//printf("%d\n", phead->pnode->data); //b
	//printf("%d\n", phead->pnode->pnode->data); //c

	//for()
	node* pn = phead;
	for (; pn != nullptr;)
	{
		printf("%c = %d\n", pn->chName, pn->data);
		pn = pn->pnode;
	}
}


/*
	���� ]	���� �� ����Ʈ �����
	
	1 . id APINK ��� Mr.Chu , ��� 4
	2 . SNSD
	3 . AOA

	Extra]

		IU
		EXO 


	--------------------
	1�� �߰� (������)
	2�� ���� (���ϴºκ�)
	3�� ���� (����)

	ã��(���ϴºκ�)
*/