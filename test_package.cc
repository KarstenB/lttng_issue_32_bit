#include <cstdlib>
#include <stdio.h>
#include <stdint.h>

#include "lttng_tracepoint_context_less_plain_provider.hpp"

int main(int argc, char *argv[]) {
  bool b=false;
  char c='A';
  double d=3.145632423;
  float f=1.2345678;
  int8_t i8=-34;
  int16_t i16=-4235;
  int32_t i32=-453634564;
  int64_t i64=-3125754756453423424;
  uint8_t u8=34;
  uint16_t u16=4235;
  uint32_t u32=453634564;
  uint64_t u64=3125754756453423424;
  void * mem=calloc(64,1);
  {
    ContextLessPlain ctx_less_plain;
    ctx_less_plain.SimpleBool(b);
    ctx_less_plain.SimpleChar(c);
    ctx_less_plain.SimpleDouble(d);
    ctx_less_plain.SimpleFloat(f);
    ctx_less_plain.SimpleString("const std::string_view str");
    ctx_less_plain.SimpleUint8T(u8);
    ctx_less_plain.SimpleUint16T(u16);
    ctx_less_plain.SimpleUint32T(u32);
    ctx_less_plain.SimpleUint64T(u64);
  }
  return 0;
}
