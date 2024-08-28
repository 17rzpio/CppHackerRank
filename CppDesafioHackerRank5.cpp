#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int nVetor1,queryVetor1,indicesArray1Vetor1;
    cin >> nVetor1;//n =2, quandos indices de vector cada um com seu array
    cin >> queryVetor1;//quantas query
    cout<< "\n";
    vector<int> Vetor1;
    cin >> indicesArray1Vetor1;
    vector<int> Array1;
    vector<int>::iterator it = Array1.begin();
    for(int i =0; i<indicesArray1Vetor1;++i ){
        cin>> *it;
        ++it;}
        
     Vetor1.push_back(Array1);   
    return 0;
}


//----------------------------------------------------
int Array1[indicesArray1Vetor1];
    int *it = &Array1[0];
    for(int i =0; i<indicesArray1Vetor1;++i ){
        cin>> *it;
        ++it;
    }
    vector<int>::iterator it2 = Vetor1.begin();
     Vetor1.insert(it2,Array1);   

//**-----------------.

    for(int i =0; i<indicesArray1Vetor1;++i ){
        cin>> Array1[i];
    }
    vector<int>::iterator it2 = Vetor1.begin();
     Vetor1.insert(it2,Array1);   
    return 0;
}
//*-------------------------------------
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int nVetor1,queryVetor1,indicesArray1,indicesArray2;
    cin >> nVetor1;//n =2, quandos indices de vector cada um com seu array
    cin >> queryVetor1;//quantas query
    cout<< "\n";
    vector<int> Vetor1;
    vector<int> Vetor2;
    cin >> indicesArray1;
    for(int i =0; i<indicesArray1;++i )
//------------------------------------------.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int nVetor1,queryVetor1,indicesArray1,cont=0,cont2=0;
    cin >> nVetor1;//n =2, quandos indices de vector cada um com seu array
    cin >> queryVetor1;//quantas query
    int resposta[queryVetor1];
    
    
    while(cont<nVetor1){
        
        
        cin >> indicesArray1;
        
        int array[queryVetor1][indicesArray1];
        int aux;
        for(int j= 0; j<queryVetor1;++j)
            for(int i =0; i<indicesArray1;++i ){
                cin>> aux;
                array[j][i]=aux;
        }
        ++cont;
    }
    
    while(cont2<queryVetor1)
    {
        int qualVetor;
        int qualIndice;
    
        cin >> qualVetor;
        cin >> qualIndice;
        
        resposta[cont2]=array[qualVetor][qualIndice];
        ++cont2;
    }    
    
    for(int i =0;i<queryVetor1;++i)
        cout<<resposta[i]<<"\n";
   
    return 0;
}
        cin>> Vetor1[i];
    cout<<"\n";
    cin>>indicesArray2;
    for(int i=0;i<indicesArray2;++i)
        cin>>Vetor2[i];
    
  //-------------------------------------
int pesquisa(int *vetor, int indice){
    int cont=0;
    while(cont!=indice){
        ++cont;
        ++vetor;
    }
    return *vetor;
}

int nVetor1,queryVetor1,indicesArray1,indicesArray2;
    cin >> nVetor1;//n =2, quandos indices de vector cada um com seu array
    cin >> queryVetor1;//quantas query
    cout<< "\n";
    vector<int> Vetor1;
    vector<int> Vetor2;
    cin >> indicesArray1;
    for(int i =0; i<indicesArray1;++i )
        cin>> Vetor1[i];
    cout<<"\n";
    vector<int>::iterator it = Vetor1.begin();
    resposta = pesquisa(it,indicesArray1);

//-------------------------------------------
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int pesquisa(int *vetor, int indice){
    int cont=0;
    while(cont!=indice){
        ++cont;
        ++vetor;
    }
    return *vetor;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int nVetor1,queryVetor1,indicesArray1,indicesArray2,cont=0;
    cin >> nVetor1;//n =2, quandos indices de vector cada um com seu array
    cin >> queryVetor1;//quantas query
    cout<< "\n";
    vector<int> resposta;
    
    while(cont<nVetor1){
        
    vector<int> Vetor1;
    cin >> indicesArray1;
    for(int i =0; i<indicesArray1;++i )
        cin>> Vetor1[i];
    cout<<"\n";
        resposta.push_back(pesquisa(&Vetor1[0],indicesArray1));
    }
    for(int i =0;i<nVetor1;++i)
        cout<<resposta[i]<<"\n";
   
    return 0;
}
//-----------------------------------------------
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int nVetor1,queryVetor1,indicesArray1,cont=0;
    cin >> nVetor1;//n =2, quandos indices de vector cada um com seu array
    cin >> queryVetor1;//quantas query
    cout<< "\n";
    vector<int> resposta;
    
    while(cont<nVetor1){
        
        vector<int> Vetor1;
        cin >> indicesArray1;
        int aux;
        for(int i =0; i<indicesArray1;++i ){
            cin>> aux;
            Vetor1.push_back(aux);
        }
        cout<<"\n";
        vector<int>::iterator it = Vetor1.begin();
        int indice;
        indice = indicesArray1;
        int cont=0;
        while(cont!=indice){
            ++cont;
            ++it;
        }
        resposta.push_back(*it);
    }
    for(int i =0;i<nVetor1;++i)
        cout<<resposta[i]<<"\n";
   
    return 0;
}
//------------------------------------
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int nVetor1,queryVetor1,indicesArray1,cont=0;
    cin >> nVetor1;//n =2, quandos indices de vector cada um com seu array
    cin >> queryVetor1;//quantas query
    int resposta[queryVetor1];
    
    while(cont<nVetor1){
        
        
        cin >> indicesArray1;
        int array[indicesArray1];
        int aux;
        for(int i =0; i<indicesArray1;++i ){
            cin>> aux;
            array[i]=aux;
        }
        int *p;
        p =&array[0];
        int indice;
        indice = indicesArray1;
        int cont2=0;
        while(cont2<indice){
            ++cont2;
            ++p;
        }
        resposta[cont]=(*p);
        ++cont;
    }
    for(int i =0;i<nVetor1;++i)
        cout<<resposta[i]<<"\n";
   
    return 0;
}
//---------------------------------------
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int nVetor1,queryVetor1,indicesArray1,cont=0,cont2=0;
    cin >> nVetor1;//n =2, quandos indices de vector cada um com seu array
    cin >> queryVetor1;//quantas query
    int resposta[queryVetor1];
    
    
    while(cont<nVetor1){
        
        
        cin >> indicesArray1;
        
        int vetor[queryVetor1][indicesArray1];
        int aux;
        for(int j= 0; j<queryVetor1;++j)
            for(int i =0; i<indicesArray1;++i ){
                cin>> aux;
                vetor[j][i]=aux;
        }
        ++cont;
    }
    
    int qualVetor;
    int qualIndice;
    
    while(cont2<queryVetor1)
    {
    
        cin >> qualVetor;
        cin >> qualIndice;
        
        resposta[cont2]=vetor[qualVetor][qualIndice];
        ++cont2;
    }    
    
    for(int i =0;i<queryVetor1;++i)
        cout<<resposta[i]<<"\n";
   
    return 0;
}
//----------
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int nVetor1,queryVetor1,indicesArray1,cont=0,cont2=0;
    cin >> nVetor1;//n =2, quandos indices de vector cada um com seu array
    cin >> queryVetor1;//quantas query
    int resposta[queryVetor1];
    
      vector<int> vetor;
    while(cont<nVetor1){
        
        
        cin >> indicesArray1;
        
    
        int aux;
        for(int j= 0; j<queryVetor1;++j)
            for(int i =0; i<indicesArray1;++i ){
                cin>> aux;
                vetor[j][i]=aux;
        }
        ++cont;
    }
    
    int qualVetor;
    int qualIndice;
    
    while(cont2<queryVetor1)
    {
    
        cin >> qualVetor;
        cin >> qualIndice;
        
        resposta[cont2]=vetor[qualVetor][qualIndice];
        ++cont2;
    }    
    
    for(int i =0;i<queryVetor1;++i)
        cout<<resposta[i]<<"\n";
   
    return 0;
}
//***********************************************************

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int nVetor1,queryVetor1,indicesArray1,limiteIndices=0,cont=0,cont2=0;
    cin >> nVetor1;//n =2, quandos indices de vector cada um com seu array
    cin >> queryVetor1;//quantas query
    int resposta[queryVetor1];
    
    vector<vector<int> vec;
    
    
    while(cont<nVetor1){
        
        
        cin >> indicesArray1;
        
  
        int aux;
            for(int i =0; i<indicesArray1;++i ){
                cin>> aux;
               // vetor[i]=aux;
        }
        ++cont;
    }
    
    int qualVetor;
    int qualIndice;
    
   
    for(int i =0;i<queryVetor1;++i)
        cout<<resposta[i]<<"\n";
   
    return 0;
}
//-----------------------------------------------------
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int nVetor1,queryVetor1,indicesArray1,limiteIndices=0,cont=0,cont2=0;
    cin >> nVetor1;//n =2, quantos vector vai adicionar
    cin >> queryVetor1;//quantas query
  
    
    vector<vector<int>> vec;
    
    
    while(cont<nVetor1){
        
        
        cin >> indicesArray1;
        
        vector<int> v1;
        int aux;
            for(int i =0; i<indicesArray1;++i ){
                cin>> aux;
                vec.push_back(v1);
        }
        
        ++cont;
    }
    
    
    int qualIndice;
    
   
    for(int i =0;i<queryVetor1;++i){
        cin >> qualIndice;
        cout << vec[i][qualIndice];
    }
   
    return 0;
//-----------------------------------------------------------------------
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int nVector1,queryVector1,indicesArray1,cont=0;
    int qualIndice;
    int qualVector;
    int aux;
    
    vector<vector<int>> vec;
    
    cin >> nVector1;//n =2, quantos vector vai adicionar
    cin >> queryVector1;//quantas query
  
    
    
    
    while(cont<nVector1){
        
        
        cin >> indicesArray1;
        
        vector<int> v1;
            for(int i =0; i<indicesArray1;++i ){
                cin>> aux;
                v1.push_back(aux);
            }
        
        vec.push_back(v1);
        
        ++cont;
    }
    
    
    
   
    for(int i =0;i<=queryVector1;++i){
        cin >> qualIndice;
        cin >> qualVector;
        cout << vec[qualVector][qualIndice];
    }
   
    return 0;
}
//***************************************
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int nVector1,queryVector1,indicesArray1,cont=0;
    int qualIndice;
    int qualVector;
    int aux;
    
    vector<vector<int>> vec;
    vector<int> v1;
    
    cin >> nVector1;//n =2, quantos vector vai adicionar
    cin >> queryVector1;//quantas query
  
    
    
    
    while(cont<nVector1){
        
        
        cin >> indicesArray1;
        
        
            for(int i =0; i<indicesArray1;++i ){
                cin>> aux;
                v1.push_back(aux);
            }
        
        vec.push_back(v1);
        v1.clear();
        ++cont;
    }
    
    
    
   
    for(int i =0;i<queryVector1;++i){
        cin >> qualVector;
        cin >> qualIndice;
        cout << vec[qualVector][qualIndice];
		cout<<"\n";
    }
   
    return 0;
}
