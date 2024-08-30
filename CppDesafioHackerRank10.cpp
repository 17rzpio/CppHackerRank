/*In this challenge, we work with string streams.
stringstream is a stream class to operate on strings. It implements input/output operations on memory (string) based streams. stringstream can be helpful in different type of parsing. The following operators/functions are commonly used here
•	Operator >> Extracts formatted data.
•	Operator << Inserts formatted data.
•	Method str() Gets the contents of underlying string device object.
•	Method str(string) Sets the contents of underlying string device object.
Its header file is sstream.
One common use of this class is to parse comma-separated integers from a string (e.g., "23,4,56").
stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
Here  is a storage area for the discarded commas.
If the >> operator returns a value, that is a true value for a conditional. Failure to return a value is false.
Given a string of comma delimited integers, return a vector of integers.
Function Description
Complete the parseInts function in the editor below.
parseInts has the following parameters:
•	string str: a string of comma separated integers
Returns
•	vector<int>: a vector of the parsed integers.
Note You can learn to push elements onto a vector by solving the first problem in the STL chapter.
Input Format
There is one line of  integers separated by commas.
Constraints
The length of  is less than .
Sample Input
23,4,56
Sample Output
23
4
56


#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> v1;
    vector<int> v2;
    for(int n =0; n <str.length(); ++n){
        while (str[n]!= ',')
            v2.push_back(int((str[n])));
        v1.push_back(v2);
        v2.clear();
    }
    return v1;
    // Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> parseInts(string str) {
    vector<vector<int>> v1;
    vector<int> v2;
    for(int n =0; n <str.length(); ++n){
        while (str[n]!= ',')
            v2.push_back(int((str[n])));
        v1.push_back(v2);
        v2.clear();
    }
    return v1;
    // Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<vector<int>> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) 
        cout << integers[i] << "\n";
    
    
    return 0;
}


#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> v1;
    string copia="";
    for(int n =0; n <str.length(); ++n){
        while (str[n]!= ',')
            copia+=str[n];
        v1.push_back(int(copia));
        copia.clear();
    }
    return ;
    // Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) 
        cout << integers[i] << "\n";
    
    
    return 0;
}
#include <sstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> v1;
    string copia="";
    int n=0;
    while( n <str.length() ){
        while (str[n]!= ','){
            copia+=str[n];
            ++n;
        }
        int copia2 = stoi(copia);
        v1.push_back(copia2);
        copia.clear();
        ++n;
    }
    return v1;
    // Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) 
        cout << integers[i] << "\n";
    
    
    return 0;
}

#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> parseInts(string str) {
    vector<int> v1;
    string copia="";
    int n=0;
    while( n <str.length() ){
        while (str[n]!= ','){
            size_t tamanho = copia.length();
            copia[tamanho]=str[n];
            copia[tamanho+1]='\0';
            ++n;
        }
        int copia2 = stoi(copia);
        v1.push_back(copia2);
        copia.clear();
        ++n;
    }
    return v1;
    // Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) 
        cout << integers[i] << "\n";
    
    
    return 0;
}

#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <cstdlib>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> v1;
    vector<string> copia;
    int n=0,m=0;
    size_t valor;
    string copia3;
    while( n <str.length() ){
        m=0;
        vector<string>::iterator it = copia.begin();
        while (str[n]!= ','){
            //copia.push_back(str[n]);
            copia[n]=
            ++n;
            ++it;
            ++m;
        }
        valor = copia.strlen();
        copia3.assign(copia,valor);
        int copia2 = stoi(copia3);
        v1.push_back(copia2);
        copia.clear();
        ++n;
    }
    return v1;
    // Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) 
        cout << integers[i] << "\n";
    
    
    return 0;
}

#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <cstdlib>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> v1;
    string copia="";
    int n=0;
    while( n <str.length() ){
       
        while (str[n]!= ','){
            size_t tamanho = strlen(copia);
            copia[tamanho]=str[n];
            copia[tamanho+1]='\0';
            ++n;
        }
        int copia2 = stoi(copia);
        v1.push_back(copia2);
        copia.clear();

        ++n;
    }
    return v1;
    // Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) 
        cout << integers[i] << "\n";
    
    
    return 0;
}
*/
#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <cstdlib>
#include <cstring>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> v1;
    string copia="";
    int n=0;
    int n2 = str.length();
    char char_array[n2 + 1];
    strcpy(char_array, str.c_str());
    while( n <n2 ){
        while (char_array[n]!= ','){
            copia+=str[n];
            ++n;

        }
        int copia2 = stoi(copia);
        v1.push_back(copia2);
        copia.clear();

        ++n;
    }
    return v1;
    // Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) 
        cout << integers[i] << "\n";
    
    
    return 0;
}


