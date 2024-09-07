//#include<iostream>
//using namespace std;
//class Node
//{
//	public:
//	float CGPA;
//	string name, semester, Roll;
//	Node* Next;
//	Node(float G, string n, string s, string r)
//	{
//		CGPA = G;
//		name = n;
//		semester = s;
//		Roll = r;
//		Next = NULL;
//	}
//};
//class Link
//{
//public:
//	Node* head;
//	Link()
//	{
//		head = NULL;
//	}
//	void InsertAtHead(float C, string N, string S, string R);
//	void InsertAtTail(float C, string N, string S, string R);
//	void InsertAtPosition(float C, string N, string S, string R,int Index);
//	void SortBubble();
//	void Display();
//};
//void Link::InsertAtHead(float C, string N, string S, string R)
//{
//	Node* new_node = new Node(C, N, S, R);
//	new_node->Next = head;
//	head = new_node;
//
//}
//void Link::InsertAtTail(float C, string N, string S, string R)
//{
//	Node* new_node = new Node(C,N,S,R);
//	if (head == NULL)
//	{
//		head = new_node;
//	}
//	Node* temp = head;
//	while (temp->Next != NULL)
//	{
//		temp = temp->Next;
//	}
//	temp->Next = new_node;
//}
//void Link::InsertAtPosition(float C, string N, string S, string R,int index)
//{
//	Node* new_node = new Node(C, N, S, R);
//	int count = 0;
//	Node* temp = head;
//	while (temp->Next != NULL && count<index)
//	{
//		temp = temp->Next;
//		count++;
//	}
//	new_node->Next = temp->Next;
//	temp->Next = new_node;
//}
//void Link::Display()
//{
//	Node* temp = head;
//	cout << "Roll                      " << "Name                      " << "CGPA                      " << "Semester                      " << endl;
//	while (temp!= NULL)
//	{
//		cout << temp->Roll << "                          " << temp->name << "                         " << temp->CGPA << "                         " << temp->semester << endl;
//		temp = temp->Next;
//	}
//}
//void Link::SortBubble()
//{
//	Node* temp = head;
//	Node* Current = head;
//	while (Current!=NULL)
//	{
//		while (temp!= NULL)
//		{
//			if (Current->CGPA > temp->Next->CGPA)
//			{
//				Node* t = Current->Next;
//				Current = temp->Next;
//				temp->Next = t;
//
//			}
//			temp = temp->Next;
//		}
//		temp = head;
//		Current = Current->Next;
//	}
//}
//int main()
//{
//	Link obj;
//	obj.InsertAtHead(2.1,"Zaid", "3rd", "23F -3031");
//	obj.InsertAtTail(2.0, "Zain", "3rd", "23F -3021");
//	obj.InsertAtPosition(3, "Z", "3rd", "23F -3035",1);
//	obj.SortBubble();
//	obj.Display();
//}