int *array_range(int min, int max) {
  // Check for errors
  if (min > max) {
    return NULL;
  }

  // Calculate the size of the array
  size_t size = max - min + 1;

  // Allocate memory for the array
  int *array = malloc(size * sizeof(int));
  if (array == NULL) {
    return NULL;
  }

  // Populate the array with the values from min to max
  for (int i = 0; i < size; i++) {
    array[i] = min + i;
  }

  // Return a pointer to the array
  return array;
}
int main() {
  // Get the minimum and maximum values
  int min = 10;
  int max = 20;

  // Create an array of integers from min to max
  int *array = array_range(min, max);

  // Print the array
  for (int i = 0; i < max - min + 1; i++) {
    printf("%d\n", array[i]);
  }

  // Free the allocated memory
  free(array);

  return 0;
}
