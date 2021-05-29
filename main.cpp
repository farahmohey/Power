/*
    AUTHOR : Farah Mohey El-deen Qassem / 20190378
*/
#include <iostream>

using namespace std;
int power1(int a , int n )
{
    if (n==0)
        return 1;
    else
        return(a*power1(a,n-1));
}


int power2(int a , int n )
{
    if (n == 0) {
        return 1;
    }
// if n "power" is odd
     if (n %2== 1) {
        return a * power2(a, n / 2) * power2(a, n / 2);
    }

// if n "power" is even
    return power2(a, n / 2) * power2(a, n / 2);
}


int main()
{
    string testCases;
    while(true)
    {
        int a,b;
        cin>>a>>b;
        cout << power1(a,b) << endl;
        cout<<"Type exit if you want to go to the two prepared test cases in the code if you want to continue type continue"<<endl;
        cin>>testCases;
        if(testCases=="exit"||testCases=="Exit")
            break;
    }
    cout << power2(2,3) << endl;
    cout << power2(2,4) << endl;
    cout << power1(3,3) << endl;
}
