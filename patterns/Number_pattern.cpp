#include<iostream>
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

  for (int row=0; row<n; row++){
    for(int col=0; col<=row; col++){
        if((row+col)%2 ==0){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
    cout<<endl;
}

// Pattern 16
// 13579
// 3579
// 579
// 79
// 9

// Pattern 17
// 1
// 2 4
// 1 3 5
// 2 4 6 8
// 1 3 5 7 9

// Pattern 18
// 55555
// 45555
// 34555
// 23455
// 12345

// Pattern 19
// 1
// 23
// 456
// 78910

// Pattern 20
// 1
// 10
// 101
// 1010
// 10101

// Pattern 21
// 1
// 2 6
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15

// Pattern 22
// 1
// 123
// 12345
// 1234567

// Pattern 23
// 12344321
// 123321
// 1221
// 11

// Pattern 24
// 1
// 2 3 4
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

// Pattern 26
// 11111
// 2222
// 333
// 22
// 1

// Pattern 27
// 5432*
// 5431
// 5421
// 5321
// 4321

// Pattern 28
// 1
// 121
// 12321
// 1234321

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

// Pattern 30
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

// Pattern 31
// 1
// 21
// 321
// 4321
// 54321

// Pattern 32
// 1
// 232
// 45654
// 78910987

// Pattern 33
// 1
// 22
// 333
// 4444
// 4444
// 333
// 22
// 1

// Pattern 34
// 11
// 12 13
// 13 14 15
// 14 15 16 17

// Pattern 35
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// Pattern 36
// 5
// 54
// 543
// 5432
// 54321

// Pattern 37
// 1
// 212
// 32123
// 4321234

// Pattern 39
// 1
// 23
// 345
// 4567
// 56789

// Pattern 40
// 1  2  3  4  5
// 6  7  8  9
// 10 11 12
// 13 14
// 15


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

