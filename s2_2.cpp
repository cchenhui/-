#include <iostream>
#include <fstream> //fstreamͷ�ļ���ifstream��ȡ
using namespace std;

void ArraySum(int n)
{
int sum=0;
int *a=new int[n]; //����Ԫ�س�ʼ��
ifstream in("D:\\����.txt");
for(int i=0;in>>a[i],i<n;i++)
sum=sum+a[i];
cout<<sum;
in.close();
}

int main(void)
{
int a;
cout<<"���鳤�ȣ�";
cin>>a;
cout<<"����Ԫ�غͣ�";
ArraySum(a); //���ú���
return 0;
}