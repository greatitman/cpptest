#include<list>
#include<iostream>
#include<stdio.h>
using namespace std;
list<int> *g_list=new list<int>;
class LIST_TEST
{
	public:
		LIST_TEST(){printf("construct \r\n");}
		~LIST_TEST(){printf("deconstruct \r\n");}
		void init_list();
		void push_back_test(int myscore);
		void show_list(list<int> & mylist)const;

	public://private:
//		static list<int> *g_list;

};
void LIST_TEST::init_list()
{
	g_list->push_back(1);
	g_list->push_back(2);
}
void LIST_TEST::push_back_test(int myscore)
{
	g_list->push_back(myscore);
}
void LIST_TEST::show_list(list<int> & mylist)const
{
	cout<<"the list size is "<<mylist.size()<<endl;
	for(list<int>::iterator it = mylist.begin();it!=mylist.end();it++)
	{
		cout<<*it<<"\t";
	}
	cout<<endl;
}
int main()
{
	LIST_TEST *mylist = new LIST_TEST();
	mylist->init_list();
	mylist->show_list(*g_list);
	delete mylist;
	return 0;
}
