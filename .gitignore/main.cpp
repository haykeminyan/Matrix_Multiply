#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

 
  float fTimeStart = clock()/(float)CLOCKS_PER_SEC; 
int main(){
  
int t=clock();
    #define N 1000
  // Заполнение массива случайными числами

//Индексные переменные:
int i,j,k;
int **A,**B,**C;

A=new  int*[N];
for(i=0;i<N;i++)
A[i]=new  int[N];
B=new int*[N];
for(i=0;i<N;i++)
B[i]=new  int[N];
C=new int*[N];  
for(i=0;i<N;i++)
C[i]=new  int[N];
  


srand(time(NULL));
for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
    {
        A[i][j] = rand() % 20;
        B[i][j] = rand() % 30+1;
    }

cout<<"\n";
    
cout<<"Matrix A is:\n";
cout<<endl;
for (int i = 0; i<N; i++)
   {
        for (int j = 0; j<N; j++)
            cout << A[i][j] << " \t ";
       
        cout << endl;
    }
    cout<<"\n";

            cout << "Matrix B is:\n"; 
            cout<<endl;
        

for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
            cout << B[i][j] << " \t ";
        cout << endl;
    }


    for (int i = 0; i<N; i++)
    {
        
        for (int j = 0; j<N; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k<N; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
   cout<<"\n"<<endl;
   // Вывод матрицы произведения
    cout << "Matrix multiplication: " << endl;
    cout<<"\n"<<endl;
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
            cout << C[i][j] << " \t ";
        cout << endl;
    }
    
cout<<"\n"<<endl;
  
  float fTimeStop = clock()/(float)CLOCKS_PER_SEC; 
  cout<<"The length of this proccess is "<< fTimeStop-fTimeStart<< " seconds\n";
  getchar(); 
 return 0;
}
 
