#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a,Rect b){
	if( abs(a.x+a.w) > abs(b.x+b.w)){
		return b.w*b.h;
	}
	else if (abs(a.x - b.x) < a.w || a.x - b.x > 0){
		double width = abs((a.x + a.w)-b.x);
		double height = abs((a.y+ a.h)-b.y) ;
		return width * height ;
	}
	else if(abs(a.x - b.x) < a.w ){
		double width = abs((b.x + b.w)-a.x);
		double height = abs((b.y+ b.h)-a.y) ;
		//cout << width << " "<< height << endl;
		return width * height ;
	}
	else{
		return 0;
	}

}
int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};

	Rect R3 = {1,1,5,5};
	Rect R4 = {7,2,3,3};
	
	Rect R5 = {-1,2,6.9,9.6};
	Rect R6 = {0,0,1.2,2.5};
	
	cout << overlap(R1,R2) << endl; 
	cout << overlap(R3,R4) << endl;
	cout << overlap(R5,R6) << endl;

	return 0;
}
