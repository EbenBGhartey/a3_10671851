#include<iostream>
using namespace std;
int main(){
	
	int mark;
	cout<<"enter mark scored:"<<endl;
	cin>>mark;
	
	if(mark>79&&mark<100)
	{
		cout<<"your grade is A"<<endl;
	}
	
		else if(mark>74&&mark<80)
		{
			cout<<"your grade is B+"<<endl;
		}
		
		else if(mark>69&&mark<75)
		{
			cout<<"your grade is B"<<endl;
		}
		
		else if(mark>64&&mark<70)
		{
			cout<<"your grade is C+"<<endl;
		}
		
		else if(mark>59&&mark<65)
		{
			cout<<"your grade is C"<<endl;
		}
		
		else if(mark>54&&mark<60)
		{
			cout<<"your grade is D+"<<endl;
		}
		
		else if(mark>49&&mark<55)
		{
			cout<<"your grade is D"<<endl;
		}
		
		else if(mark>44&&mark<50)
		{
			cout<<"your grade is E"<<endl;
		}
		
		else if(mark>=0&&mark<45)
		{
			cout<<"your grade is F"<<endl;
		}
	
	else 
	cout<<"mark entered is out of range"<<endl;
	
	return 0;
}
