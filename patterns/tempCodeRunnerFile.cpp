  for(int i = 5; i >= 1; i--) {
      for(int j = 5; j >= 1; j--) {
          if(j == i)
              cout << "*";
          else
              cout << j;
      }
      cout << endl;
  }
