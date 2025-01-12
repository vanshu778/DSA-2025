#include<iostream>
using namespace std;

int main(){

// Pattern 1:

// A
// AB
// ABC
// ABCD
// ABCDE

// int n;
// cin>>n;

// for(int i=0; i<n; i++){
//     for (char ch='A'; ch<='A'+i; ch++){
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Pattern 2:

// E
// DE
// CDE
// BCDE
// ABCDE

// int n;
// cin>>n;

// for(int i=0; i<n; i++){
//     for (char ch='E'-i; ch<='E'; ch++){
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Pattern 3:

// A
// BA
// CBA
// DCBA
// EDCBA

// int n;
// cin>>n;

// for(int i=0; i<n; i++){
//     for (char ch='A'+i; ch>='A'; ch--){
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Pattern 4:

// E
// ED
// EDC
// EDCB
// EDCBA

// int n;
// cin>>n;

// for(int i=0; i<n; i++){
//     for (char ch='E'; ch>='E'-i; ch--){
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Pattern 5:

// ABCDE
// ABCD
// ABC
// AB
// A

// int n;
// cin>>n;

// for(int i=0; i<n;i++){
//     for(char ch='A'; ch<='A'+(n-i-1);ch++){
//         cout<<ch;
//     }
//     cout<<endl;
// }
// Pattern 6:

// ABCDE
// BCDE
// CDE
// DE
// E

// int n;
// cin>>n;

// for(int i=0; i<n; i++){
//     for (char ch='A'+i; ch<='A'+n; ch++){
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Pattern 7:

// EDCBA
// DCBA
// CBA
// BA
// A

// int n;
// cin>>n;

// for(int i=0; i<n; i++){
//     for (char ch='E'-i; ch>='A'; ch--){
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Pattern 8:

// EDCBA
// EDCB
// EDC
// ED
// E

// int n;
// cin>>n;

// for(int i=0; i<n; i++){
//     for (char ch='E'; ch>='A'+i; ch--){
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Pattern 9:

// A
// BB
// CCC
// DDDD
// EEEEE

// int n;
// cin>>n;

// for(int i=0; i<n; i++){
//     char ch = 'A'+i;
//     for(int j=0; j<=i;j++){
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Pattern 10:

// E
// DD
// CCC
// BBBB
// AAAAA

// int n;
// cin>>n;

// for(int i=0; i<n; i++){
//     char ch = 'A'+(n-i-1);
//     for(int j=0; j<=i;j++){
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Pattern 11:

// EEEEE
// DDDD
// CCC
// BB
// A

// int n;
// cin>>n;

// for(int i=0; i<n; i++){
//     char ch = 'A'+(n-i-1);
//     for(int j=0; j<=n-i-1;j++){
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Pattern 12:

// AAAAA
// BBBB
// CCC
// DD
// E

// int n;
// cin>>n;

// for(int i=0; i<n; i++){
//     char ch = 'A'+i;
//     for(int j=0; j<=n-i-1;j++){
//         cout<<ch;
//     }
//     cout<<endl;
// }

// Pattern 13: Alphabet Pattern

// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

// int n;
// cin>>n;

// for(int i=0; i<n; i++){
//     for (char ch='A'; ch<='A'+i; ch++){
//         cout<<ch;
//     }
//     for(char ch='A'+i-1; ch>='A'; ch--){
//         cout<<ch;
//     }
//     cout<<endl;
// }
}
