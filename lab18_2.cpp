#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *a,Rect *b){
    double width = max(0.0, min(a->x + a->w, b->x + b->w) - max(a->x, b->x));
    double height = max(0.0, min(a->y, b->y) - max(a->y - a->h, b->y - b->h));
    return width * height;

}
int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};

	Rect R3 = {1,1,5,5};
	Rect R4 = {7,2,3,3};
	
	Rect R5 = {-1,2,6.9,9.6};
	Rect R6 = {0,0,1.2,2.5};
	
	cout << overlap(&R1,&R2) << endl; 
	cout << overlap(&R3,&R4) << endl;
	cout << overlap(&R5,&R6) << endl;

	return 0;
}
