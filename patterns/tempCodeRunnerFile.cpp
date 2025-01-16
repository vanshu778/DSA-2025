 for(int i = 1; i <= rows; i++) {
      int num = i;
      for(int j = 1; j <= i; j++) {
          cout << num << " ";
          num += i - j;
      }
      cout << endl;
  }