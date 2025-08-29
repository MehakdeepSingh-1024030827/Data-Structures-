#include<iostream>
using namespace std;
#define MAX 100



void printTriplet(int triplet[MAX][3], int total) {
    cout << "Row\tCol\tValue\n";
    for (int i = 0; i <= total; i++) {
        cout << triplet[i][0] << "\t" << triplet[i][1] << "\t" << triplet[i][2] << endl;
    }
}

void transposeTriplet(int triplet[MAX][3], int trans[MAX][3]) {
    int rows = triplet[0][0];
    int cols = triplet[0][1];
    int total = triplet[0][2];

    trans[0][0] = cols;   
    trans[0][1] = rows;    

    int k = 1;
   
    for (int col = 0; col < cols; col++) {
        for (int i = 1; i <= total; i++) {
            if (triplet[i][1] == col) {
                trans[k][0] = triplet[i][1];
                trans[k][1] = triplet[i][0];
                trans[k][2] = triplet[i][2];
                k++;
            }
        }
    }
}

int main() {
    int m, n, nz;
    int triplet[MAX][3], trans[MAX][3];

    cout << "Enter rows and cols of matrix: ";
    cin >> m >> n;

    cout << "Enter total non-zero elements: ";
    cin >> nz;

    triplet[0][0] = m;
    triplet[0][1] = n;
    triplet[0][2] = nz;

    cout << "Enter triplet form (row col value): \n";
    for (int i = 1; i <= nz; i++) {
        cin >> triplet[i][0] >> triplet[i][1] >> triplet[i][2];
    }

    cout << "\nOriginal Triplet Matrix:\n";
    printTriplet(triplet, nz);

    transposeTriplet(triplet, trans);

    cout << "\nTranspose Triplet Matrix:\n";
    printTriplet(trans, nz);

    return 0;
}




int main(){
    return 0;
}