
char *longestCommonPrefix(char **strs, int strsSize) {
  if (strsSize == 0) {
    return "";
  }

  if (strsSize == 1) {
    return strs[0];
  }

  for (int i = 0;; i++) {
    char c = strs[0][i];
    if (c == '\0') {
      return strs[0];
    }

    for (int j = 1; j < strsSize; j++) {
      if (strs[j][i] != c) {
        strs[0][i] = '\0';
        return strs[0];
      }
    }
  }
}

int main(void) { return 0; }
