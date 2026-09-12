#include "rng/rng.h"
#include <stdint.h>
#include <stdio.h>

#define BUCKET_COUNT 10
#define ROLLS 10000000

void random_int_test(void) {
  for (size_t i = 0; i < 32; ++i) {
    uint64_t roll = rng_u();
    printf(" %20llu => %.3f\n", roll, (float)roll / UINT64_MAX);
  }
}

void histogram_test(void) {
  size_t hist[BUCKET_COUNT] = {0};
  for (size_t i = 0; i < ROLLS; ++i) {
    float roll = rng_f();

    size_t hist_i = (size_t)(roll * BUCKET_COUNT);
    hist_i = hist_i < BUCKET_COUNT ? hist_i : (BUCKET_COUNT - 1); // Clamp
    hist[hist_i]++;
  }
  printf("[ ");
  for (size_t i = 0; i < BUCKET_COUNT; ++i) {
    printf("%.3f%% ", ((float)(hist[i] * 100) / ROLLS));
  }
  printf("]\n");
}

int main(void) {
  random_int_test();
  histogram_test();

  return 0;
}
