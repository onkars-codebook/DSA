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
      
   }
   
   cout<<"enter starting vertx"<<endl;
   cin>>stv;
   visited[stv]=1;
   distance[stv]=0;
   for(int i=0;i<v;i++)
   {
       distance[i]=adj[stv][i];
       from[i]=stv;
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
    
    int count=1;

  while(count<v-1)
  {
  mindistance=999;
      for(int i=0;i<v;i++)
         if(distance[i]<mindistance&&!visited[i]) {
         mindistance=distance[i];
         nextnode=i;
      }
      visited[nextnode]=1;
      for(int i=0;i<v;i++)
         if(!visited[i])
      if(adj[nextnode][i]<distance[i]) {
         distance[i]=adj[nextnode][i];
         from[i]=nextnode;
      }
      count++;
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

