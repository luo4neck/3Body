class Star
{
	private:
	protected:
	double rad;
	double weight;
	double speed;
	double loc[3]; // loc[0] = x, loc[1] = y, loc[2] = z..
	double dir[3]; // dir[0] = x, dir[1] = y, dir[2] = z..
	
	public:
	Star() {}
	Star(int x, int y, int z)
	{
		loc[0] = x;
		loc[1] = y;
		loc[2] = z;
	}

	~Star() {}
};
