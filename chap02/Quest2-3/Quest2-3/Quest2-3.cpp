#include<iostream>
using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2) {
	Point* result= new Point;
	result->xpos = p1.xpos + p2.xpos;
	result->ypos = p1.ypos + p2.ypos;
	return *result;
}

int main() {
	Point* p1 = new Point;
	p1->xpos = 3;
	p1->ypos = 30;
	Point* p2 = new Point;
	p2->xpos = 70;
	p2->ypos = 7;

	Point& Res = PntAdder(*p1, *p2);
	cout << "Res(" << Res.xpos << ", " << Res.ypos << ")" << endl;


	delete p1;
	delete p2;
	delete& Res;

	return 0;
}