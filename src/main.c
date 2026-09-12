#include "rng/rng.h"
#include "vec/vec.h"
#include <stdint.h>
#include <stdio.h>

#define BUCKET_COUNT 10
#define ROLLS 10000000

void random_int_test(void) {
  for (size_t i = 0; i < 8; ++i) {
    uint64_t roll = rng_u();
    printf(" %20llu => %.3f\n", roll, (float)roll / UINT64_MAX);
  }
}

int main(void) {
  random_int_test();

  float dp = vec_dot((Vec){0.4f, 0.5f}, (Vec){0.8f, 0.2f});
  printf("dot product: %.2f", dp);

  return 0;
}
