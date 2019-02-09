#include<iostream>
#include<string.h>
using namespace std;
bool isVowel(char ch)
 {
   if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
   	return true;
   else
   	false;
 }
int difficult(string str1)
 {
   
   int l1,l2,count_vowels=0,count_conson=0,consec_conson=0;
   int count_hard=0,count_easy=0;
   l1=str1.length();

///

  for(int i=0;i<l1;i++)
   	 {
   	 	///
	       if(str1[i]!=' ' && isVowel(str1[i]))
	       {
	       	count_vowels++;
	       	consec_conson=0;
	       }
	       else if (str1[i]!=' ')
	       {
	       	count_conson++;
	       	consec_conson++;
	       }
  
 
 	///

	       if(consec_conson==4)
	        {

	          count_hard++; 
	          while(i<l1 && str1[i]!=' ')
	     		i++;
	     	  count_vowels=0;
	     	  count_conson=0;
	     	  consec_conson=0;
	           }



	        else if(str1[i] ==' ' || i==(l1-1))
	          {
                if(count_conson > count_vowels)
	     	      count_hard++;
               else 
               	 count_easy++;


               	
	        	count_vowels=0;
	     	    count_conson=0;
	     	  	consec_conson=0;
                 }



   	      }
       cout<<count_hard<<endl;
       cout<<count_easy<<endl;

       /// formulae
      return (5*(count_hard)+3*(count_easy));



 }
int main()
 {
    string str1="I AM A GEEK";
    string str2="we are GEEKs";
    cout<<difficult(str1)<<endl;
    cout<<difficult(str2)<<endl;
    
    string str3;
    getline(cin,str3);//
    cout<<difficult(str3)<<endl;
       
 	return 0;
 }