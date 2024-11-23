/******************************************************************************
 
 PRIMS ALGORITHM

*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
    int stv;
    int v;
    cout<<"enter number of vertices in graph"<<endl;
    cin>>v;
    int total_distance=0;
    int mindistance;
    int nextnode;
    int visited[v];   //Visited 
    int distance[v];  //Distance
    int from[v];      //From 
   int adj[v][v];
   cout<<"enter adjacenecy matrix"<<endl;
   for(int i=0;i<v;i++)
   {
       for(int j=0;j<v;j++)
       {
           cout<<"enter weight from vertex  "<<i<<"  to vertex "<<j<<endl;
           cin>>adj[i][j];
       }
   }
    // Suppose this is the input :    
    // 0   2   0   6
    // 2   0   3   8
    // 0   3   0   0
    // 6   8   0   0

   // printed adjacency matrix
   cout<<"entered Adjacency matrix"<<endl;
   for(int i=0;i<v;i++)
   {
       for(int j=0;j<v;j++)
       {
           cout<<adj[i][j]<<"   ";
       }
       cout<<endl;
   }
   // initialized visited distance and from arrays
   for(int i=0;i<v;i++)
   {
       visited[i]=0;
       distance[i]=9999;
       from[i]=0;
   }
   
   // replace all 0 values with 999
    for(int i=0;i<v;i++)
   {
       for(int j=0;j<v;j++)
       {
          if(adj[i][j]==0)
          {
              adj[i][j]=999;
          }
       }
    // 999  2   999  6
    // 2    999 3    8
    // 999  3   999  999
    // 6    8   999  999

      
   }
   
   cout<<"enter starting vertx"<<endl;
   cin>>stv;
   visited[stv]=1;       //let's visit the starting vertex firstly.
   distance[stv]=0;      //Distance for starting vertex is '0'.
   for(int i=0;i<v;i++)
   {
       distance[i]=adj[stv][i];       //distance from starting vertex 
       from[i]=stv;                   //intially from 0
   }
   
   cout<<"visited [ ";
   for(int i=0;i<v;i++)
   {
       cout<<visited[i]<<" ";
   }
    cout<<" ]";
    cout<<endl;

     cout<<"distance [ ";
   for(int i=0;i<v;i++)
   {
       cout<<distance[i]<<" ";
   }
    cout<<" ]";
    cout<<endl;

    cout<<"from [ ";
   for(int i=0;i<v;i++)
   {
       cout<<from[i]<<" ";
   }
    cout<<" ]";
    cout<<endl;

// ouput will be :
//    visited  = [1, 0, 0, 0]       // Only starting vertex 0 is visited.
//    distance = [999, 2, 999, 6]     // Distances from 0 to other vertices.
//    from     = [0, 0, 0, 0]       // All edges start from vertex 0.

  int count=1;

  while(count<v-1)
  {
  mindistance=999;
      for(int i=0;i<v;i++)    //Finding a Minimum distance to calculate for the next node(which should not visited).
         if(distance[i]<mindistance&&!visited[i]) {
         mindistance=distance[i];
         nextnode=i;   
      }
      
      visited[nextnode]=1;      //make that node to be visited 

      for(int i=0;i<v;i++)       //next logic for all unvisited vertices.
         if(!visited[i])
      if(adj[nextnode][i]<distance[i]) {
         distance[i]=adj[nextnode][i];
         from[i]=nextnode;
      }
      count++;
      
    //   Prints all the data .
      cout<<"visited"<<" ";
      for(int i=0;i<v;i++)
      {
          cout<<visited[i]<<" ";
      }
      cout<<endl;
      cout<<"diistance"<<" ";
       for(int i=0;i<v;i++)
      {
          cout<<distance[i]<<" ";
      }
      cout<<endl;
      cout<<"From"<<" ";
      for(int i=0;i<v;i++)
      {
          cout<<from[i]<<" ";
      }
      cout<<endl;
      cout<<"----------------------------------------------";
      cout<<endl;
   }


//    Printing the path.
   cout<<"path to follow"<<endl;
    for(int i=0;i<v;i++)
    {
        if(i!=from[i])
        {
            if(from[i]!=stv)
        {
            
        cout<<from[i]<<" to "<<i<<" -> "<<distance[i]<<endl;
        total_distance=total_distance+distance[i];
        }
        else
        {
            cout<<from[i]<<" to "<<i<<" -> "<<distance[i]<<endl;
        total_distance=total_distance+distance[i];
        }
    }
    }

    cout<<endl<<"Total Path Length = "<<total_distance;
    return 0;
}

