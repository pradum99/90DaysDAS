// Tower of Hanoi 

#include<iostream>
using namespace std;

void toh(int N, char source, char helper, char destination) {
    if (N == 1) {
        cout << "Move disk 1 from rod " << source << " to rod " << destination << endl;
        return;
    }

    toh(N-1, source, destination, helper);
    cout << "Move disk " << N << " from rod " << source << " to rod " << destination << endl;
    toh(N-1, helper, source, destination);
}

int main() {
    int n = 3;
    char source = 'A', helper = 'B', destination = 'C';
    toh(n, source, helper, destination);

    return 0;
}
