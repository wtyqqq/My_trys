#include <stdio.h>
#include <string.h>
char puzzle[4][4] = {
    {'t', 'h', 'i', 's'},
    {'w', 'a', 't', 's'},
    {'o', 'a', 'h', 'g'},
    {'f', 'g', 'g', 't'}};
char *dict[4] = {"this", "two", "fat", "that"};
int wordExist(int x, int y, int dir, int strlen, char *word, int (*position)[2]);
int main(void) {
  char word[5];
  int position[4][2];
  int x, y, dir, strlen;

  for (x = 0; x < 4; x++) {
    for (y = 0; y < 4; ++y) {
      for (dir = 0; dir < 8; ++dir) {
        for (strlen = 0; strlen < 5; ++strlen) {
          if (wordExist(x, y, dir, strlen, word, position) == 1) {
            printf("word:%s\n", word);
            break;
          }
        }
      }
    }
  }
  return 0;
}
int wordExist(int x, int y, int dir, int strlen, char *word, int (*position)[2]) {
  char sword[5];
  int i = 0;
  while (i < strlen) {
    position[i][0] = x;
    position[i][1] = y;
    sword[i++] = puzzle[x][y];
    sword[i] = '\0';
    for (int k = 0; k < 4; ++k) {
      if (strcmp(sword, dict[k]) == 0) {
        strcpy(word, dict[k]);
        return 1;
      }
    }
    switch (dir) {
    case 0:
      y++;
      break;
    case 1:
      y--;
      break;
    case 2:
      x++;
      break;
    case 3:
      x--;
      break;
    case 4:
      y++;
      x++;
      break;
    case 5:
      x--;
      y--;
    case 6:
      x--;
      y++;
      break;
    case 7:
      x++;
      y--;
      break;
    default:
      puts("Direction error.");
      return 0;
    }
    if (x < 0 || y < 0)
      return 0;
  }
  return 0;
}