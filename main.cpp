#include <iconv.h>

int main() {
  // ensure we really linking with libiconv
  return (int)&iconv;
}
