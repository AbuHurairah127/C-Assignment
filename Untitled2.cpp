#include <iostream>
#include <string>
using namespace std;
void swapValues(int  &val1,int &val2,int &val3) {
	int temp = val1;
	val1=val2;
	val2=val3;
	val3=temp;
}
int main() {
	int num1 = 2,num2= 3,num3=4;
swapValues(num1,num2,num3);
cout<<num1<<num2<<num3;
	return 0;
}
