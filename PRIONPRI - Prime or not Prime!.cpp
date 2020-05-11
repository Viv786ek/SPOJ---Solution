#include <iostream>
using namespace std;
int main(){
	int tc;cin>>tc;
	while(tc--){
	
   int num;
   bool flag = true;
   
   cin>>num;

   for(int i = 2; i <= num / 2; i++) {
      if(num % i == 0) {
         flag = false;
         break;
      }
   }
   if (flag==true)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
   
}
return 0;
}
