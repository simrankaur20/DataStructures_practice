#include <iostream>
using namespace std;
#include <unordered_map>
#include <vector>
#include <queue>

bool hasPath_BFS(bool **graph, int V, int v1, int v2) {
    // 1. Create visited array and initialize it to false
    bool *visited = new bool[V];

    for(int i = 0; i < V; i++) {
        visited[i] = false;
    }
    
    // 2. Create queue, push v1
    queue<int> pendingVertices;
    pendingVertices.push(v1);

    // 3. Run loop
        // a. Pop front vertex from queue, save in current
        // b. Cheque if that is visited already. If yes, continue
        // c. Mark current visited
        // d. check if there is direct edge between current and v2. If yes, return true
        // e. Run a loop and push all adjacent vertices of current to queue
    // 4. Return false, outside loop
    
    while(!pendingVertices.empty()) {
        int current = pendingVertices.front();
        pendingVertices.pop();

        if(visited[current]) {
            continue;
        }

        visited[current] = true;

        if(graph[current][v2] == true) {
            return true;
        }

        for(int i = 0; i < V; i++) {
            if(graph[current][i] == true) {
                pendingVertices.push(i);
            }
        }
    }

    return false;

}

void bfsTraversal(bool **graph, int V) {
    bool *visited = new bool[V];

    for(int i = 0; i < V; i++) {
        visited[i] = false;
    }
    
    queue<int> pendingVertices;

    // Insert 1st vertex - as root
    pendingVertices.push(0);

    while(!pendingVertices.empty()) {
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();

        if(visited[currentVertex] == true) {
            continue;
        }

        visited[currentVertex] = true;
        cout << currentVertex << endl;

        for(int i = 0; i < V; i++) {
            if(graph[currentVertex][i] == 1) {
                pendingVertices.push(i);
            }
        }
    }
      
}
































vector<int>* getPath(bool **graph, bool *visited, int v1, int v2, int V) {
    vector<int> *output = new vector<int>;

    // 1. Check if v1 is already visited. If yes, return an empty vector
    if(visited[v1]) {
        return output;
    }

    // 2. Check if v1 and v2 is directly connected. If yes, create a vector, push v1 & v2 and return it
    if(graph[v1][v2] == true) {
        output -> push_back(v2);
        output -> push_back(v1);
        return output;
    }
    
    // 3. mark v1 as visited
    visited[v1] = true;

    // 4. Call recursion on each adjacent vertex of v1.
    for(int i = 0; i < V; i++) {
        if(graph[v1][i] == true) {
        // 5. Receive recursion's answer in some vector. Check its size and proceed accordingly
            vector<int> *recOutput = getPath(graph, visited, i, v2, V);
            if(recOutput -> size() > 0) {
                recOutput -> push_back(v1);
                return recOutput;
            }
        }
    }

    return output;
}


void dfs(unordered_map<int, vector<int>*> adjList, bool *visited, int startV = 0) {
    if(visited[startV]) {
        return;
    }

    cout << startV << endl;
    visited[startV] = true;

    vector<int> *a = adjList[startV];
    for(int i = 0; i < a -> size(); i++) {
        dfs(adjList, visited, a -> at(i));
    }
}

void dfs(unordered_map<int, vector<int>*> adjList) {
    bool *visited = new bool[adjList.size()];
    
    for(int i = 0; i < adjList.size(); i++) {
        visited[i] = false;
    }

    dfs(adjList, visited);

}
















bool hasPath(unordered_map<int, vector<int>*> adjList, bool *visited, int v1, int v2) {
    // Check if v1 is already visited. If yes, return false.
    if(visited[v1]) {
        return false;
    }
    
    // Check if v1 and v2 is directly connected. If yes, return true
    vector<int> *a = adjList[v1];
    for(int i = 0; i < a -> size(); i++) {
        if(a -> at(i) == v2) {
            return true;
        }
    }
    
    // Mark v1 as visited
    visited[v1] = true;

    // Call recursion on each adjacent vertex of v1
    for(int i = 0; i < a -> size(); i++) {
        bool ans = hasPath(adjList, visited, a -> at(i), v2);
        if(ans)
            return ans;
    }

    return false;
}

int main() {
    int n, e;
    cin >> n >> e;

    // Adjacency Matrix
    bool **graph = new bool*[n];
    for(int i = 0; i < n; i++) {
        graph[i] = new bool[n];
        for(int j = 0; j < n; j++) {
            graph[i][j] = false;
        }
    }

    //for(int i = 0; i < n; i++) {
    //  for(int j = 0; j < n; j++) {
    for(int i = 0; i < e; i++) {
        int source, dest;
        cin >> source >> dest;

        graph[source][dest] = true;
        graph[dest][source] = true;

    }

    bool *visited = new bool[n];

    for(int i = 0; i < n; i++) {
        visited[i] = false;
    }

    int v1, v2;
    cin >> v1 >> v2;

    vector<int> *output = getPath(graph, visited, v1, v2, n);

    for(int i = 0; i < output -> size(); i++) {
        cout << output -> at(i) << " ";
    }
    cout << endl;


    /*
    // Adjacency List
    unordered_map<int, vector<int>*> adjList;

    for(int i = 0; i < n; i++) {
    vector<int> *v = new vector<int>;
    adjList[i] = v;
    }


    for(int i = 0; i < e; i++) {
    int source, dest;
    cin >> source >> dest;
    adjList[source] -> push_back(dest);
    adjList[dest] -> push_back(source);
    }

    int v1, v2;
    cin >> v1 >> v2;

    }

    bool ans = hasPath(adjList, visited, v1, v2);
    if(ans) {
    cout << "true" << endl;
    }
    else {
    cout << "false" << endl;
    }
    */   

    // dfs(adjList);

}
