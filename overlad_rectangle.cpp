// Find if two rectangles overlap
#include<iostream>
using namespace std;
struct point{
	int x,y;
};
bool isOVERLAP(point l1,point r1, point l2,point r2)
  {
    if((r1.y<=l2.y) && (l1.x<=r2.x))
    	return true;
    else
    	return false;

  }
int main()
 {
 	point l1={0,10}, r1={10,0};
 	point l2={-10,-1} , r2 = {0,-11};
    if (isOVERLAP(l1,r1,l2,r2))
       printf("Reactangle Overlap");
     else
     	printf("Reactangle doesnot Overlap");

   	return 0;
 }
