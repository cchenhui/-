#include <iostream>
#include <fstream> //fstreamͷ�ļ���ifstream��ȡ
using namespace std;

void ArraySum(int n,int bottom,int top)
{
int sum=0;
int *a=new int[n]; //����Ԫ�س�ʼ��
ifstream in("D:\\����.txt");
for(int i=0;in>>a[i],i<n;i++)
{
if(a[i]>=bottom&&a[i]<=top) //������bottom��top֮��
sum=sum+a[i];
}
cout<<sum;
in.close();
}

int main(void)
{
int a,bottom,top;
cout<<"���鳤�ȣ�";
cin>>a;
cout<<"bottom:";
cin>>bottom;
cout<<"top:";
cin>>top; //����bottom��top
cout<<"����Ԫ�غͣ�";
ArraySum(a,bottom,top); //���ú���
return 0;
}