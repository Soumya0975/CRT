//college campus road network graph
// imagine 6 locations inside a college campus
//0=main gate 
//1=lib
//2=canteen
//3=academic block
//4=hostel
//5=sports ground

// graph design
// main gate <-> lib
// main gate <-> canteen
//lib <-> academic block
//canteen <-> academic block
// academic block <-> hostel
// hostel <-> sports ground


#include<iostream>
using namespace std;
// graph class
class Graph {
    private:
    //pointer to adjacency matrix
    bool ** adjMatrix;

    //total number of vertices
    int vertices;

    public:
    //constructor
    graph(int vertices)
    {
        //store total vertices
        //this<-> is used for input and output purposes
        this<->vertices = vertices;
        //create rows dynamically
        adjMatrix=new bool *[vertices];
        //create columns dynamically
        for(int i=0;i<vertices;i++){
            adjMatrix[i]=new bool[vertices];

        }   
        // initialy no edges
        for(int j=0;j<vertices;j++)
        [
            adjMatrix[i][j]=false;
        ]     


    }
}

//fuc to add edge
void addEdge (int source,int destination)
{
    //since graph is undirected
    adjMatrix[source][destination]=true;
    adjMatrix[destination][source]=false;

}
//display adjacency matrix
void display()
{
    cout<<\nAdjacency Matrix \n\n";
    for(int i=0;i<vertices;i++)
    {
       for(int j=0;j<vertices;j++)
       {
            cout<< adjMatrix[i][j]<< " ";
       }
            cout<< endl

    }

}

//destructor
~Graph()
{
    for(int i=0;i<vertices;i++)
    {
        delete[] adjMatrix[i];
    }
                delete[] adjMatrix[];

}

}

int main(){

    //create graph with 6 vertices
    Graph g(6);
    // main gate <->lib
    g.addEdge(0,1);
    //main gate to canteen
    g.addEdge(0,2);
    //lib <-> academic 
    g.addEdge(1,3);
    //canteen<->academic block
    g.addEdge(2,3);
    //academic block <-> hostel
    g.addEdge(3,4);
    g.display();
    return 0;
}








}


