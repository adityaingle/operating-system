#include<iostream >
#include<stdlib.h>
using namespace std;
int main()
{
		int n,m;
		int cylinder[200];
		int pos=0;
		int total=0;
			cout<<"enter the current position of the head-"<<endl;
			cin>>pos;
			cout<<"enter number of request-";
			cin>>m;
			cout<<"enter pending request in queue-"<<endl;
			for(int i=0;i<m;i++)
			{
			cin>>cylinder[i];	
			}
			for(int i=0;i<m;i++)
			{
						total=total+abs(cylinder[i]-pos);
						pos=cylinder[i];	
			}
			cout<<"total movement "<<total;
}
