#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<"abs(-2) = "<<abs(-2)<<endl;//2
	cout<<"cbrt(1000) = "<<cbrt(1000)<<endl;//10
	cout<<"ceil(2.3) = "<<ceil(2.3)<<endl;//3
	cout<<"ceil(2.8) = "<<ceil(2.8)<<endl;//3
	cout<<"exp(2) = "<<exp(2)<<endl;//7.38906
	cout<<"expm1(2) = "<<expm1(2)<<endl;//6.38906
	cout<<"fabs(-2.3) = "<<fabs(-2.3)<<endl;//2.3
	cout<<"floor(2.3) = "<<floor(2.3)<<endl;//2
	cout<<"floor(2.8) = "<<floor(2.8)<<endl;//2
	cout<<"fmax(2.1, 3.5) = "<<fmax(2.1, 3.5)<<endl;//3.5
	cout<<"fmin(2.1, 3.5) = "<<fmin(2.1, 3.5)<<endl;//2.1
	cout<<"fmod(15, 8) = "<<fmod(15, 8)<<endl;//7
	cout<<"log(2) = "<<log(2)<<endl;//0.693147
	cout<<"pow(2, 3) = "<<pow(2, 3)<<endl;//8
	cout<<"round(2.3) = "<<round(2.3)<<endl;//2
	cout<<"round(2.8) = "<<round (2.8)<<endl;//3
	cout<<"sqrt(5) = "<<sqrt(5)<<endl;//2.23607
	cout <<"max(5, 10) = "<<max(5, 10)<<endl;//10
	cout <<"min(5, 10) = "<<min(5, 10)<<endl;//5
	system("pause");
}
