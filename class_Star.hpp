class Star
{
	private:
	protected:
	const double radius;
	const double weight;
	double speed;
	double location[3]; // loc[0] = x, loc[1] = y, loc[2] = z..
	double direction[3]; // dir[0] = x, dir[1] = y, dir[2] = z..
	
	public:
	Star(double loc[3], double dir[3], double spd, double wgt, double rds)
		:radius(rds), weight(wgt)
	{
		direction[0] = dir[0];
		direction[1] = dir[1];
		direction[2] = dir[2];
		location[0]  = loc[0];
		location[1]  = loc[1]; 
		location[2]  = loc[2]; 
	}
	Star() {}

	~Star() {}

	double Wgt() const {	return weight; }
	double Rds() const {	return radius; }
};
