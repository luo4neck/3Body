#include<stdlib.h>
#include<iostream>
#include<vector>
#include "Class_Star.hpp"

using namespace std;

int run(vector<int>& topy);

extern "C" 
{
	vector<int> topy;

	void Run()
	{
		int Num_Loc = run(topy);
		
		cout<<"Totally "<<Num_Loc<<endl;
	}
	
	int Dis(int i)
	{
		cout<<"from python: "<<i<<endl;
		return topy[i]; 
	}
}// "C" end here..


int run(vector<int>& topy)
{
	unsigned int i_day = 0;
	unsigned int i_day_max = 100;
	
	while( i_day < i_day_max )	// main loop for days..
	{
		unsigned int i_sec = 0;
		//unsigned int i_sec_max = 86400;
		//while( i_sec < i_sec_max )  // main loop for seconds in a day.. 
		{
			//all star get F..
			
			//all star move..
			
			//all star update location..

			i_sec++;
		}
		//cout<<i_day<<endl;
		
		topy.push_back( i_day );
		i_day++;
	}

	return topy.size();
}
