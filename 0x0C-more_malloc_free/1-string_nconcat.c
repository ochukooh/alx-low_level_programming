char *string_nconcat(char *s1, char *s2, unsigned int n) {
  // Check for errors
  if (s1 == NULL || s2 == NULL) {
    return NULL;
  }

  // Get the length of the first string
  size_t len1 = strlen(s1);

  // Check if n is greater than the length of the second string
  if (n > strlen(s2)) {
    n = strlen(s2);
  }

  // Allocate memory for the new string
  char *new_string = malloc(len1 + n + 1);
  if (new_string == NULL) {
    return NULL;
  }

  // Copy the first string into the new string
  memcpy(new_string, s1, len1);

  // Copy the first n bytes of the second string into the new string
  memcpy(new_string + len1, s2, n);

  // Null terminate the new string
  new_string[len1 + n] = '\0';

  // Return a pointer to the new string
  return new_string;
}

