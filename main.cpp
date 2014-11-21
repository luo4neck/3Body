#include<stdlib.h>
#include<iostream>
#include<vector>
#include "Class_Star.hpp"

using namespace std;

int _main();

extern "C"
{
	//int Main()
	void Main()
	{
	cout<<"fine Cpp"<<endl;
		int Num_Loc = _main();
	
	//	return Num_Loc;// Number of locations..
	}
}

int _main()
{
	unsigned int i_day = 0;
	unsigned int i_day_max = 100;
	
	while( i_day < i_day_max )	// main loop for days..
	{
		unsigned int i_sec = 0;
		unsigned int i_sec_max = 86400;
		//while( i_sec < i_sec_max )  // main loop for seconds in a day.. 
		{
			//all star get F..
			//all star move..
			//all star update location..

			i_sec++;
		}
		cout<<i_day<<endl;
	
		i_day++;
	}


	return 0;
}
