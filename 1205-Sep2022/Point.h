class Point
{
	// Data Members
private:
	int x;
	int y;

	// Function Members
public:
	Point();
	Point(int x, int y);
	Point(Point const &src);
	int GetX();
	int GetY();
	void Set(int x, int y);
};
