class Star
{
	private:
	//protected:
	const long double radius; // m
	const long double weight; // kg
	double long speed; // m/s ??
	double long location[3]; // loc[0] = x, loc[1] = y, loc[2] = z..
	double direction[3]; // dir[0] = x, dir[1] = y, dir[2] = z..
	
	public:
	Star(long double loc[3], double dir[3], long double spd, long double wgt, long double rds)
		:radius(rds), weight(wgt)
	{
		direction[0] = dir[0];
		direction[1] = dir[1];
		direction[2] = dir[2];
		location[0]  = loc[0];
		location[1]  = loc[1]; 
		location[2]  = loc[2]; 
		speed = spd;
	}
	//Star() {}

	~Star() {}

	long double Wgt() const {	return weight; }
	long double Rds() const {	return radius; }
	long double Spd() const {	return speed; }
	long double X()   const {	return location[0]; }	
	long double Y()   const {	return location[1]; }	
	long double Z()   const {	return location[2]; }	
	
	void LocUpdate(const double long new_loc[3])
	{
		location[0] = new_loc[0];
		location[1] = new_loc[1];
		location[2] = new_loc[2];
	}
};
