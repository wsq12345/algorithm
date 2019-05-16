/*Calculate a+b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	long int a,b,sum,c;
	cin>>a;
	cin>>b;
	sum=a+b;
	c=abs(sum);
	if(c<1000)
		cout<<sum;
	if(c>=1000&&c<1000000)
		cout<<sum/1000<<","<<setw(3)<<setfill('0')<<c%1000;
	if(c>=1000000)
		cout<<sum/1000000<<","<<setw(3)<<setfill('0')<<(c/1000)%1000<<","
		<<setw(3)<<setfill('0')<<c%1000;
	return 0;
}
