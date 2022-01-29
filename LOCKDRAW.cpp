#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        if(A+B==C||B+C==A||A+C==B)
        {
            cout<<"YES"<<endl;
            
        }
        else
        {
            cout<<"NO"<<endl;
            
        }
        
        
        
        
    }
	// your code goes here
	return 0;
}
