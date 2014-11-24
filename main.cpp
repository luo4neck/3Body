#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<vector>
#include<list>
#include "class_Star.hpp"


using namespace std;

const long double G = 6.67259 * pow(10, -11);
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
	
	list<class Star> stars;
	list<class Star>:: iterator stritr;
	
	{
		long double loc[3] = {0, 0, 0};
		double dir[3] = {0, 0, 0};
		Star sun(loc, dir, 1.0, 10.0, 10.0);
		// for sun: r=6.96*pow(10,8)m, wgt = 2*pow(10, 30)kg
		stars.push_back(sun);
		Star earth(loc, dir, 1.0, 18.0, 19.0);
		// for earth: r = 6372797m, wgt = 5.9742*pow(10, 24)kg
		stars.push_back(earth);
	}
	
	for(stritr = stars.begin(); stritr != stars.end(); ++stritr)
	{
		cout<<stritr->Wgt()<<endl;
		cout<<stritr->Rds()<<endl;
	}

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
