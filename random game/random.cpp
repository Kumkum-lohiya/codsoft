#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int comptrNo, usrNo,i,n;
	time_t t;
	srand((unsigned) time(&t));
	comptrNo = rand()%100;
	cout<<"\n In how many Chances You Found Me !!!"<<endl;
	cin>>n;
	for(i= 1; i<=n;i++)
	{
		cout<<"\n Enter " <<i<< " Number "<<endl;
		cin>>usrNo;
		if(comptrNo == usrNo)
		{
			cout<<" Winner !!! you Found me in "<<i<<" chances";
			exit(0);
		}
		else if(usrNo>comptrNo){
			cout<<"\nPlease Enter smaller Number"<<endl;
		}
		else{
			cout<<"\nPlease Enter Higher Number"<<endl;
		}
	    cout<<"\n"<<i<<"  Chances completed "<<n-i<<"  Remains";	
	}
	cout<<"\n Ohooooooooooo!!!!!!!! you loose the number is = "<<comptrNo<<" Got It ";
	return 0;
}