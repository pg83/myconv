#include <iconv.h>

int main() {
  // ensure we really use libiconv
  return (int)&iconv;
}
