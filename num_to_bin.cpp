#include<iostream>
using namespace std;
void bin(unsigned n)
{
  if (n>1)
  {
  	bin(n/2);
  	/* code */
  }
  cout<<(n%2);

}
int main(int argc, char const *argv[])
{
	unsigned n;
	cin>>n;
	cout<<"binary representaion of "<<n<<" is"<<endl;
	bin(n);
	cout<<endl;
	return 0;
}