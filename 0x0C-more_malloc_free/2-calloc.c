void *_calloc(unsigned int nmemb, unsigned int size) {
  // Check for errors
  if (nmemb == 0 || size == 0) {
    return NULL;
  }

  // Allocate memory for the array
  void *ptr = malloc(nmemb * size);
  if (ptr == NULL) {
    return NULL;
  }

  // Set the memory to zero
  memset(ptr, 0, nmemb * size);

  // Return a pointer to the allocated memory
  return ptr;
}
int main() {
  // Allocate an array of 10 integers
  int *array = _calloc(10, sizeof(int));

  // Do something with the array

  // Free the allocated memory
  free(array);

  return 0;
}
