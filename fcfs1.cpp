#include<iostream>
using namespace std;
#define max 10
class process
{
public:
	int at[max],et[max],ct[max],tot[max],wt[max];
	int n;
	getintput()
	{
		for(int i=0;i<n;i++)
		{
						at[i]=0;
						et[i]=0;
						ct[i]=0;
						tot[i]=0;
						wt[i]=0;
		}
		cout<<"enter the number of process to take place" ;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cout<<"enter arrival time of process-"<<i+1<<"-    ";
	cin>>at[i];
	cout<<"enter execution time of process-"<<i+1<<"-    ";
	cin>>et[i];
	}
	}
	completiontime()
	{
		ct[0]=et[0];
		        for(int i=1;i<n;i++) 
		{
			if(ct[i-1]>at[i])
			{
					for(int j=0;j<=i;j++)
						{
						ct[i]=ct[i]+et[j];
						}
			}
			else
			{
			ct[i]=et[i]+at[i];	
			}
		}
		
	}	
	turnaroundtime()
	{
	for(int i=0;i<n;i++)
		{
			tot[i]=ct[i]-at[i];
		}
		
	}
	waitingtime()
	{
			for(int i=0;i<n;i++)
		{
			wt[i]=tot[i]-et[i];
		}	
		
	}
	display()
	{
		cout<<"Process-"<<"\t"<<"at"<<"\t"<<"et"<<"\t"<<"ct"<<"\t"<<"tot"<<"\t"<<"wt"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<"Process-"<<i<<"\t"<<at[i]<<"\t"<<et[i]<<"\t"<<ct[i]<<"\t"<<tot[i]<<"\t"<<wt[i]<<endl;
		}	
	}
};
int main()
{
	process obj;
	int num,check;
	do
	{
	cout<<"enter 1 to get input"<<endl;
	cout<<"enter 2 to calculate and display"<<endl;
	cin>>num;
	switch(num)
	{
		case 1: obj.getintput();
		break;
		case 2: obj.completiontime();obj.turnaroundtime();obj.waitingtime();obj.display();
		break;
	}
	cout<<"enter 0 to contiune";
	cin>>check;
	}while(check==0);
}
