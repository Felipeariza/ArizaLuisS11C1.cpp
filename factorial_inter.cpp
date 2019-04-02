#include<iostream>

using namespace std;

int main(){
	
	int a;
	std::cin>>a;
	float r;
	r = 1;
	for (int i=1; i <= a; i++)
	{
	r *= i;
	}
	std::cout<<"El factorial es: "<<r<<std::endl;
	return 0;


}
