/*A class defines a blueprint for an object. We use the same syntax to declare objects of a class as we use to declare variables of other basic types. For example:
Box box1;          // Declares variable box1 of type Box
Box box2;          // Declare variable box2 of type Box
Kristen is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the  exams given during this semester.
Create a class named  with the following specifications:
•	An instance variable named  to hold a student's  exam scores.
•	A void input() function that reads  integers and saves them to .
•	An int calculateTotalScore() function that returns the ‎soma‎ of the student's scores.
Input Format
Most of the input is handled for you by the locked code in the editor.
In the void Student::input() function, you must read  scores from stdin and save them to your  instance variable.
Constraints


Output Format
In the int Student::calculateTotalScore() function, you must return the student's total grade (the sum of the values in ).
The locked code in the editor will determine how many scores are larger than Kristen's and print that number to the console.
Sample Input
The first line contains , the number of students in Kristen's class. The  subsequent lines contain each student's  exam grades for this semester.
3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10
Sample Output
1
Explanation
Kristen's grades are on the first line of grades. Only  student scored higher than her.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
    private:
int n;
      int notas[n][5];
    public:
int this[int i]{
           void setNotas(int Notas){
                notas[i] = Notas;
            }
            int getNotas(){
                return notas[i];
            }
        }

        input(){
            for(int p=0;p<n;++p)
                for(int m=0;m<5;++m)
                    cin>>notas[m][p];
            return;
        }
        calculateTotalScore(){
                            int soma=0;
                for(int m=0;m<5;++m)
                    soma+=notas[m][n];
                return soma;

        }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
// Write your Student class here

class Student{
    private:
    public:
        int* notas; 
        Student (int n){
            notas = new int [n];
        }
        input(){
            for(int p=0;p<n;++p)
                for(int m=0;m<5;++m)
                    cin>>notas[m][p];
        }
        calculateTotalScore(){
                int soma=0;
                for(int m=0;m<5;++m)
                    soma+=notas[n][m];
                return soma;
        }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
// Write your Student class here

class Student{
    private:
    public:
        int numero;
        Student (int n){
            numero = n;
        }
        input(){
            for(int p=0;p<n;++p)
                for(int m=0;m<5;++m)
                    cin>>notas[m][p];
        }
        calculateTotalScore(){
                int soma=0;
                for(int m=0;m<5;++m)
                    soma+=notas[n][m];
                return soma;
        }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}





using namespace std;
 
class Test {
    // private variables
    int x, y;
 
public:
    // dummy constructor
    Test() {}
 
    // parameterised constructor
 
    Test(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
 
    // function to print
    void print() { cout << x << " " << y << endl; }
};
 
int main()
{
    // allocating dynamic array
    // of Size N using new keyword
    Test* arr = new Test[N];
 
    // calling constructor
    // for each index of array
    for (int i = 0; i < N; i++) {
        arr[i] = Test(i, i + 1);
    }
 
    // printing contents of array
    for (int i = 0; i < N; i++) {
        arr[i].print();
    }
 
    return 0;
}


How to initialize Array of objects with parameterized constructors in C++

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
// Write your Student class here

class Student{
    private:
    public:
        int notas[5];
        Student (){
        }
        void input(){
            for(int m=0;m<5;++m)
                cin>>notas[m];
        }
        int calculateTotalScore(){
                int soma=0;
                for(int m=0;m<5;++m)
                    soma+=notas[m];
                return soma;
        }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

