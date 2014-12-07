#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<vector>
#include<list>
#include "class_Star.hpp"

using namespace std;

const long double G = 6.67259e-11;
const double pi = 3.14159265359; 
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
// main simulation function, will be called by py_star.py
{
	/*special defination for sun-earth..*/
	const long double SEdis = 149597887500; //m.. distance..
	const long double SEprt = 2*pi*SEdis;//m.. perimeter..
	/*special defination for sun-earth..*/
	
	long double loc[3] = {0, 0, 0};
	double dir[3] = {0, 0, 0};
	Star sun(loc, dir, 0, 2e30, 6.96e8);
	// for sun: spd = 0m/s, wgt = 2*pow(10, 30)kg, r=6.96*pow(10,8)m
	// sun start from x=0, y=0, z=0..

	loc[0] = SEdis;
	loc[1] = 0;
	loc[2] = 0;
	Star earth(loc, dir, 29783.0, 5.9742e24, 6372797.0);
	// for earth: spd = 29783m/s, wgt = 5.9742*pow(10, 24)kg, r = 6372797m
	// earth start from x=SEdis, y=0, z=0..

	
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

	cout<<G<<endl;
	return topy.size();
}
