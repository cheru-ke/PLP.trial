#include <iostream>

int main (){
	
	int a=1;
	int b=2;
	int stoper=a;
	a=b;
	b=stoper;
	std::cout<<a;
	return 0;
}