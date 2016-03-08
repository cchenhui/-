#include <iostream>
#include <fstream> //fstream头文件，ifstream读取
using namespace std;

void ArraySum(int n)
{
int sum=0;
int *a=new int[n]; //数组元素初始化
ifstream in("D:\\数据.txt");
for(int i=0;in>>a[i],i<n;i++)
sum=sum+a[i];
cout<<sum;
in.close();
}

int main(void)
{
int a;
cout<<"数组长度：";
cin>>a;
cout<<"数组元素和：";
ArraySum(a); //调用函数
return 0;
}