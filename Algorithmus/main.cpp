#include <iostream>
#include "Graph.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int length = 5;
    int width = 5;
    int startP[] = {0,0};
    int endP[] = {4,4};

    Graph * field = new Graph(length, width, startP, endP);



    delete field;
    return 0;
}
