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


//Первая матрица:
static int A[N][N];
//Вторая матрица:
static int B[N][N];
//Третья матрица (результат):
static int C[N][N];
//Ввод (построчный) элементов первой матрицы:
  
  


srand(time(NULL));
for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
    {
        A[i][j] = rand() % 20;
        B[i][j] = rand() % 30+1;
    }

cout<<"\n";
    
for (int i = 0; i<N; i++)
   {
        for (int j = 0; j<N; j++)
            cout << A[i][j] << "  ";
       
        cout << endl;
    }
    cout<<"\n";

for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
            cout << B[i][j] << "  ";
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
    cout << "Матрица произведения: " << endl;
    cout<<"\n"<<endl;
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    
cout<<"\n"<<endl;
  
  float fTimeStop = clock()/(float)CLOCKS_PER_SEC; 
  printf("Длительность процесса %.13f секунд\n", fTimeStop-fTimeStart); 
  getchar(); 
 return 0;
}
   
