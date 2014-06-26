/*
	Linked List ( 연결리스트 )
*/

#include <stdio.h>

typedef struct node
{
	char data;		//노드의 데이터
	node * pnext;	//노드의 다음 연결노드

	void ShowNode()
	{
		// 다음 노드가 없다면, 꼬리다.
		// 꼬리면 아무 작업 없이 리턴.
		if (this == nullptr) {
			return;
		}

		// 꼬리가 아니라면, 현재 데이터를 출력.
		// 다음 연결 노드로 이동.
		printf("%c\n", data);
		pnext->ShowNode();
	}

	void AddTail( node* pnew )
	{
		// pnext 가 있다면, 다음 노드 함수로 이동.
		if (pnext) 
		{
			pnext->AddTail(pnew);
			return;
		}

		pnext = pnew;		
	}

	node* Search(char key)
	{
		// 현재 노드의 data 와 key 가 동일하면,
		// 현재 노드의 포인터를 리턴
		if (data == key) 
		{
			return this;
		}
		
		// 다음 노드가 있다면, 계속 재귀 호출
		// 결국 찾기 실패하면 nullptr 리턴
		if (pnext) {
			pnext->Search(key);
		}
		else {
			return nullptr;
		}
	}

}NODE;


void main()
{
	NODE head = { 'A', nullptr };
	
	// 리스트의 마지막에 새로운 노드를 추가
	NODE node2 = { 'B', nullptr };
	head.AddTail(&node2);

	NODE node3 = { 'C', nullptr };
	head.AddTail(&node3);


	// 리스트의 특정 값으로 해당 노드를 찾는다.
	NODE* pn = head.Search('K');
	if (pn) {
		pn->data = 'Z';
	}
	// 찾고서, B -> Z


	// 리스트의 모든 데이터를 출력
	head.ShowNode();

	// 과제 ]]
	head.Insert(원하는 노드 앞에 삽입);
	head.Remove(해당노드);	
}