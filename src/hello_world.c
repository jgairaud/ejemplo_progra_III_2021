#include <hello_world.h>

int hello_world(const int iter) {
  for(int i=0; i<iter; i++) {
    printf("Hello world #%d\n", i);
  }
}
