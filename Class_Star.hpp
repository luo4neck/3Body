class Star
{
	private:
	protected:
	int rad;
	int weight;
	int loc[3]; // loc[0] = x, loc[1] = y, loc[2] = z..
	
	public:
	Star() {}
	Star(int x, int y, int z)
	{
		loc[0] = x;
		loc[1] = y;
		loc[2] = z;
	}

};
