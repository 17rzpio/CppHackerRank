/*You are given  integers in sorted order. Also, you are given  queries. In each query, you will be given an integer and you have to tell whether that integer is present in the array. If so, you have to tell at which index it is present and if it is not present, you have to tell the index at which the smallest integer that is just greater than the given number is present.
Lower bound is a function that can be used with a sorted vector. Learn how to use lower bound to solve this problem by clicking here.
Input Format
The first line of the input contains the number of integers . The next line contains  integers in sorted order. The next line contains , the number of queries. Then  lines follow each containing a single integer .
Note: If the same number is present multiple times, you have to print the first index at which it occurs. Also, the input is such that you always have an answer for each query.
Constraints
•	
•	,where  is  element in the array.
•	
•	
Output Format
For each query you have to print "Yes" (without the quotes) if the number is present and at which index(1-based) it is present separated by a space.
If the number is not present you have to print "No" (without the quotes) followed by the index of the next smallest number just greater than that number.
You have to output each query in a new line.
Sample Input
 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15
Sample Output
 Yes 1
 No 5
 Yes 6
 Yes 8
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int N;
    int Q;
    int aux;
    
    cin>>N;
    
    vector<int> vet;
    vector<int>::iterator it;
    
    for(int i=0;i<N;++i){
        cin>>aux;
        vet.push_back(aux);
    }
    
    sort(vet.begin(),vet.end());
    
    cin>>Q;
    
    //it=vet.begin();
    for(int i=0;i<Q;++i){
        cin>>aux;
        int j=0;
        for(it=vet.begin();it!=vet.end();++it){
             if(*it==aux){
                cout<<"Yes"<<' '<<j+1<<endl;
                break;
            }
            else if(*it>aux){
                cout<<"No"<<' '<<j+1<<endl;
                break;                
            }
            ++j;           
        }

                        
        /*if(*it==aux)
            cout<<"Yes"<<' '<<Q+1;
        else
            cout<<"No"<<' '<<*it;*/
            
    }
        
    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int N;
    int Q;
    int aux;
    int soma;
    int j=0;
    
    cin>>N;
    
    vector<int> vet;
    vector<int>::iterator it,low;
    
    for(int i=0;i<N;++i){
        cin>>aux;
        vet.push_back(aux);
    }
    
    //sort(vet.begin(),vet.end());
    
    cin>>Q;
    
    /*for(int i=0;i<Q;++i){
        cin>>aux;
        low=lower_bound(vet.begin(),vet.end(),aux);
        cout<<(low-vet.begin())+1<<endl;
    }
    */
    //it=vet.begin();
    for(int i=0;i<Q;++i){
        cin>>aux;
        j=0;
        it=vet.begin();
        if(aux<*it)
            cout<<"No"<<' '<<'1'<<endl;
        else
            for(it=vet.begin();it!=vet.end();++it){
                if(*it==aux){
                    low=lower_bound(vet.begin(),vet.end(),aux);
                    soma=(low-vet.begin())+1;
                    cout<<"Yes"<<' '<<soma<<endl;
                    break;
                }
                else if(*it>aux){
                    low=lower_bound(vet.begin(),vet.end(),aux);
                    soma=(low-vet.begin())+1;
                    cout<<"No"<<' '<<soma<<endl;
                    break;                
                }
                /*if((it+1)==vet.end()){
                    if(*(it+1)==aux){
                        soma=j+2;
                        cout<<"Yes"<<' '<<soma<<endl;
                        break;
                    }
                    cout<<"No"<<' '<<'0'<<endl;
                    break;
                }*/
                ++j;           
            }
                        
        /*if(*it==aux)
            cout<<"Yes"<<' '<<Q+1;
        else
            cout<<"No"<<' '<<*it;*/
            
    }
        
    return 0;
}
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int N;
    int Q;
    int aux;
    int soma;
    int j=0;
    
    cin>>N;
    
    vector<int> vet;
    vector<int>::iterator it,low,upper;
    
    for(int i=0;i<N;++i){
        cin>>aux;
        vet.push_back(aux);
    }
    
    //sort(vet.begin(),vet.end());
    
    cin>>Q;
    
    for(int i=0;i<Q;++i){
        cin>>aux;
        low=lower_bound(vet.begin(),vet.end(),aux);
        upper=upper_bound(vet.begin(),vet.end(),aux);
        if(low!=upper)
            cout<<"Yes"<<' ';
        else
            cout<<"No"<<' ';
        cout<<(low-vet.begin())+1<<endl;
    }
    
    //it=vet.begin();
    /*for(int i=0;i<Q;++i){
        cin>>aux;
        j=0;
        it=vet.begin();
        if(aux<*it)
            cout<<"No"<<' '<<'1'<<endl;
        else
            for(it=vet.begin();it!=vet.end();++it){
                if(*it==aux){
                    low=lower_bound(vet.begin(),vet.end(),aux);
                    soma=(low-vet.begin())+1;
                    cout<<"Yes"<<' '<<soma<<endl;
                    break;
                }
                else if(*it>aux){
                    low=lower_bound(vet.begin(),vet.end(),aux);
                    soma=(low-vet.begin())+1;
                    cout<<"No"<<' '<<soma<<endl;
                    break;                
                }
                if((it+1)==vet.end()){
                    if(*(it+1)==aux){
                        soma=j+2;
                        cout<<"Yes"<<' '<<soma<<endl;
                        break;
                    }
                    cout<<"No"<<' '<<'0'<<endl;
                    break;
                }
                ++j;           
            }
                        
        if(*it==aux)
            cout<<"Yes"<<' '<<Q+1;
        else
            cout<<"No"<<' '<<*it;
            
    }*/
        
    return 0;
}

