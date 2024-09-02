/*Box It!
20 more points to get your gold badge!
Rank: 108189|Points: 230/250
CPP

Problem

Submissions

Leaderboard

Discussions

Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length , breadth , and height .
The default constructor of the class should initialize , , and  to .
The parameterized constructor Box(int length, int breadth, int height) should initialize Box's  and  to length, breadth and height.
The copy constructor BoxBox ) should set  and  to 's  and , respectively.
Apart from the above, the class should have  functions:
•	int getLength() - Return box's length
•	int getBreadth() - Return box's breadth
•	int getHeight() - Return box's height
•	long long CalculateVolume() - Return the volume of the box
Overload the operator  for the class Box. Box   Box  if:
1.	 < 
2.	 <  and ==
3.	 <  and == and ==
Overload operator  for the class Box().
If  is an object of class Box:
 should print ,  and  on a single line separated by spaces.
For example,
Box b1; // Should set b1.l = b1.b = b1.h = 0;
Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
b2.getLength();	// Should return 2
b2.getBreadth(); // Should return 3
b2.getheight();	// Should return 4
b2.CalculateVolume(); // Should return 24
bool x = (b1 < b2);	// Should return true based on the conditions given
cout<<b2; // Should print 2 3 4 in order.
Constraints

Two boxes being compared using the  operator will not have all three dimensions equal.
#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
    private:
    public:
        int l,b,h;
        Box(){
            l=0;
            b=0;
            h=0;

        }
        Box(int l2,int b2,int h2){
            l = l2;
            b = b2;
            h = h2;
        }
        Box(Box &v){
            l=v.l;
            b=v.b;
            h=v.h;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return l*b*h;
        } 
        bool operator > (Box const &obj){
            if(l>obj.l)
                return true;
            else if(l<obj.l)
                return false;
            else if(l==obj.l && b>obj.b)
                return true;
            else if(l==obj.l && b==obj.b && h>obj.h)
                return true;
            else 
                return false;
        } 
        bool operator < (Box const &obj){
            if(l<obj.l)
                return true;
            else if(l>obj.l)
                return false;
            else if(l==obj.l && b<obj.b)
                return true;
            else if(l==obj.l && b==obj.b && h<obj.h)
                return true;
            else 
                return false; 
        }
friend ostream &operator << (ostream &out, Box const &obj);
        
};
ostream & operator << (ostream &out, Box const &obj){
            out << to_string(obj.l) + " " + to_string(obj.b) + " " + to_string(obj.h);
            return out;
        }

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}


Overloading stream insertion (<>) operators in C++ - GeeksforGeeks

#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
    private:
        int l,b,h;
    public:

        Box(){
            l=0;
            b=0;
            h=0;
        }
        Box(int length,int breadth,int height){
            l = length;
            b = breadth;
            h = height;
            
        }
        Box(Box &v){
            l=v.l;
            b=v.b;
            h=v.h;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return l*b*h;
        } 
        bool operator > (Box const &obj){
            if(l>obj.l)
                return true;
            else if(l<obj.l)
                return false;
            else if(l==obj.l && b>obj.b)
                return true;
            else if(l==obj.l && b<obj.b)
                return false;
            else if(l==obj.l && b==obj.b && h>obj.h)
                return true;
            else 
                return false;
        } 
        bool operator < (Box const &obj){
            if(l<obj.l)
                return true;
            else if(l>obj.l)
                return false;
            else if(l==obj.l && b<obj.b)
                return true;
            else if(l==obj.l && b>obj.b)
                return false;
            else if(l==obj.l && b==obj.b && h<obj.h)
                return true;
            else 
                return false; 
        }
        friend ostream &operator << (ostream &out, Box const &obj);
        
};

ostream &operator << (ostream &out, Box const &obj){
            out << to_string(obj.l) << " " << to_string(obj.b) << " " << to_string(obj.h);
            return out;
        }
        



c++ - Sobrecarga do operador >> cin - Stack Overflow

usar o istream e a sobrecarga do cin >>

conforme link ostream pode estar errado e pode ser preciso implementar todas as ordençãoes


#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
    private:
        int l,b,h;
    public:

        Box(){
            l=0;
            b=0;
            h=0;
        }

        Box(int length,int breadth,int height){
            if(length<10*10*10*10*10)
                l = length;
            if(breadth<10*10*10*10*10)
                b = breadth;
            if(height<10*10*10*10*10)
                h = height;
            
        }
        Box(Box &B){
            l=B.l;
            b=B.b;
            h=B.h;
        }
        
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return l*b*h;
        } 
        bool operator > (Box const &obj){
            if(l>obj.l)
                return true;
            //else if(l<obj.l)
              //  return false;
            else if(l==obj.l && b>obj.b)
                return true;
            //else if(l==obj.l && b<obj.b)
              //  return false;
            else if(l==obj.l && b==obj.b && h>obj.h)
                return true;
            //else if(l==obj.l && b==obj.b && h<obj.h)
              //  return false;
            else if(l==obj.l && b==obj.b && h==obj.h)
                return false;
            else
                return false;
        } 
        bool operator < (Box const &obj){
            if(l<obj.l)
                return true;
           // else if(l>obj.l)
             //   return false;
            else if(l==obj.l && b<obj.b)
                return true;
            //else if(l==obj.l && b>obj.b)
              //  return false;
            else if(l==obj.l && b==obj.b && h<obj.h)
                return true;
            //else if(l==obj.l && b==obj.b && h>obj.h)
              //  return false;
            else if(l==obj.l && b==obj.b && h==obj.h)
                return false;
            else
                return false;
        }
        friend ostream &operator << (ostream &stream, Box const &obj);
        friend istream &operator >> (istream &stream, Box &obj);
};

ostream &operator << (ostream &stream, Box const &obj){
            stream << to_string(obj.l) << " " << to_string(obj.b) << " " << to_string(obj.h);
            return stream;
        }
        istream &operator >> (istream &out, Box &obj){
            out >> obj.l  >> obj.b >> obj.h;
            return out;
        }
        

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}


include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
    private:
        int l,b,h;
    public:

        Box(){
            l=0;
            b=0;
            h=0;
        }

        Box(int length,int breadth,int height){
            //if(length<10*10*10*10*10)
            l = length;
            //if(breadth<10*10*10*10*10)
            b = breadth;
            //if(height<10*10*10*10*10)
            h = height;
            
        }
        Box(Box &B){
            l=B.l;
            b=B.b;
            h=B.h;
        }
        /*Box& operator=(Box other)
        {
            
            swap(other);
            return *this;
        }*/
        /*Box& operator=(Box& B)
        {
            B.l=l;
            B.b=b;
            B.h=h;
            return B;
        }*/
        
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return l*b*h;
        } 
        
        /*inline bool operator > (Box const &obj){
            if(l>obj.l)
                return l>obj.l;
            //else if(l<obj.l)
              //  return false;
            else if(l==obj.l && b>obj.b)
                return b>obj.b;
            //else if(l==obj.l && b<obj.b)
              //  return false;
            else if(l==obj.l && b==obj.b && h>obj.h)
                return h>obj.h;
            //else if(l==obj.l && b==obj.b && h<obj.h)
              //  return false;
          //  else if(l==obj.l && b==obj.b && h==obj.h)
         //       return false;
            else
                return false;
        } */
        bool operator < (Box &obj){
            if(l<obj.l)
                return l<obj.l;
           // else if(l>obj.l)
             //   return false;
            else if(l==obj.l && b<obj.b)
                return b<obj.b;
            //else if(l==obj.l && b>obj.b)
              //  return false;
            else if(l==obj.l && b==obj.b && h<obj.h)
                return h<obj.h;
            //else if(l==obj.l && b==obj.b && h>obj.h)
              //  return false;
           // else if(l==obj.l && b==obj.b && h==obj.h)
            //    return false;
            else
                return false;
        }
        friend ostream &operator << (ostream &out, Box &obj);
        //friend istream &operator >> (istream &is, Box &obj);
       
};

ostream &operator << (ostream &out, Box &obj){
            cout << obj.l << " " << obj.b << " " << obj.h;
            return out;
        }
        
        /*istream &operator >> (istream &is, Box &obj){
            cin >> obj.l  >> obj.b >> obj.h;
            if( obj.l<0 || obj.b<0 || obj.h<0 )
                is.setstate(std::ios::failbit);
            return is;
        }*/
        

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}

#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    private:
        int l,b,h;
    public:
        Box(){
            l=0;
            b=0;
            h=0;
        }
        Box(int length,int breadth,int height){
            l = length;
            b = breadth;
            h = height;
        }
        Box(Box &B){
            l=B.l;
            b=B.b;
            h=B.h;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return l*b*h;
        } 
        bool operator < (Box& b){
            if(l<b.l)
                return l<b.l;
            else if(l==b.l && getBreadth()<b.b)
                return getBreadth()<b.b;
            else if(l==b.l && getBreadth()==b.b && h<b.h)
                return h<b.h;
            else
                return false;
        }
        friend ostream &operator << (ostream& out, Box& B){
            cout << B.l << " " << B.b << " " << B.h;
            return out;
        }
    };

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}
#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    private:
        int l,b,h;
    public:
        Box(){
            l=0;
            b=0;
            h=0;
        }
        Box(int length,int breadth,int height){
            l = length;
            b = breadth;
            h = height;
        }
        Box(Box &B){
            l=B.l;
            b=B.b;
            h=B.h;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return l*b*h;
        } 
        bool operator < (Box& b){
            if(getLength()<b.l)
                return l<b.l;
            else if(getLength()==b.l && getBreadth()<b.b)
                return getBreadth()<b.b;
            else if(getLength()==b.l && getBreadth()==b.b && getHeight()<b.h)
                return getHeight()<b.h;
            else
                return false;
        }
        friend ostream &operator << (ostream& out, Box& B){
            cout << B.l << " " << B.b << " " << B.h;
            return out;
        }
    };

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}
#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    private:
        int l,b,h;
    public:
        Box(){
            l=0;
            b=0;
            h=0;
        }
        Box(int length,int breadth,int height){
            l = length;
            b = breadth;
            h = height;
        }
        Box(Box &B){
            l=B.l;
            b=B.b;
            h=B.h;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        void setLength(int length){
            l=length;
        }
        void setBreadth(int breadth){
            b=breadth;
        }
        void setHeight(int height){
            h=height;
        }
        long long CalculateVolume(){
            return l*b*h;
        } 
        
    };
     bool operator < (Box& b2,Box& b){
            if(b2.getLength()<b.getLength())
                return b2.getLength()<b.getLength();
            else if(b2.getLength()==b.getLength() && b2.getBreadth()<b.getBreadth())
                return b2.getBreadth()<b.getBreadth();
            else if(b2.getLength()==b.getLength() && b2.getBreadth()==b.getBreadth() && b2.getHeight()<b.getHeight())
                return b2.getHeight()<b.getHeight();
            else
                return false;
        };
        ostream &operator << (ostream& out, Box& B){
            cout << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
            return out;
        };

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}

#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    private:
        int l,b,h;
    public:
        Box(){
            l=0;
            b=0;
            h=0;
        }
        Box(int length,int breadth,int height){
            l = length;
            b = breadth;
            h = height;
        }
        Box(Box &B){
            l=B.l;
            b=B.b;
            h=B.h;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        void setLength(int length){
            l=length;
        }
        void setBreadth(int breadth){
            b=breadth;
        }
        void setHeight(int height){
            h=height;
        }
        long long CalculateVolume(){
            return l*b*h;
        } 
        bool operator < (Box& b){
            if(getLength()<b.l)
                return getLength()<<b.l;
            else if(getLength()==b.l && getBreadth()<b.b)
                return getBreadth()<b.b;
            else if(getLength()==b.l && getBreadth()==b.b && getHeight()<b.h)
                return getHeight()<b.h;
            else
                return false;
        }

    };
     
        ostream &operator << (ostream& out, Box& B){
            cout << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
            return out;
        };

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}
*/
#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    private:
        int l,b,h;
    public:
        Box(){
            l=0;
            b=0;
            h=0;
        }
        Box(int length,int breadth,int height){
            l = length;
            b = breadth;
            h = height;
        }
        Box(Box &B){
            l=B.l;
            b=B.b;
            h=B.h;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        void setLength(int length){
            l=length;
        }
        void setBreadth(int breadth){
            b=breadth;
        }
        void setHeight(int height){
            h=height;
        }
        long long CalculateVolume(){
            return l*b*h;
        } 
        friend bool operator < (Box& A,Box& B){
            if(A.l<B.l)
                return A.l<B.l;
            else if(A.l==B.l && A.b<B.b)
                return A.b<B.b;
            else if(A.l==B.l && A.b==B.b && A.h<B.h)
                return A.h<B.h;
            else
                return false;
        }


    };
     
        ostream &operator << (ostream& out, Box& B){
            cout << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
            return out;
        };

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}

