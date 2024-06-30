#include <stdio.h>

int main() {
  char str1[101];
  char str2[101];
  int state;
  scanf("%s", str1);
  scanf("%s", str2);


  for (int i = 0; i < 100; i++) {
    if (str1[i] == '\0') {
      break;
    }
    if ((str1[i] >= 'a') && (str1[i] <= 'z')) {
      str1[i] = str1[i] - 32;
    }
    if ((str2[i] >= 'a') && (str2[i] <= 'z')) {
      str2[i] = str2[i] - 32;
    }
  }



  for (int i = 0; i < 100; i++) {
    if(str1[i] == '\0'){
        break;
    }else if (((str1[i] - str2[i]) < 0)) {
      state = -1;
      break;
    } else if (str1[i] - str2[i] > 0) {
      state = 1;
      break;
    } else {
      state = 0;
    }
  }
  printf("%i", state);

  return 0;
}
