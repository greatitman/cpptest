#include<stdio.h>
class CONST_TEST
{
	public:
		CONST_TEST(){printf("construct func CONST_TEST\r\n");}
		~CONST_TEST(){printf("destruct func CONST_TEST\r\n"); }
};
int main()
{
	return 0;
}

