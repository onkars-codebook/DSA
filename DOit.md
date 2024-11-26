---------------------------QUEUE USING LINKED LIST------------------------------

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Enqueue operation to add an element to the rear of the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) { // If queue is empty
            front = rear = newNode;
            cout << value << " enqueued to queue." << endl;
            return;
        }

        rear->next = newNode;
        rear = newNode;
        cout << value << " enqueued to queue." << endl;
    }

    // Dequeue operation to remove an element from the front of the queue
    void dequeue() {
        if (front == nullptr) { // If queue is empty
            cout << "Queue is empty. Nothing to dequeue." << endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        // If the queue becomes empty after dequeue
        if (front == nullptr) {
            rear = nullptr;
        }

        cout << temp->data << " dequeued from queue." << endl;
        delete temp;
    }

    // Display the elements of the queue
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
            return;
        }

        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Peek operation to get the front element without removing it
    int peek() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }
};

int main() {
    Queue q;
   //Call the functions.
}

//----------------------------------------------JOB SCHEDULING------------------------------------------------------
#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Structure to represent a Job
struct Job {
    int id;           // Job ID
    string name;      // Job Name
    int burstTime;    // Burst Time (time required for execution)
};

int main() {
    queue<Job> jobQueue; // Queue to hold the jobs
    int choice;
    int jobId = 1;       // Counter to auto-assign Job IDs

    do {
        cout << "\n--- Job Scheduling (FCFS) ---\n";
        cout << "1. Insert a Job\n";
        cout << "2. Delete (Serve a Job)\n";
        cout << "3. Display Job Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            // Insert a Job
            Job newJob;
            newJob.id = jobId++;
            cout << "Enter Job Name: ";
            cin >> newJob.name;
            cout << "Enter Burst Time: ";
            cin >> newJob.burstTime;
            jobQueue.push(newJob);
            cout << "Job added successfully!\n";
            break;
        }
        case 2:
            // Delete (Serve a Job)
            if (jobQueue.empty()) {
                cout << "Queue is empty! No job to serve.\n";
            } else {
                Job servedJob = jobQueue.front();
                jobQueue.pop();
                cout << "Serving Job ID: " << servedJob.id 
                     << ", Name: " << servedJob.name 
                     << ", Burst Time: " << servedJob.burstTime << "\n";
            }
            break;

        case 3:
            // Display Job Queue
            if (jobQueue.empty()) {
                cout << "Queue is empty! No jobs available.\n";
            } else {
                cout << "Current Job Queue:\n";
                queue<Job> tempQueue = jobQueue; // Temporary queue to display
                while (!tempQueue.empty()) {
                    Job job = tempQueue.front();
                    tempQueue.pop();
                    cout << "Job ID: " << job.id 
                         << ", Name: " << job.name 
                         << ", Burst Time: " << job.burstTime << "\n";
                }
            }
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

//---------------------------------------BINARY TREE---------------------------------------------------------------
// This program that simply defines the Implementation of the Trees and their traversal as well so why to stop lets start .
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val)             //Initiallizes the values  to the tree.
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
 };
 
 Node* CreateTree()
 {
    int data;
    cout<<"Enter a data :(-1 indicates the null value )";
    cin>>data;

    if(data ==  -1)
    {
        return nullptr;
    }

    Node* root = new Node(data);
    
    cout <<"Enter the left child of "<<data<<":"<<endl;
    root->left = CreateTree();

    cout <<"Enter the right child of "<<data<<":"<<endl;
    root->right = CreateTree();
    
    return root;
 }

 void inorder(Node* root)
 {
    if(root == nullptr) 
    return; 
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
 }
 
 void preorder(Node* root)
 {
    if(root == nullptr) return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
 }

 void postorder(Node* root)
 {
    if(root == nullptr) 
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
 }

    // Helper function to check if a node is a leaf
    bool isLeaf(Node* node) {
    return (node != nullptr && node->left == nullptr && node->right == nullptr);
    }
    
    // Function to display the leaf nodes
    void displayLeafNodes(Node* root) {
        if (root == nullptr) return;
    
        // If the current node is a leaf, print it
        if (isLeaf(root)) {
            cout << root->data << " ";
        }
    
        // Traverse left and right subtrees
        displayLeafNodes(root->left);
        displayLeafNodes(root->right);
    }


int main()
{
Node* root = nullptr;

// create a root ;
root = CreateTree();
displayLeafNodes(root);
// preorder Traversal of the Tree

cout<<"Inorder Traversal :";
inorder(root);

cout<<"Preorder Traversal :";
preorder(root);

cout<<"postorder Traversal :";
postorder(root);

return 0;

}

//------------------------------------------BST(marks wala)--------------------------------------------------------------
#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* left;
    Node* right;
    Node(int ele)
    {
        data = ele;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root,int marks )
{
    if(root == nullptr)
    {
        return new Node(marks);
    }


    if(marks < root->data)
    {
        root->left = insert(root->left,marks);
    }
    else{
        root->right = insert(root->right,marks);
    }
}
// Function to perform in-order traversal (prints marks in ascending order)
void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);  // Traverse left subtree
    cout << root->data << " ";  // Print the current node's data
    inorder(root->right);  // Traverse right subtree
}

// Function to find the minimum marks (leftmost node)
Node* findMin(Node* root) {
    Node* current = root;    //orignal root pointer should not be changed so that its assigned to the current ptr;
    while ( current->left != nullptr) {
        current = current->left;
    }
    return current;
}

// Function to find the maximum marks (rightmost node)
Node* findMax(Node* root) {
    Node* current = root;
    while (current->right != nullptr) {
        current = current->right;
    }
    return current;
}


int main()
{
     Node* root = nullptr;  // Initialize an empty BST

    // Insert marks for students into the BST
    int marks;
    char choice;

    do {
        cout << "Enter marks for a student: ";
        cin >> marks;

        // Insert the marks into the BST
        root = insert(root, marks);

        cout << "Do you want to enter more marks? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // 1. Print marks in ascending order (In-order traversal)
    cout << "\nMarks in ascending order (In-order traversal): ";
    inorder(root);
    cout << endl;

    // 2. Print minimum marks
    Node* minNode = findMin(root);
    cout << "Minimum marks: " << minNode->data << endl;

    // 3. Print maximum marks
    Node* maxNode = findMax(root);
    cout << "Maximum marks: " << maxNode->data << endl;

    return 0;
}


//-----------------------------------EXPRESSION TREEE----------------------------------------
#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

class Node {
public:
    char data;    //data
    Node* left;   //left pointer
    Node* right; //right pointer 
 
    Node(char val)  {
      data = val;  
      left = nullptr;
      right = nullptr;
    }
};

bool isOperator(char c) {   //function to find out the operator.
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

Node* constructExpressionTree(const string prefixExpression) {
    stack<Node*> stk;   //creating an stack.
//    e.g : +*abc 
// it will start from right to left so that we use the reverse for loop.
    for (int i = prefixExpression.size() - 1; i >= 0; i--) {
        char currentChar = prefixExpression[i];

        if (isalnum(currentChar))    //if the scanned character is a character .
        {
            stk.push(new Node(currentChar));
        } 
        else if (isOperator(currentChar)) //if the scanned character is a operator.
        {
            Node* operand1 = stk.top();  //operand 1 will be this 
            stk.pop();

            Node* operand2 = stk.top(); //and operand 2 will be this 
            stk.pop();

            Node* newNode = new Node(currentChar);
            newNode->left = operand1;
            newNode->right = operand2;

            stk.push(newNode);
        }
    }

    return stk.top();
}

void inorderTraversal(Node* root) {
    if (root) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    string prefixExpression;
    cout << "Enter the prefix expression: ";
    cin >> prefixExpression;

    Node* root = constructExpressionTree(prefixExpression);

    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}



/*********************** PRIMS ALGORITHM*************************/
 
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
/---------------------------------------------------DIJSTRAS---------------------------------------------------------

// C++ program for Dijkstra's single source shortest path
// algorithm. The program is for adjacency matrix
// representation of the graph
#include <iostream>
using namespace std;
#include <limits.h>

// Number of vertices in the graph
#define V 9

// A utility function to find the vertex with minimum
// distance value, from the set of vertices not yet included
// in shortest path tree
int minDistance(int dist[], bool sptSet[])
{

    // Initialize min value
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

// A utility function to print the constructed distance
// array
void printSolution(int dist[])
{
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < V; i++)
        cout << i << " \t\t\t\t" << dist[i] << endl;
}

// Function that implements Dijkstra's single source
// shortest path algorithm for a graph represented using
// adjacency matrix representation
void dijkstra(int graph[V][V], int src)
{
    int dist[V]; // The output array.  dist[i] will hold the
                 // shortest
    // distance from src to i

    bool sptSet[V]; // sptSet[i] will be true if vertex i is
                    // included in shortest
    // path tree or shortest distance from src to i is
    // finalized

    // Initialize all distances as INFINITE and stpSet[] as
    // false
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    // Distance of source vertex from itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        // Pick the minimum distance vertex from the set of
        // vertices not yet processed. u is always equal to
        // src in the first iteration.
        int u = minDistance(dist, sptSet);

        // Mark the picked vertex as processed
        sptSet[u] = true;

        // Update dist value of the adjacent vertices of the
        // picked vertex.
        for (int v = 0; v < V; v++)

            // Update dist[v] only if is not in sptSet,
            // there is an edge from u to v, and total
            // weight of path from src to  v through u is
            // smaller than current value of dist[v]
            if (!sptSet[v] && graph[u][v]
                && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    // print the constructed distance array
    printSolution(dist);
}

// driver's code
int main()
{

    /* Let us create the example graph discussed above */
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

    // Function call
    dijkstra(graph, 0);

    return 0;
}

// This code is contributed by shivanisinghss2110


//--------------------------------------------------OBST---------------------------------------------------------------
// ---------------------OBST-----------------------------
#include <iostream>
using namespace std;
int main()

{
    int n;
    cout<<"enter number of words"<<endl;
    cin>>n;
    int p[n];
    int q[n+1];
    cout<<"enter probability of successfull search"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"enter probability of p["<<i<<"]"<<endl;
        cin>>p[i];
    }
    cout<<endl<<"-------------------------------------------"<<endl;
    cout<<endl<<"probability of successfull search"<<endl;
    cout<<endl<<"-------------------------------------------"<<endl;
     for(int i=1;i<=n;i++)
    {
        cout<<endl<<"probability of p["<<i<<"]="<<p[i]<<endl;
        
    }
    cout<<endl<<"-------------------------------------------"<<endl;
     cout<<"enter probability of unsuccessfull search"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<"enter probability of q["<<i<<"]"<<endl;
        cin>>q[i];
    }
    cout<<endl<<"probability of unsuccessfull search"<<endl;
    cout<<endl<<"-------------------------------------------"<<endl;
     for(int i=0;i<=n;i++)
    {
        cout<<endl<<"probability of q["<<i<<"]="<<q[i]<<endl;
        
    }
    
    int rw[n];
    int c[n][n];
    int w[n][n];
    int r[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=0;
            w[i][j]=0;
            r[i][j]=0;
        }
    }
    int m=n;
    while(m>0)
    {
        if(m==n)
        {
            for(int i=0;i<n;i++)
            {
                w[i][i]=q[i]+p[i+1]+q[i+1];
                c[i][i]=w[i][i];
                r[i][i]=i;
            
            
        }
        
        m=m-1;
        for(int i=0;i<n;i++)
        {
            cout<<endl<<"-------------------------------------------"<<endl;
        cout<<endl<<"w["<<i<<"]["<<i<<"]= "<<w[i][i]<<endl;
             cout<<endl<<"c["<<i<<"]["<<i<<"]= "<<c[i][i]<<endl;
              cout<<endl<<"r["<<i<<"]["<<i<<"]= "<<r[i][i]<<endl;
              cout<<endl<<"-------------------------------------------"<<endl;
        }
    }
    if(m==(n-1))
    {
        for(int i=0;i<n-1;i++)
        {
            int j=i+1;
            w[i][j]=q[i]+q[j]+q[j+1]+p[j]+p[j+1];
            for(int k=i;k<=j;k++)
            {
                rw[k]=c[i][k-1]+c[k+1][j];
            }
            if(rw[i]>rw[j])
            {
                c[i][j]=rw[j]+w[i][j];
                r[i][j]=j;
                cout<<endl<<"-------------------------------------------"<<endl;
                cout<<endl<<"w["<<i<<"]["<<j<<"]= "<<w[i][j]<<endl;
             cout<<endl<<"c["<<i<<"]["<<j<<"]= "<<c[i][j]<<endl;
              cout<<endl<<"r["<<i<<"]["<<j<<"]= "<<r[i][j]<<endl;
                
            }
            else
            {
                c[i][j]=rw[i]+w[i][j];
                r[i][j]=i;
                 cout<<endl<<"-------------------------------------------"<<endl;
                cout<<endl<<"w["<<i<<"]["<<j<<"]= "<<w[i][j]<<endl;
             cout<<endl<<"c["<<i<<"]["<<j<<"]= "<<c[i][j]<<endl;
              cout<<endl<<"r["<<i<<"]["<<j<<"]= "<<r[i][j]<<endl;
            }
        }
        m=m-1;
    }
    
    if(m==(n-2))
    {
         for(int i=0;i<n-2;i++)
         {
             int j=i+2;
              w[i][j]=w[i][i+1]+q[j+1]+p[j+1];
               for(int k=i;k<=j;k++)
            {
                rw[k]=c[i][k-1]+c[k+1][j];
            }
            int min=9999;
            int ds;
            for(int k=i;k<=j;k++)
            {
                if(rw[k]<min)
                {
                    min=rw[k];
                    ds=k;
                }
            }
            
            c[i][j]=min+w[i][j];
            r[i][j]=ds;
            cout<<endl<<"-------------------------------------------"<<endl;
                cout<<endl<<"w["<<i<<"]["<<j<<"]= "<<w[i][j]<<endl;
             cout<<endl<<"c["<<i<<"]["<<j<<"]= "<<c[i][j]<<endl;
              cout<<endl<<"r["<<i<<"]["<<j<<"]= "<<r[i][j]<<endl;
              
         }
          m=m-1;
    }
   
}
    return 0;
} 

//-----------------------------------------Linear Probing------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"enter size of hash table"<<endl;
cin>>n;
 int ht[n];
 int key;
 int hkey;
//assign the all elements value as -1;
 for(int i=0 ; i < n ; i++)
{
    ht[i]=-1;
}
// Print the all values ;
for(int i=0 ; i < n ; i++)
{
    cout<<"  "<<ht[i]<<endl;
}
//   main loop
  for(int i=0;i<n;i++)
  {
      cout<<"enter  key value"<<endl;
      cin>>key;
      
      hkey=key%n;
      if(ht[hkey]==-1)
      {
          cout<<"key stored at index "<<hkey<<endl;
          ht[hkey]=key;
          for(int i=0 ; i < n ; i++)
          {
              cout<<"  "<<ht[i]<<endl;
          }
      }
      else
      {
          for(int i=1;i<n;i++)
          {
             int m=hkey+i;
             int s=m%n;
              if(ht[s]==-1)
              {
                  ht[s]=key;
                  cout<<"key stored at index "<<s<<endl;
                  for(int i=0 ; i < n ; i++)
                   {
                       cout<<"  "<<ht[i]<<endl;
                   }
                  break;
              }
          }
          
      }
  }
  
    return 0;
}

//------------------------------------------------------HEAP(Min Heap and Max Heap)-----------------------------------------------------


#include <iostream>
using namespace std;


class HeapOperations {
private:
    int* marks;
    int size;

    // Heapify function for Min-Heap
    void minHeapify(int arr[], int n, int i) {
        int smallest = i; 
        cout<<endl<<"value of i="<<i<<endl;
        // Initialize smallest as root
        int left = 2 * i + 1;  // Left child
        int right = 2 * i + 2; // Right child

        // If left child is smaller than root
        if (left < n && arr[left] < arr[smallest])
            smallest = left;

        // If right child is smaller than smallest so far
        if (right < n && arr[right] < arr[smallest])
            smallest = right;

        // If smallest is not root
        cout<<endl<<"smallest element is"<<arr[smallest]<<endl;
        if (smallest != i) {
            swap(arr[i], arr[smallest]);
        cout<<endl;
        for(int k=0;k<n;k++)
        {
            cout<<"|  "<<arr[k]<<"  |";
        }
            // Recursively heapify the affected sub-tree
            cout<<endl<<"affected element is "<<arr[smallest]<<" apply recursive heapify onit"<<endl;      
            minHeapify(arr, n, smallest);
            cout<<endl<<"after recursive call"<<endl;
        for(int k=0;k<n;k++)
        {
            cout<<"|  "<<arr[k]<<"  |";
        }
        }
    }

    // Heapify function for Max-Heap
    void maxHeapify(int arr[], int n, int i) {
        int largest = i;   // Initialize largest as root
         cout<<endl<<"value of i="<<i<<endl;
        int left = 2 * i + 1;  // Left child
        int right = 2 * i + 2; // Right child

        // If left child is larger than root
        if (left < n && arr[left] > arr[largest])
            largest = left;

        // If right child is larger than largest so far
        if (right < n && arr[right] > arr[largest])
            largest = right;
        cout<<endl<<"largest element is"<<arr[largest]<<endl;
        // If largest is not root
        if (largest != i) {
            swap(arr[i], arr[largest]);
         cout<<endl;
        for(int k=0;k<n;k++)
        {
            cout<<"|  "<<arr[k]<<"  |";
        }
        cout<<endl<<"affected element is "<<arr[largest]<<" apply recursive heapify onit"<<endl;
            // Recursively heapify the affected sub-tree
            maxHeapify(arr, n, largest);
         cout<<endl;
        for(int k=0;k<n;k++)
        {
            cout<<"|  "<<arr[k]<<"  |";
        }
        }
    }

public:
    // Constructor to initialize the array and its size
    HeapOperations(int inputMarks[], int n) {
        marks = inputMarks;
        size = n;
    }

    // Function to find minimum marks using Min-Heap
    int findMinMarks() {
        // Build the Min-Heap (heapify all non-leaf nodes)
        for (int i = size / 2 - 1; i >= 0; i--) {
            minHeapify(marks, size, i);
        }
        // The minimum value will be at the root (marks[0])
        return marks[0];
    }

    // Function to find maximum marks using Max-Heap
    int findMaxMarks() {
        // Build the Max-Heap (heapify all non-leaf nodes)
        for (int i = size / 2 - 1; i >= 0; i--) {
            maxHeapify(marks, size, i);
        }
        // The maximum value will be at the root (marks[0])
        return marks[0];
    }
};

int main() {
    // Input: Marks obtained by students in the second year
    int n;
    cout<<"enter number of students in class"<<endl;
    cin>>n;
    int studentMarks[n];
  
   for(int k=0;k<n;k++)
   {
       cout<<"enter the marks of "<<k+1<<" th student"<<endl;
       cin>>studentMarks[k];
   }

    // Create an object of the HeapOperations class
    HeapOperations heapOps(studentMarks, n);

    // Find and display the minimum marks
    int minMarks = heapOps.findMinMarks();
    cout <<endl<< "Minimum Marks: " << minMarks << endl;

    // Find and display the maximum marks
    int maxMarks = heapOps.findMaxMarks();
    cout <<endl<< "Maximum Marks: " << maxMarks << endl;

    return 0;
}

//-----------------------------------------DECIMAL TO BINARY----------------------------------
// Write a program to convert number from decimal to binary using stack.
#include <iostream>
#include <stack>

using namespace std;

// Function to convert a decimal number to binary using a stack
string decimalToBinary(int number) {
    if (number == 0) {
        return "0";
    }

    stack<int> binaryStack; // Stack to store binary digits
    string binaryResult = "";

    // Divide the number by 2 and store remainders in the stack
    while (number > 0) {
        binaryStack.push(number % 2); // Push remainder onto the stack
        number = number / 2;                 // Update the number
    }

    // Pop the stack to form the binary result
    while (!binaryStack.empty()) {
        binaryResult += to_string(binaryStack.top()); // Append top of stack to result
        binaryStack.pop();                            // Remove top element
    }

    return binaryResult;
}

int main() {
    int decimalNumber;

    // Input a decimal number
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    // Convert to binary
    string binaryNumber = decimalToBinary(decimalNumber);

    // Display the result
    cout << "Binary representation of " << decimalNumber << " is: " << binaryNumber << endl;

    return 0;
}

//-----------------------------------------------------------

