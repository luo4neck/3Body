#include<stdlib.h>
#include<iostream>
#include<vector>
#include<boost/python/list.hpp>
#include<boost/python.hpp>
//#include<boost>
#include "Class_Star.hpp"

using namespace std;
namespace py = boost::python;

int run(vector<int> topy);

extern "C"
{
	vector<int> topy;

	void Run()
	{
		int Num_Loc = run(topy);
		
		cout<<"Totally "<<Num_Loc<<endl;
	}
/*	
	void Display(int dic[100])
	{
		int* a = &topy[0];
		for(int i=0; i<100; ++i)
		{
			dic[i] = a[i];
		cout<<"fine Cpp"<<endl;
			//dic[i] = topy[i];
		}
	}
*/	
	py::list vector2list()
	//py::list vector2list(const vector<int>& topy)
	{
		py::object get_iter = py::iterator< vector<int> >();
		py::object iter = get_iter(topy);
		py::list l(iter);
		return l;
	}
}// "C" end here..

int run(vector<int> topy)
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
