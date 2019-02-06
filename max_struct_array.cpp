//struct array of height 
#include<iostream>
#include<climits>
using namespace std;
struct height{
	int feet;
	int inches;
};
int find_Max(struct height arr[], int n)
 { 
 	int  temp;
    int mx=INT_MIN;
   for(int i=0;i<n;i++)
   	 {
       temp=12*(arr[i].feet)+arr[i].inches;  // 1 inches=12*feet
       mx=max(mx,temp);
   	 }
   return mx;
  
 }
int main()
 {
   int res;
   height arr[]={
         {1,3},
         {10,5},
         {6,8},
         {3,7},
         {5,9}
       };
   res=find_Max(arr,5);
  cout<<res<<endl;
 return 0;
 }