#include <stdio.h>
#include <sysexits.h>

#define PROGRAM "mondex"

const int MINIMUM_ARGUMENT_COUNT = 2;

void write_usage() {
  printf("usage: %s\n", PROGRAM);
}

int main(int argc, char *argv[]) {
  if (argc < MINIMUM_ARGUMENT_COUNT) {
    write_usage();
    return EX_USAGE;
  }

  return EX_OK;
}
