class Point
{
	// Data Members
private:
	int x;
	int y;

	// Function Members
public:
	Point();		// default constructor
	Point(int x, int y);
	Point(Point const &src);
	int GetX();
	int GetY();
	void Set(int x, int y);
	void AddX(Point &src);
};
