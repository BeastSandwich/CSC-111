#include <iostream>
using namespace std;

class rectangle
{
	private:
		int width, height;
	public:
		void set_values (int width, int height);
		int area ()
		{
		return width*height;
		}
};

void rectangle::set_values (int x, int y)
{
	width = x;
	height = y;

}

int main ()
{
	int x;
	int y;
	rectangle tangle;
	
	cout << "Name the width of your rectangle." <<endl;
	cin >> x;
	cout << "Name the height of your rectangle." <<endl;
	cin >> y;
	
	tangle.set_values (x,y);
	
	cout << "The rectangle's area is " << tangle.area() << endl;
	
	return 0;
}