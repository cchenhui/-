#include <iostream>
#include <fstream> //fstreamͷ�ļ���ifstream��ȡ
using namespace std;

int main (void)
{
int a[100];
int sum=0;
ifstream in("D:\\����.txt");
for(int i=0;in>>a[i],i<100;i++)
sum=sum+a[i];
cout<<sum<<endl;
in.close(); //�ر��ļ�
return 0;
}