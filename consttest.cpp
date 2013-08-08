#include<stdio.h>
class CONST_TEST
{
	public:
		CONST_TEST(){printf("construct func CONST_TEST\r\n");}
		~CONST_TEST(){printf("destruct func CONST_TEST\r\n"); }
};
int main()
{
	CONST_TEST* test = new CONST_TEST();
	delete test;
	return 0;
}

