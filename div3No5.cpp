#include<iostream>

using namespace std;

int main(){
	
	
	for (int i=0; i <= 100; i++)
	{
		if (i%3==0 && i%5 != 0)
		{
			std::cout<<"Este numero solo es divisible por 3 y no por 5: "<<i<<std::endl;
		}
	}
	
	return 0;


}
