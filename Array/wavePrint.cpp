// // Print wave matrix 
// void printWaveMatrix(vector<vector<int>> matrix){ 
//     int row = matrix.size(); 
//     int col = matrix[0].size(); 
//     // Iterate array column wise 
//     for(int startCol=0; startCol<col; startCol++){ 
//     // when startCol==even then print row top to bottom 
//     if ((startCol & 1)==0){ 
//         for(int i=0;i<row; i++){ 
//         cout<<matrix[i][startCol]<<" "; 
//     } 
//     } 
//     // when startCol==odd then print row bottom to top 
//     else{ 
//         for(int i=row-1;i>=0;i--){ 
//         cout<<matrix[i][startCol]<<" "; 
//         } 
//     }
// }