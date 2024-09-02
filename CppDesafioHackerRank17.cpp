/*Vector-Erase
18/44 challenges solved
Rank: 96130|Points: 264
CPP

Problem

Submissions

Leaderboard

You are provided with a vector of  integers. Then, you are given  queries. For the first query, you are provided with  integer, which denotes a position in the vector. The value at this position in the vector needs to be erased. The next query consists of  integers denoting a range of the positions in the vector. The elements which fall under that range should be removed. The second query is performed on the updated vector which we get after performing the first query.
The following are some useful vector functions:
•	erase(int position):
•	Removes the element present at position.  
•	Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
•	erase(int start,int end):
•	Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
•	Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)
Input Format
The first line of the input contains an integer .The next line contains  space separated integers(1-based index).The third line contains a single integer ,denoting the position of an element that should be removed from the vector.The fourth line contains two integers  and  denoting the range that should be erased from the vector inclusive of a and exclusive of b.
Constraints



Output Format
Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.
Sample Input
6
1 4 6 2 8 9
2
2 4
Sample Output
3
1 8 9
Explanation
The first query is to erase the 2nd element in the vector, which is 4. Then, modifed vector is {1 6 2 8 9}, we want to remove the range of 2~4, which means the 2nd and 3rd elements should be removed. Then 6 and 2 in the modified vector are removed and we finally get {1 8 9}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    int aux;
    int del;
    int range_del_begin,range_del_end;
    int total_del;
    int end_del;
    cin>>N;
    vector<int> vet;
    vector<int>::iterator it;
    for(int j=0;j<N;++j){
        cin>>aux;
        vet.push_back(aux);
    }
    cin>>del;
    it=vet.begin();
    for(int i=1;i<=del;++i,++it)
        if(i==del)
            vet.erase(it);
    cin>>range_del_begin;
    cin>>range_del_end;
    total_del=(range_del_end-range_del_begin)+1;
    cout<<total_del<<endl;
    it=vet.begin();
    for(int j=1;j<=range_del_begin;++j,++it)
    //end_del=N-1;
    for(int j=range_del_begin;j>=range_del_begin && j<range_del_end;++j,vet.erase(it));
    for(it=vet.begin();it!=vet.end();++it,cout<<*it<<' ');    
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
    int aux;
    int indexToDelete;
    int range_delete_begin;
    int range_delete_end;
    vector<int> vet;
    vector<int>::iterator it;
    cin>>N;
    for(int i=0;i<N;++i){
        cin>>aux;
        vet.push_back(aux);
    }
    cin>>indexToDelete;
    /*it=vet.begin();
    for(int i=0;i<indexToDelete;++i)
        ++it;*/
    vet.erase(vet.begin()+(indexToDelete-1));
    
    cin>>range_delete_begin;
    cin>>range_delete_end;
    
    //cout<<range_delete_end-range_delete_begin+1<<endl;
    
    vet.erase(vet.begin()+(range_delete_begin-1),vet.begin()+(range_delete_end-1));
    
    aux=0;
    for(it=vet.begin();it!=vet.end();++it)
        ++aux;
    
    cout<<aux<<endl;

    for(it=vet.begin();it!=vet.end();++it)
        cout<<*it<<' ';   
    return 0;
}


