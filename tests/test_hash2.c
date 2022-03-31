/**********************************/
#define DBG_H_DEF_ONCE
/**********************************/
#include "tests/test_common.h"
/**********************************/
#include "src/deps.c"
/**********************************/


int main(int argc, const char *const argv[]) {
  log_debug("OK");
  dbg(123, "%d");
}

