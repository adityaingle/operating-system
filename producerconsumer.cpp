#include<iostream>
using namespace std;
int s=1;
int e=5;
int f=0;
int a[5];
int wait(int x)
{
       return(--x);
};
int signal(int x)
{
        return(++x);   
};

void producer()
{
        	int item;
         e=wait(e);
         s=wait(s);
         cout<<"producing"<<endl;
         cout<<"enter item"<<endl;
         cin>>item;
         a[f]=item;
         s=signal(s);
         f=signal(f);   
        cout<<s<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
};
void consumer()
{
    
         f=wait(f);
         s=wait(s);
         cout<<"consuming"<<endl;
         s=signal(s);
         e=signal(e);  
        cout<<s<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
};
int main()
{
int no;
    while(true)
    {
            cout<<"enter 1 for producer"<<endl;
            cout<<"enter 2 for consumer"<<endl;
            cout<<"enter 3 for exit"<<endl;
            cin>>no;
           	switch(no)
			{case 1 :if(s==1 && (e!=0))
			
               			producer();
			   		else
			   			cout<<"buffer is full"<<endl;
			   		break;
			case 2 : if(s==1 && (f!=0))
               			consumer();
			   			else
			   			cout<<"buffer is empty"<<endl;
			   			break;
			case 3 : exit(0);
            }
    }
};

