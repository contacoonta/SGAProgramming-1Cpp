/*
	자기 참조 구조체
	( Linked List )
	
	1. 추가가 편하다.
	2. 지우기도 편하다.
	3. 정해진 크기가 없다.
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


	// 새로운 노드 d 출현.
	// d 가 a 앞에 붙는다. ( 즉, d가 머리 )
	
	node d;
	d.chName = 'd';
	d.data = 13;
	d.pnode = nullptr;

	d.pnode = &a;

	//showNode(&d);


	// 새로운 노드 e 출현. e = 2;
	// e 가 b 와 c 사이에 들어간다.

	node e;
	e.chName = 'e';
	e.data = 2;
	e.pnode = nullptr;

	e.pnode = &c;
	b.pnode = &e;

	//showNode(&d);


	// b 노드를 삭제 한다.
	a.pnode = &e;

	showNode(&d);


	// d 가 머리. 우리는 머리만 안다.
	// c 에 접근 하려면?
	node* pn = searchNode(머리, char id'?')
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
	과제 ]	나의 곡 리스트 만들기
	
	1 . id APINK 곡명 Mr.Chu , 멤버 4
	2 . SNSD
	3 . AOA

	Extra]

		IU
		EXO 


	--------------------
	1번 추가 (맨위에)
	2번 삭제 (원하는부분)
	3번 삽입 (사이)

	찾기(원하는부분)
*/