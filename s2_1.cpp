#include <iostream>
#include <fstream> //fstream头文件，ifstream读取
using namespace std;

int main (void)
{
int a[100];
int sum=0;
ifstream in("D:\\数据.txt");
for(int i=0;in>>a[i],i<100;i++)
sum=sum+a[i];
cout<<sum<<endl;
in.close(); //关闭文件
return 0;
}