// vector<int>commonElements(int A[], int B[], C[], int n1, int n2. int n3){
//     vector<int>ans;
//     set<int>st;
//     int i=0,j=0,k=0;

//     while(i<n1 && j<n2 && k<n3){
//         if(A[i]==B[j] && B[j]==C[k] && C[k]==A[i]){
//             st.insert(A[i]);
//             i++,j++,k++;
//         }
//         else if(A[i]<B[j]){
//             i++;
//         }
//         else if(B[j]<C[k]){
//             j++;
//         }
//         else{
//             k++;
//         }
//     }
//     for(auto i:st){
//         ans.push_back(i);
//     }
//     return ans;
// }