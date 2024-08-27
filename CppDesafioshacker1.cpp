/*A sample loop is

for(int i = 0; i < 10; i++) {
    ...
}
In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
oddA sample loop is
In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
for(int i = 0; i < 10; i++) {
    ...
}
In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a;
    cin>>b;
    for(int n =a; n<=b;++n){
        if ( n==1)
            cout<<"one"<<endl;
        else if (n==2)
            cout<<"two"<<endl;
        else if (n==3)
            cout << "three"<<endl;
        else if (n==4)
            cout << "four"<<endl;
        else if(n==5)
            cout<<"five"<<endl;
        else if(n==6)
            cout<<"six"<<endl;
        else if(n==7)
            cout<<"seven"<<endl;
        else if(n==8)
            cout<<"eight"<<endl;
        else if (n==9)
            cout<<"nine"<<endl;
        else if(n>9 && n%2==0)
            cout<<"even"<<endl;
        else 
            cout<<"odd"<<endl;
        
        }
    
    return 0;
}