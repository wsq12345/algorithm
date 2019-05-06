/*
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
*/
#include <iostream>
using namespace std;
int main()
{
	string m[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char a[100];
	int sum1=0,sum2=0,i=0;
	cin>>a;
	while(a[i]!='\0'){
        sum1+=a[i]-'0';
        i++;
    }
    int b[10],j=0;
    while(sum1!=0)
    {
    	b[j]=sum1%10;
        sum1=sum1/10;
        j++;
    }
	for(i=j-1;i>=1;i--)
		cout<<m[b[i]]<<" ";	
	cout<<m[b[0]];	
} 
