#include<bits/stdc++.h> 
using namespace std;
int main()
{
	while(1)
	{
	cout<<"�����ȡ����";
	srand(unsigned(time(NULL)));
	int n,i,j,a[50],s;
	memset(a,0,sizeof(a));
	while(cin>>n) //����Ķ�����Ϊ����exe�ļ����к��Բ��˳�
	{	
		for(i=1;i<=n;i++)
		{
			s=floor(rand()%40+1);
			for(j=1;j<i;j++)
			if(s==a[j]) s=0;
			if(s==0)
			{
				i--;
			}
			else
			{
				a[i]=s;
			}
		}
		for(i=1;i<=n;i++)
		{
			cout<<a[i]<<" "; 
		}
	}
	cout << " " << endl;
	}
	return 0;
}
