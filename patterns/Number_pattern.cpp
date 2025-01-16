#include <iomanip>
#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
// pattern1: 
// 12345
// 1234
// 123
// 12
// 1

// for (int row=0; row<n; row++){
//     for(int col=0; col<=n-row-1; col++){
//         cout<<col+1;
//     }
//     cout<<endl;
// }

//pattern2:
// 12345
// 2345
// 345
// 45
// 5
// for (int row=0; row<n; row++){
//     for(int col=row+1; col<=n; col++){
//         cout<<col;
//     }
//     cout<<endl;
// }

// pattern3:
// 54321
// 4321
// 321
// 21
// 1
// for (int row=0; row<n; row++){
//     for(int col=n-row; col>0; col--){
//         cout<<col;
//     }
//     cout<<endl;
// }

//pattern4:
// 54321
// 5432
// 543
// 54
// 5
// for (int row=0; row<n; row++){
//     for(int col=0; col<n-row; col++){
//         cout<<n-col;
//     }
//     cout<<endl;
// }

// pattern5: 
// 1
// 12
// 123
// 1234
// 12345

// for (int row=0; row<n; row++){
//     for(int col=0; col<=row; col++){
//         cout<<col+1;
//     }
//     cout<<endl;
// }

// Pattern 6
// 5
// 45
// 345
// 2345
// 12345

// for (int row=0; row<n; row++){
//     for(int col=n-row; col<=n; col++){
//         cout<<col;
//     }
//     cout<<endl;
// }

// Pattern 7
// 1
// 21
// 321
// 4321
// 54321

// for (int row=0; row<n; row++){
//     for(int col=row+1; col>0; col--){
//         cout<<col;
//     }
//     cout<<endl;
// }

// Pattern 8
// 5
// 54
// 543
// 5432
// 54321

// for (int row=0; row<n; row++){
//     for(int col=n; col>=n-row; col--){
//         cout<<col;
//     }
//     cout<<endl;
// }

// Pattern 9
// 1
// 22
// 333
// 4444
// 55555

// for (int row=0; row<n; row++){
//     for(int col=0; col<=row; col++){
//         cout<<row+1;
//     }
//     cout<<endl;
// }

// Pattern 10
// 5
// 44
// 333
// 2222
// 11111

// for (int row=0; row<n; row++){
//     for(int col=0; col<=row; col++){
//         cout<<n-row;
//     }
//     cout<<endl;
// }

// Pattern 11
// 55555
// 4444
// 333
// 22
// 1

// for (int row=0; row<n; row++){
//     for(int col=0; col<=n-row-1; col++){
//         cout<<n-row;
//     }
//     cout<<endl;
// }

// Pattern 12
// 11111
// 2222
// 333
// 44
// 5

// for (int row=0; row<n; row++){
//     for(int col=0; col<=n-row-1; col++){
//         cout<<row+1;
//     }
//     cout<<endl;
// }

// Pattern 13
// 12345
// 4321
// 123
// 21
// 1
    // Outer loop to handle each row
    // for (int row = 1; row <= n; row++) {
    //     if (row % 2 != 0) {
    //         // If it's an odd row, print numbers in increasing order
    //         for (int col = 1; col <= (n - row + 1); col++) {
    //             cout << col;
    //         }
    //     } else {
    //         // If it's an even row, print numbers in decreasing order
    //         for (int col = (n - row + 1); col >= 1; col--) {
    //             cout << col;
    //         }
    //     }
    //     cout << endl;
    // }



// Pattern 14
// 1234567
// 12345
// 123
// 1
// int m;
// cin>>m;
// for (int row=0; row<n; row++){
//     for(int col=1; col<=m-2*row; col++){
//         cout<<col;
//     }
//     cout<<endl;
// }

// Pattern 15
// 1
// 01
// 101
// 0101

//   for (int row=0; row<n; row++){
//     for(int col=0; col<=row; col++){
//         if((row+col)%2 ==0){
//             cout<<"1";
//         }
//         else{
//             cout<<"0";
//         }
//     }
//     cout<<endl;
// }

// Pattern 16
// 13579
// 3579
// 579
// 79
// 9

// int start=1;
// for(int row=0; row<n; row++){
//     int num=start;
//     for(int col=0; col<n-row; col++){
//         cout<<num;
//         num+=2;
//     }
//     cout<<endl;
//     start+=2;
// }

// Pattern 17
// 1
// 2 4
// 1 3 5
// 2 4 6 8
// 1 3 5 7 9

// for (int row = 0; row < n; row++) {
//         int num = (row % 2 == 0) ? 1 : 2; // Start with 1 for odd rows, 2 for even rows
        
//         for (int col = 0; col <= row; col++) {
//             cout << num << " "; // Print the current number
//             num += 2; // Increment by 2 to get the next odd or even number
//         }
        
//         cout << endl; // Move to the next row
//     }

// Pattern 18
// 55555
// 45555
// 34555
// 23455
// 12345

// for (int row = 0; row < n; row++) {
//         // Print numbers in the pattern
//         for (int col = 0; col < n; col++) {
//             if (col < row)
//                 cout << (n - row + col);
//             else
//                 cout << n;
//         }
//         cout << endl;
//     }



// Pattern 19
// 1
// 23
// 456
// 78910

//  int num = 1;
//   for(int row = 1; row <= n; row++) {
//       for(int col = 1; col <= row; col++) {
//           cout << num++;
//       }
//       cout << endl;
//   }


// Pattern 20
// 1
// 10
// 101
// 1010
// 10101

//  for (int row = 0; row < n; row++) {
//         for (int col = 0; col <= row; col++) {
//             // Print 1 for even column index, 0 for odd column index
//             if (col % 2 == 0)
//                 cout << "1";
//             else
//                 cout << "0";
//         }
//         cout << endl;
//     }
  
// Pattern 21
// 1
// 2 6
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15

//   for(int row = 1; row <= n; row++) {
//       int num = row;
//       for(int col = 1; col <= row; col++) {
//           cout << num << " ";
//           num += n - col;
//       }
//       cout << endl;
//   }

// Pattern 22
// 1
// 123
// 12345
// 1234567
//   for (int row = 0; row < n; row++) {
//         for (int col = 0; col <= 2 * row; col++) {
//             cout << col + 1;
//         }
//         cout << endl;
//     }

// Pattern 23
// 12344321
// 123**321
// 12****21
// 1******1

// for (int row = 1; row <= n; row++) {
//         // Print the first half of the pattern (numbers)
//         for (int col = 1; col <= n - row + 1; col++) {
//             cout << col;
//         }

//         // Print the stars
//         for (int col = 1; col <= (2 * row - 2); col++) {
//             cout << "*";
//         }

//         // Print the second half of the pattern (numbers)
//         for (int col = n - row + 1; col >= 1; col--) {
//             cout << col;
//         }

//         cout << endl;
//     }

// Pattern 24
//     1
//   2 3 4
// 5 6 7 8 9

// Pattern 25
// 1   2   3   4   5   6   7   8   9   10
// 36  37  38  39  40  41  42  43  44  11
// 35  64  65  66  67  68  69  70  45  12
// 34  63  84  85  86  87  88  71  46  13
// 33  62  83  96  97  98  89  72  47  14
// 32  61  82  95  100 99  90  73  48  15
// 31  60  81  94  93  92  91  74  49  16
// 30  59  80  79  78  77  76  75  50  17
// 29  58  57  56  55  54  53  52  51  18
// 28  27  26  25  24  23  22  21  20  19

// int arr[n][n];
//     int num = 1;
    
//     int rowStart = 0, rowEnd = n - 1, colStart = 0, colEnd = n - 1;

//     // Loop to fill the array in spiral order
//     while (rowStart <= rowEnd && colStart <= colEnd) {
//         // Fill the top row
//         for (int col = colStart; col <= colEnd; col++) {
//             arr[rowStart][col] = num++;
//         }
//         rowStart++;
        
//         // Fill the rightmost column
//         for (int row = rowStart; row <= rowEnd; row++) {
//             arr[row][colEnd] = num++;
//         }
//         colEnd--;
        
//         // Fill the bottom row
//         if (rowStart <= rowEnd) {
//             for (int col = colEnd; col >= colStart; col--) {
//                 arr[rowEnd][col] = num++;
//             }
//             rowEnd--;
//         }
        
//         // Fill the leftmost column
//         if (colStart <= colEnd) {
//             for (int row = rowEnd; row >= rowStart; row--) {
//                 arr[row][colStart] = num++;
//             }
//             colStart++;
//         }
//     }
    
//     // Print the spiral matrix
//     for (int row = 0; row < n; row++) {
//         for (int col = 0; col < n; col++) {
//             cout << arr[row][col] << "\t";
//         }
//         cout << endl;
//     }

// Pattern 26
// 11111
// 2222
// 333
// 22
// 1


// Pattern 27
// 5432*
// 543*1
// 54*21
// 5*321
// *4321


// for (int i = 1; i <= 5; i++) { // Loop for rows
//  for (int j = 5; j >= 1; j--) { // Loop for columns
//      if (j == i) {
//          cout << "*"; // Print '*' when column index matches the row index
//      } 
//    else {
//       cout << j; // Print the column number otherwise
//     }
//  }
//cout << endl; // Move to the next line
//}

// Pattern 28
// 1
// 121
// 12321
// 1234321

// for (int row = 1; row <= n; row++) {
//         // Print the increasing part
//         for (int col = 1; col <= row; col++) {
//             cout << col;
//         }
//         // Print the decreasing part
//         for (int col = row - 1; col >= 1; col--) {
//             cout << col;
//         }
//         cout << endl; // Move to the next line
//     }

// Pattern 29
// 0
// 909
// 89098
// 7890987
// 678909876
// 56789098765
// 4567890987654
// 345678909876543
// 23456789098765432
// 1234567890987654321

//  for(int row = 0; row <= n; row++) {
//       for(int col = row; col >= 0; col--) {
//           cout << col;
//       }
//       for(int col = 1; col <= row; col++) {
//           cout << col;
//       }
//       cout << endl;
//   }


// Pattern 30
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

// int spaces = (n - 1) * 2; // Initial spaces

//     for (int row = 1; row <= n; row++) {
//         // Print the left half (increasing numbers)
//         for (int col = 1; col <= row; col++) {
//             cout << col;
//         }

//         // Print spaces
//         for (int s = 1; s <= spaces; s++) {
//             cout << " ";
//         }
//         spaces -= 2; // Reduce spaces by 2 for the next row

//         // Print the right half (decreasing numbers)
//         for (int col = row; col >= 1; col--) {
//             cout << col;
//         }

//         cout << endl; 
//     }

// Pattern 31
//     1
//    21
//   321
//  4321
// 54321

//   for(int row = 1; row <= n; row++) {
//       for(int col = 1; col <= n - row; col++) {
//           cout << " ";
//       }
//       for(int col = row; col >= 1; col--) {
//           cout << col;
//       }
//       cout << endl;
//   }

// Pattern 32
// 1
// 232
// 45654
// 78910987

//   int num = 1;
//   for (int row = 1; row <= n; row++) {
//         // First part: Incrementing numbers
//         for (int col = 1; col <= row; col++) {
//             cout << num++;
//         }

//         // Second part: Decrementing numbers
//         for (int col = row - 1; col >= 1; col--) {
//             cout << num - col - 1;
//         }
//       cout << endl;
//   }

// Pattern 33
  // 1
  // 2*2
  // 3*3*3
  // 4*4*4*4
  // 4*4*4*4
  // 3*3*3
  // 2*2
  // 1

// Top half (1 to n)
    // for (int row = 1; row <= n; row++) {
    //     for (int col = 1; col <= row; col++) {
    //         cout << row;
    //         if (col < row) {
    //             cout << "*"; // Add '*' between numbers
    //         }
    //     }
    //     cout << endl; // Move to the next row
    // }

    // Bottom half (n to 1)
    // for (int row = n; row >= 1; row--) {
    //     for (int col = 1; col <= row; col++) {
    //         cout << row;
    //         if (col < row) {
    //             cout << "*"; // Add '*' between numbers
    //         }
    //     }
    //     cout << endl; // Move to the next row
    // }

// Pattern 34
// 11
// 12 13
// 13 14 15
// 14 15 16 17
    // int start = 11; // Starting number

    // for (int row = 1; row <= n; row++) {
    //     int num = start; // Starting number for the current row
    //     for (int col = 1; col <= row; col++) {
    //         cout << num << " ";
    //         num++; // Increment the number for each column
    //     }
    //     cout << endl; 
    //     start++; // Increment the starting number for the next row
    // }

// Pattern 35
//              1
//            2 3
//          4 5 6
//       7 8 9 10
// 11 12 13 14 15

//   int num = 1;
//   for(int i = 1; i <= 5; i++) {
//       for(int k = 1; k <= 5 - i; k++) {
//           cout << "   ";
//       }
//       for(int j = 1; j <= i; j++) {
//           cout << setw(2) << num++ << " ";
//       }
//       cout << endl;
//   }

// Pattern 36
//     5
//    54
//   543
//  5432
// 54321

    // for (int row = 1; row <= n; row++) {
    //     // Print leading spaces for right alignment
    //     for (int space = 1; space <= n - row; space++) {
    //         cout << " "; // Single space for alignment
    //     }

    //     // Print numbers in decreasing order
    //     for (int num = 5; num >= 5 - row + 1; num--) {
    //         cout << num; // Print the decreasing number
    //     }

    //     cout << endl; 
    // }

// Pattern 37
// 1
// 212
// 32123
// 4321234

// for (int row = 1; row <= n; row++) {
//         // Print decreasing numbers from i to 1
//     for (int col = row; col >= 1; col--) {
//         cout << col;
//     }

//         // Print increasing numbers from 2 to i + 1
//     for (int col = 2; col <= row; col++) {
//         cout << col;
//     }

//     cout << endl;
// }

// Pattern 39
// 1
// 23
// 345
// 4567
// 56789
// int num;

//     for (int row = 1; row <= n; row++) {
//         num = row; // Start number for each row

//         // Print numbers in each row
//         for (int col = 1; col <= row; col++) {
//             cout << num++;
//         }
        
//         cout << endl;
//     }


// Pattern 40
// 1  2  3  4  5
// 6  7  8  9
// 10 11 12
// 13 14
// 15

//  int num = 1;  // Start number for the pattern
// Loop to print each row
//     for (int row = n; row >= 1; row--) {
// Print i numbers in each row
//         for (int col = 1; col <= row; col++) {
//             cout << num++ << " ";  // Print current number and increment
//         }
//         cout << endl;
//     }



// Pattern 41
// 1234
// 2341
// 3421
// 4321

// Pattern 42
// 11111
// 0000
// 111
// 00
// 1


// Pattern 43
// 1
// 4   9  16
// 25  36  49  64  81
// 100 121 144 169 196 225 256
// 289 324 361 400 441 484 529 576 625

// Pattern 44
// 11111
// 1   1
// 1   1
// 1   1
// 11111

// Pattern 45
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// Pattern 46
// 1
// 123
// 12345
// 1234567
// 123456789
// 1234567
// 12345
// 123
// 1


// Pattern 47
// 000000*
// 000000
// 000000
// 000***000

// Pattern 48
// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5

// Pattern 49
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

// Pattern 50
// 1
// 2 4
// 3 6 9
// 4 8 12 16
// 5 10 15 20 25
// 6 12 18 24 30 36
// 7 14 21 28 35 42 49
// 8 16 24 32 40 48 56 64
// 9 18 27 36 45 54 63 72 81
// 10 20 30 40 50 60 70 80 90 100

// Pattern 51
// 1
// 1 2
// 3 5 8
// 13 21 34 55
// 89 144 233 377 610

// Pattern 52
// 11111
// 10001
// 10001
// 10001
// 11111


// Pattern 53
// 1 2 3 4 5
// 2 1 2 3 4
// 3 2 1 2 3
// 4 3 2 1 2
// 5 4 3 2 1

// Pattern 54
// 1
// 3 2
// 4 5 6
// 10 9 8 7
// 11 12 13 14 15


// Pattern 55
// 1
// 232
// 34543
// 4567654
// 567898765

// Pattern 56
// 1     1
// 2   2
// 3 3
// 4
// 3 3
// 2   2
// 1     1

// Pattern 57
// 1
// 2 6
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15

// Pattern 58
// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

// Pattern 59
// 1
// 2   2
// 3       3
// 4           4
// 3       3
// 2   2
// 1


// Pattern 60
// 1  2  3  4  5
// 16          6
// 15          7
// 14          8
// 13 12 11 10 9

// Pattern 61
// 3 9 1 7 4
// 9 1 7 4
// 1 7 4
// 7 4
// 4

// Pattern 62
// 1
// 123
// 12345
// 1234567
// 12345
// 123
// 1


}

