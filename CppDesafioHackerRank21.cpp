/*Given a text file with many lines of numbers to format and print, for each row of  space-separated doubles, format and print the numbers using the specifications in the Output Format section below.
Input Format
The first line contains an integer, , the number of test cases.
Each of the  subsequent lines describes a test case as  space-separated floating-point numbers: , , and , respectively.
Constraints
•	
•	Each number will fit into a double.
Output Format
For each test case, print  lines containing the formatted , , and , respectively. Each , , and  must be formatted as follows:
1.	: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the  prefix) in lower case letters.
2.	: Print it to a scale of  decimal places, preceded by a  or  sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly  characters wide.
3.	: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.
Sample Input
1  
100.345 2006.008 2331.41592653498
Sample Output
0x64             
_______+2006.01  
2.331415927E+03
Explanation
For the first line of output,  (in reverse, ).
The second and third lines of output are formatted as described in the Output Format section.

 
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;
        int A2;
        A2=(int)A;
        cout<<"0x"<<hex<<A2;
        cout<<endl;
        if(B>0)
            cout<<"+"<<fixed<<setprecision(2)<<B;        
        else
            cout<<"-"<<fixed<<setprecision(2)<<B;        
                  
        cout<<endl;
        cout<<scientific<<setprecision(9)<<C;
        /* Enter your code here */

    }
    return 0;

}

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;
        int A2;
        int totChar=0;
        A2=(int)A;
        cout<<"0x"<<hex<<A2;
        cout<<endl;
        /*stringstream stream;
        stream<<fixed<<setprecision(2)<<B;
        string s =stream.str();*/
        //float s = B;
        string s = to_string (B); 
        //s<<fixed<<setprecision(2)<<B
         for(int i=0; s[i] != '\0'; i++){
            if(s[i]!=' ')
            {
                totChar++;
            }
        }
        for(int i=0;i<totChar;++i)
            cout<<"_";
        if(B>0)
            cout<<"+"<<fixed<<setprecision(2)<<B;        
        else
            cout<<"-"<<fixed<<setprecision(2)<<B;        
                    
        cout<<endl;
        cout<<scientific<<setprecision(9)<<C;
        /* Enter your code here */

    }
    return 0;

}
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;
        int A2;
        int totChar=0;
        A2=(int)A;
        cout<<setw(-12)
<<"0x"<<hex<<A2;
        cout<<endl;
        /*stringstream stream;
        stream<<fixed<<setprecision(2)<<B;
        string s =stream.str();*/
        //float s = B;
        float B2=B;
        //s<<fixed<<setprecision(2)<<B
        string s = to_string (B); 
         for(int i=0; s[i] != '.'; i++){
            if(s[i]!=' ')
            {
                totChar++;
            }
        }
        totChar+=3;
        for(int i=0;i<totChar;++i)
            cout<<"_";
        if(B>0)
            cout<<"+"<<fixed<<setprecision(2)<<B;        
        else
            cout<<"-"<<fixed<<setprecision(2)<<B;        
                    
        cout<<endl;
        cout<<scientific<<setprecision(9)<<C;
        /* Enter your code here */
        cout << setw(0xf) << internal;

    }
    return 0;

}

include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;
        int A2;
        int totChar=0;
        A2=(int)A;
        
        cout<<setw(-12);
        cout<<"0x"<<hex<<A2;
        cout<<endl;
        /*stringstream stream;
        stream<<fixed<<setprecision(2)<<B;
        string s =stream.str();*/
        //float s = B;
        float B2=B;
        //s<<fixed<<setprecision(2)<<B
        string s = to_string (B); 
        for(int i=0; s[i] != '.'; i++)
            if(s[i]!=' ')
                totChar++;
        //totChar+=3;
        //int t=14-totChar;
        //totChar=11-totChar;
        /*for(int i=0;i<totChar;++i)
            cout<<"_";*/
        totChar=12-totChar;
        cout<<setfill('_')<<setw(totChar) << internal;
        if(B>0)
            cout<<"+"<<fixed<<setprecision(2)<<B;        
        else
            cout<<"-"<<fixed<<setprecision(2)<<B;        
                    
        cout<<endl;
        cout<<scientific<<setprecision(9)<<C<<endl;
        /* Enter your code here */
cout << setiosflags(ios::uppercase);

        cout << setw(0xf) << internal;
    }
    return 0;

}


int fill;
        int totChar=0;
        A2=(int)(A+0.5);
        if (A2<16)
            fill=-13;
        else if(A2<256)
            fill=-12;
        else if(A2<4096)
            fill = -11;
        else if(A2<65535)
            fill = -10;
        else if(A2<1048575)
            fill= -9;
        else
            fill=-8;
        cout<<setw(fill);

*/

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;
        int A2;
        int fill;
        int totChar=0;
        A2=(int)(A+0.5);
        if (A2<16)
            fill=-13;
        else if(A2<256)
            fill=-12;
        else if(A2<4096)
            fill = -11;
        else if(A2<65535)
            fill = -10;
        else if(A2<1048575)
            fill= -9;
        else
            fill=-8;
        cout<<setw(fill);//em vez de -12 colocar o tamanho de acordo com o que sera digitado
        cout << nouppercase;
        
        cout/*<<"0x"*/<<hex<<showbase<<A2;
        cout<<endl;
        /*stringstream stream;
        stream<<fixed<<setprecision(2)<<B;
        string s =stream.str();*/
        //float s = B;
        float B2=B;
        //s<<fixed<<setprecision(2)<<B
        string s = to_string (B); 
        for(int i=0; s[i] != '.'; i++)
            if(s[i]!=' ')
                totChar++;
        //totChar+=3;
        //int t=14-totChar;
        //totChar=11-totChar;
        /*for(int i=0;i<totChar;++i)
            cout<<"_";*/
        totChar=12-totChar;
        cout<<setfill('_')<<setw(totChar) << internal;
        B+=0.005;

        if(B>0)
            cout<<"+"<<fixed<<setprecision(2)<<B;        
        else
            cout<<"-"<<fixed<<setprecision(2)<<B;        
                    
        cout<<endl;
        C+=0.0000000005;

        cout << setiosflags(ios::uppercase);
        cout<<scientific<<setprecision(9)<<C<<endl;
        /* Enter your code here */
        cout << setiosflags(ios::uppercase);
        cout << setw(0xf) << internal;
    }
    return 0;

}

