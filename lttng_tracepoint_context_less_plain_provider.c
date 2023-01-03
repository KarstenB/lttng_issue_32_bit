//This file was automatically generated from the source context_less.tp. Do not edit!
// NOLINTBEGIN(readability-function-cognitive-complexity)
#define TRACEPOINT_CREATE_PROBES
#define TRACEPOINT_DEFINE

#include "lttng_tracepoint_context_less_plain_provider.h"
#include <stdio.h>


void LttngTracepointContext_Less_PlainContextLessPlainBegin() {
  printf("Tracing LttngTracepointContext_Less_PlainContextLessPlainBegin()\n");
  tracepoint(context_less_plain,context_less_plain_begin);
}


void LttngTracepointContext_Less_PlainContextLessPlainEnd() {
  printf("Tracing LttngTracepointContext_Less_PlainContextLessPlainEnd()\n");
  tracepoint(context_less_plain,context_less_plain_end);
}


void LttngTracepointContext_Less_PlainSimpleUint8T(uint8_t uint8) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleUint8T(uint8_t uint8)\n");
  tracepoint(context_less_plain,simple_uint8_t,uint8);
}


void LttngTracepointContext_Less_PlainSimpleUint16T(uint16_t uint16) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleUint16T(uint16_t uint16)\n");
  tracepoint(context_less_plain,simple_uint16_t,uint16);
}


void LttngTracepointContext_Less_PlainSimpleUint32T(uint32_t uint32) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleUint32T(uint32_t uint32)\n");
  tracepoint(context_less_plain,simple_uint32_t,uint32);
}


void LttngTracepointContext_Less_PlainSimpleUint64T(uint64_t uint64) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleUint64T(uint64_t uint64)\n");
  tracepoint(context_less_plain,simple_uint64_t,uint64);
}


void LttngTracepointContext_Less_PlainSimpleInt8T(int8_t int8) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleInt8T(int8_t int8)\n");
  tracepoint(context_less_plain,simple_int8_t,int8);
}


void LttngTracepointContext_Less_PlainSimpleInt16T(int16_t int16) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleInt16T(int16_t int16)\n");
  tracepoint(context_less_plain,simple_int16_t,int16);
}


void LttngTracepointContext_Less_PlainSimpleInt32T(int32_t int32) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleInt32T(int32_t int32)\n");
  tracepoint(context_less_plain,simple_int32_t,int32);
}


void LttngTracepointContext_Less_PlainSimpleInt64T(int64_t int64) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleInt64T(int64_t int64)\n");
  tracepoint(context_less_plain,simple_int64_t,int64);
}


void LttngTracepointContext_Less_PlainSimpleChar(char c) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleChar(char c)\n");
  tracepoint(context_less_plain,simple_char,c);
}


void LttngTracepointContext_Less_PlainSimpleString(const char* str, uint32_t str_len) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleString(const char* str, uint32_t str_len)\n");
  tracepoint(context_less_plain,simple_string,str, str_len);
}


void LttngTracepointContext_Less_PlainSimpleBool(bool b) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleBool(bool b)\n");
  tracepoint(context_less_plain,simple_bool,b);
}


void LttngTracepointContext_Less_PlainSimpleFloat(float b) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleFloat(float b)\n");
  tracepoint(context_less_plain,simple_float,b);
}


void LttngTracepointContext_Less_PlainSimpleDouble(double b) {
  printf("Tracing LttngTracepointContext_Less_PlainSimpleDouble(double b)\n");
  tracepoint(context_less_plain,simple_double,b);
}

// NOLINTEND(readability-function-cognitive-complexity)
