struct Loc
// used to store locations of earth..
{
	double x;
	double y;
	double z;
};

Loc MakeLoc(long double x, long double y, long double z)
// return a new location..
{
	Loc newloc;
	newloc.x = x;
	newloc.y = y;
	newloc.z = z;
	return newloc;
}
