/*
	Linked List ( ���Ḯ��Ʈ )
*/

#include <stdio.h>

typedef struct node
{
	char data;		//����� ������
	node * pnext;	//����� ���� ������

	void ShowNode()
	{
		// ���� ��尡 ���ٸ�, ������.
		// ������ �ƹ� �۾� ���� ����.
		if (this == nullptr) {
			return;
		}

		// ������ �ƴ϶��, ���� �����͸� ���.
		// ���� ���� ���� �̵�.
		printf("%c\n", data);
		pnext->ShowNode();
	}

	void AddTail( node* pnew )
	{
		// pnext �� �ִٸ�, ���� ��� �Լ��� �̵�.
		if (pnext) 
		{
			pnext->AddTail(pnew);
			return;
		}

		pnext = pnew;		
	}

	node* Search(char key)
	{
		// ���� ����� data �� key �� �����ϸ�,
		// ���� ����� �����͸� ����
		if (data == key) 
		{
			return this;
		}
		
		// ���� ��尡 �ִٸ�, ��� ��� ȣ��
		// �ᱹ ã�� �����ϸ� nullptr ����
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
	
	// ����Ʈ�� �������� ���ο� ��带 �߰�
	NODE node2 = { 'B', nullptr };
	head.AddTail(&node2);

	NODE node3 = { 'C', nullptr };
	head.AddTail(&node3);


	// ����Ʈ�� Ư�� ������ �ش� ��带 ã�´�.
	NODE* pn = head.Search('K');
	if (pn) {
		pn->data = 'Z';
	}
	// ã��, B -> Z


	// ����Ʈ�� ��� �����͸� ���
	head.ShowNode();

	// ���� ]]
	head.Insert(���ϴ� ��� �տ� ����);
	head.Remove(�ش���);	
}