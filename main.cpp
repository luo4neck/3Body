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
	// for sun: spd = 0m/s, wgt = 2e30kg, r=6.96e8m
	// sun start from x=0, y=0, z=0..

	loc[0] = SEdis; //x
	loc[1] = 0;		//y
	loc[2] = 0;		//z
	Star earth(loc, dir, 29783.0, 5.9742e24, 6372797.0);
	// for earth: spd = 29783m/s, wgt = 5.9742e24kg, r = 6372797m
	// earth start from x=SEdis, y=0, z=0..

	
	unsigned int i_day = 0;
	unsigned int i_day_max = 365;
	unsigned int i_sec_sum = 0;
	while( i_day < i_day_max )	// main loop for days..
	{
		unsigned int i_sec = 0;
		unsigned int i_sec_max = 86400;
		while( i_sec < i_sec_max )  // main loop for seconds in a day.. 
		{
			//all star get F..
			long double ArcLen = i_sec_sum * earth.Spd();
			double Angle = ArcLen * 2.0 * pi / SEprt;
			

			//all star move..
			

			//all star update location..
			double new_x = cos(Angle) * SEdis;
			double new_y = sin(Angle) * SEdis;
			//double new_z;
			
			double long new_loc[3] = {new_x, new_y, 0};
			earth.LocUpdate(new_loc);

			i_sec++;
			i_sec_sum++; 
		}
		
		//cout<<"Day: "<<i_day+1<<endl;
		cout<<earth.X()<<" "<<earth.Y()<<endl;
		//cout<<"X= "<<earth.X()<<endl<<"Y= "<<earth.Y()<<endl<<"Z= "<<earth.Z()<<endl<<endl;

		topy.push_back( i_day );
		i_day++;
	}
	cout<<i_sec_sum<<" "<<earth.Spd()<<endl;	
	cout<<"move year: "<<i_sec_sum * earth.Spd()<<endl;
	cout<<SEprt<<endl;

	cout<<G<<endl;
	return topy.size();
}
