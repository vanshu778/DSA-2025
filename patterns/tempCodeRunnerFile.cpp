 int num = 1;
  for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 2 - i; j++) {
          cout << "  ";
      }
      for(int j = 0; j < i + 1; j++) {
          cout << num++;
          if(j != i) cout << " ";
      }
      cout << endl;
  }