#include "rng.h"
#include <stdint.h>

/*uint64_t rng_state = 1;*/
/*uint64_t rng_u(void) {*/
/*  rng_state ^= rng_state << 59;*/
/*  rng_state ^= rng_state >> 29;*/
/*  rng_state ^= rng_state << 23;*/
/**/
/*  return rng_state;*/
/*}*/

// Better but no idea where the numbers came from
uint64_t rng_state = 0;
uint64_t rng_u(void) {
  uint64_t z = (rng_state += 0x9E3779B97F4A7C15ULL);
  z = (z ^ (z >> 30)) * 0xBF58476D1CE4E5B9ULL;
  z = (z ^ (z >> 27)) * 0x94D049BB133111EBULL;
  return z ^ (z >> 31);
}

float rng_f(void) { return (float)rng_u() / UINT64_MAX; }
