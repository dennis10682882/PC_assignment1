#include <iostream>
#include <mpi.h>

using namespace std;
int main(int argc, char **argv) 
{
    int cobi = MPI_Init(&argc,&argv);
    int numberProcess, processID;
    cobi = MPI_Comm_size(MPI_COMM_WORLD, & processID);
    cobi = MPI_Comm_rank(MPI_COMM_WORLD, & processID);

   //cout<<" I am process" <<processID<<"of"<<numberPorcess<<endl; 
     if(processID % 2 == 0){ 
             cout<<"Ia m even process ("<<processID<<") of "<<numberProcess<<endl;
    }
    else{
       cout<<"I am odd process ("<<processID<<") of "<<numberProcess<<endl;
}
      cobi = MPI_Finalize();
       
       return 0;
 }
