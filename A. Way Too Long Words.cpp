#include <iostream>
#include <string>
using namespace std;
 
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	  string s;
      cin>>s;
      
      string ans;
      if(s.length() <= 10)
          cout<<s<<endl;
      else 
          {
              int n = s.length() - 2;
              string num = to_string(n);
              ans = s.at(0) + num + s.at(s.length() - 1);
              cout<<ans<<endl;
              
          }
      
      
      
      
	}
	
	
	return 0;
}
