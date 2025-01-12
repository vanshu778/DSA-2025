#include<iostream>
using namespace std;

int main(){

// Pattern 1 : Solid Rectangle

// * * * * *
// * * * * *
// * * * * *

// for(int col=0;col<5;col++){
//     for (int row = 0; row < 3; row++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 2 : Square Pattern

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// for(int row=0;row<5;row++){
//     for(int col=0;col<5;col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 3 : Hollow Rectangle

// * * * * *
// *       *
// * * * * *

// for(int row=0; row<3;row++){
//     for(int col=0; col<5;col++){
//         if(row==0 || row==2 || col==0 || col==4){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }

// Pattern 4 : Half Pyramid

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
// * * * * * * *

// for(int row=0; row<7; row++){
//     for(int col=0; col<row+1;col++ ){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 5 : Inverted Half Pyramid

// * * * * * * *
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

// int n;
// cout << "Enter the number of rows: ";
// cin >> n;

// for(int row=0; row<n; row++){
//     for(int col=1; col<=n - row; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// for(int row=5; row>=0; row--){
//     for(int col = row; col>=0;col--){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// int n;
//   cin >> n;
//   for (int i = n; i >= 0; i--) {
//     for (int j = 0; j < i; j++) {
//       cout << "*";
//     }
//     cout<<endl;
//   }

// Pattern 6 : Full Pyramid

//     *
//    * *
//   * * *
//  * * * *
// * * * * *

//  int n;
// cout << "Enter the number of rows: ";
// cin >> n;

// for(int row=0; row<=n; row++){
//     for(int col=1; col<=n - row-1; col++){
//         cout<<" ";
//     }
//     for(int col=1; col<=row; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }


// Pattern 7: Inverted Full Pyramid

// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

// int n;
// cin>>n;
// for(int row=0;row<n;row++){
//     for(int col=0; col<row+1;col++){
//         cout<<" ";
//     }
//     for(int col=0; col<n-row;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// Pattern 8: Hollow Inverted Half Pyramid

// * * * * * *
// *       *
// *     *
// *   *
// * *
// *

// int n;
// cin>>n;

// for(int row=0; row<n; row++){
//     for(int col=0; col<=n-row-1;col++){
//         if(col==0 || row==0 || col==n-row-1){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }

// Pattern 9: Hollow Full Pyramid

//     *
//    * *
//   *   *
//  *     *
// * * * * *

//     int n;
//     cin >> n; // Input number of rows

//     for (int row = 0; row < n; row++) {
//         // Space Print: Center-align the pyramid
//         for (int col = 0; col < n - row - 1; col++) {
//             cout << " ";
//         }

//         // Star Print: Create hollow effect
//         for (int col = 0; col <= row; col++) {
//             if (col == 0 || col == row || row == n - 1) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }

//         cout << endl; // Move to the next row
//     }

// Pattern 10: Full Pyramid

//       *
//      ***
//     *****
//    *******
//   *********
//  ***********  
// *************

// int n;
// cin>>n;

// for(int row=0; row<n; row++){
//     for(int col=0;col<n-row-1;col++){
//         cout<<" ";
//     }
//     for(int col=0; col<2*row+1;col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 11:

// *********
//  *******
//   *****
//    ***
//     *

// int n;
// cin>>n;

// for(int row=0; row<n; row++){
//     for(int col=0;col<row;col++){
//         cout<<" ";
//     }
//     for(int col=0; col<2*n-2*row-1;col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 12: Diamond Pyramid

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

// int n;
// cin>>n;

// for(int row=0; row<n; row++){
//     for(int col=0; col<n-row-1;col++){
//         cout<<" ";
//     }
//     for(int col=0; col<row+1; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// for(int row=0; row<n; row++){
//     for(int col=0; col<row+1;col++){
//         cout<<" ";
//     }
//     for(int col=0; col<n-row-1; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// Pattern 13: Hollow Diamond

//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *

// int n;
// cin>>n;

// for(int row=0; row<n; row++){
//     for(int col=0; col<n-row-1;col++){
//         cout<<" ";
//     }
//     for (int col = 0; col <= row; col++) {
//             if (col == 0 || col == row) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//     cout<<endl;
// }

// for(int row=0; row<n; row++){
//     for(int col=0; col<row;col++){
//         cout<<" ";
//     }
//     for(int col=0; col<n-row; col++){
//         if (col == 0 || col == n - row - 1) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//     cout<<endl;
// }

// Pattern 14: Flipped Solid Diamond

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// **      **
// ***    ***
// ****  ****
// **********

// int n;
// cin>>n;

// for(int row=0; row<n; row++){
//     // half pyramid
//         for(int col=0; col<n-row; col++)
//         {
//             cout<<"*";
//         }

//     //space vala full pyramid
//     for(int col=0; col<2*row+1; col++){
//         cout<<" ";
//     }
//     // half pyramid
//     for(int col=0; col<n-row; col++)
//         {
//             cout<<"*";
//         }
//     cout<<endl;
// }

// for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//         cout<<"*";
//     }
//      for(int col=0; col<2*n-2*row-1; col++){
//         cout<<" ";
//     }
//     for(int col=0; col<row+1; col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 15:

// *
// **
// ***
// ****
// *****

// int n;
// cin>>n;

// for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 16:

// *****
// ****
// ***
// **
// *

// int n;
// cin>>n;

// for(int row=0; row<n; row++){
//     for(int col=0; col<=n-row-1; col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 17:

//     *
//    **
//   ***
//  ****
// *****

// int n;
// cin>>n;

// for(int row=0; row<n; row++){
//     for(int col=0; col<n-row-1; col++){
//         cout<<" ";
//     }
//     for(int col=0; col<=row; col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 18:

// *****
//  ****
//   ***
//    **
//     *

// int n;
// cin>>n;

// for(int row=0; row<n; row++){
//     for(int col=0; col<row; col++){
//         cout<<" ";
//     }
//     for(int col=0; col<n-row; col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 19: Solid Half Diamond
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

// int n;
// cin>>n;

// for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for(int row=0; row<n; row++){
//     for(int col=0; col<n-row-1; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// Pattern 20: Butterfly Pattern

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

// int n; 
// cin>>n;

// for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//         cout<<"*";
//     }
//     for(int col=0; col<2*n-2*row-1; col++){
//         cout<<" ";
//     }
//     for(int col=0; col<row+1; col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// for(int row=n-1; row>=0; row--){
//     for(int col=0; col<=row; col++){
//         cout<<"*";
//     }
//     for(int col=0; col<2*n-2*row-1; col++){
//         cout<<" ";
//     }
//     for(int col=0; col<=row; col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
}



