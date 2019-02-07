//Shortest job First
#include<bits/stdc++.h>
#include<conio.h>
#define max 20
using namespace std;
main()
{
	int n,bt[max],tat[max],wt[max]; float avgtat=0,avgwt=0;
	
	cout<<"Enter no. of processes ";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
	cout<<"Enter Burst or Execution time of process-"<<i+1<<"  ";
	cin>>bt[i];
	cout<<endl;
	}
	
    sort(bt,bt+n);  
	
    tat[0]=bt[0];
    
 	for(int i=1;i<n;i++)
 	tat[i]=tat[i-1]+bt[i];
 	
	for(int i=0;i<n;i++)
	wt[i]=tat[i]-bt[i];
	
	for(int i=0;i<n;i++)
	avgtat+=tat[i];
	avgtat=avgtat/n;
	
	
	for(int i=0;i<n;i++)
	avgwt+=wt[i];
	avgwt=avgwt/n;
	
	cout<<"TAT"<<"\t"<<"WT"<<endl;
	for(int i=0;i<n;i++) cout<<tat[i]<<"\t"<<wt[i]<<"\t"<<endl;
	cout<<endl;
	
	cout<<"Average TAT is ="<<avgtat<<endl;
	cout<<"Average WT is ="<<avgwt<<endl;
		
	getch();
}
