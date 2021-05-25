#include <iostream>

using namespace std;


void fibonacci(int mat[2][2], int modMat[2][2], int pow) {

    //Base Case
    if (pow == 1) {
        modMat = mat;
    }


    else if (pow % 2 == 0) {

        int varMat[2][2];
        fibonacci(mat, varMat, pow/2);

        cout << "\n varMat \n\n";
        cout << varMat[0][0] << "   " << varMat[0][1] << "\n" <<
                           varMat[1][0] << "   " << varMat[1][1] << "\n";

        int newMat[2][2] = {{0,0},{0,0}};
        newMat[0][0] = varMat[0][0]*varMat[0][0] + varMat[0][1]*varMat[1][0];
        newMat[0][1] = varMat[0][0]*varMat[0][1] + varMat[0][1]*varMat[1][1];
        newMat[1][0] = varMat[1][0]*varMat[0][0] + varMat[1][1]*varMat[1][0];
        newMat[1][1] = varMat[1][0]*varMat[0][1] + varMat[1][1]*varMat[1][1];

        cout << "\n newMat \n\n";
        cout << newMat[0][0] << "   " << newMat[0][1] << "\n" <<
                           newMat[1][0] << "   " << newMat[1][1] << "\n";

        modMat = newMat;

    }

    else {

        int varMat[2][2];
        fibonacci(mat, varMat, (pow-1)/2);

        cout << "\n varMat \n\n";
        cout << varMat[0][0] << "   " << varMat[0][1] << "\n" <<
                           varMat[1][0] << "   " << varMat[1][1] << "\n";

        int newMat[2][2] = {{0,0},{0,0}};
        newMat[0][0] = varMat[0][0]*varMat[0][0] + varMat[0][1]*varMat[1][0];
        newMat[0][1] = varMat[0][0]*varMat[0][1] + varMat[0][1]*varMat[1][1];
        newMat[1][0] = varMat[1][0]*varMat[0][0] + varMat[1][1]*varMat[1][0];
        newMat[1][1] = varMat[1][0]*varMat[0][1] + varMat[1][1]*varMat[1][1];

        cout << "\n newMat \n\n";
        cout << newMat[0][0] << "   " << newMat[0][1] << "\n" <<
                           newMat[1][0] << "   " << newMat[1][1] << "\n";

        modMat = newMat;

    }

}




int fibonacci(int n){

    if (n <= 1){
        return 1;
    }

    else {
        return fibonacci(n-1)+ fibonacci(n-2);
    }
}



int fibonacci(int n, char x){

    int* arr = new int[n];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    return arr[n-1];
}



int main()
{

    return 0;
}












