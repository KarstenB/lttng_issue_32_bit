//This file was automatically generated from the source context_less.tp. Do not edit!
// NOLINTBEGIN(cppcoreguidelines-avoid-magic-numbers)
#include <cstdint>
#include <string>
#include <string_view>
#include <array>
namespace lttng::c_api {
extern "C" void LttngTracepointContext_Less_PlainContextLessPlainBegin();
extern "C" void LttngTracepointContext_Less_PlainContextLessPlainEnd();
extern "C" void LttngTracepointContext_Less_PlainSimpleUint8T(uint8_t uint8);
extern "C" void LttngTracepointContext_Less_PlainSimpleUint16T(uint16_t uint16);
extern "C" void LttngTracepointContext_Less_PlainSimpleUint32T(uint32_t uint32);
extern "C" void LttngTracepointContext_Less_PlainSimpleUint64T(uint64_t uint64);
extern "C" void LttngTracepointContext_Less_PlainSimpleInt8T(int8_t int8);
extern "C" void LttngTracepointContext_Less_PlainSimpleInt16T(int16_t int16);
extern "C" void LttngTracepointContext_Less_PlainSimpleInt32T(int32_t int32);
extern "C" void LttngTracepointContext_Less_PlainSimpleInt64T(int64_t int64);
extern "C" void LttngTracepointContext_Less_PlainSimpleChar(char c);
extern "C" void LttngTracepointContext_Less_PlainSimpleString(const char* str, uint32_t str_len);
extern "C" void LttngTracepointContext_Less_PlainSimpleBool(bool b);
extern "C" void LttngTracepointContext_Less_PlainSimpleFloat(float b);
extern "C" void LttngTracepointContext_Less_PlainSimpleDouble(double b);
}

class ContextLessPlain {
    private:
    

    public:
    ContextLessPlain(){
        ContextLessPlain::ContextLessPlainBegin();
    }

    ~ContextLessPlain(){
        ContextLessPlain::ContextLessPlainEnd();
    }

    ContextLessPlain(const ContextLessPlain&) = delete;
    ContextLessPlain(ContextLessPlain&&) = default;
    ContextLessPlain& operator=(const ContextLessPlain&) = delete;
    ContextLessPlain& operator=(ContextLessPlain&&) = default;
    static void ContextLessPlainBegin() { lttng::c_api::LttngTracepointContext_Less_PlainContextLessPlainBegin(); }
    static void ContextLessPlainEnd() { lttng::c_api::LttngTracepointContext_Less_PlainContextLessPlainEnd(); }
    static void SimpleUint8T(uint8_t uint8) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleUint8T(uint8); }
    static void SimpleUint16T(uint16_t uint16) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleUint16T(uint16); }
    static void SimpleUint32T(uint32_t uint32) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleUint32T(uint32); }
    static void SimpleUint64T(uint64_t uint64) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleUint64T(uint64); }
    static void SimpleInt8T(int8_t int8) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleInt8T(int8); }
    static void SimpleInt16T(int16_t int16) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleInt16T(int16); }
    static void SimpleInt32T(int32_t int32) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleInt32T(int32); }
    static void SimpleInt64T(int64_t int64) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleInt64T(int64); }
    static void SimpleChar(char c) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleChar(c); }
    static void SimpleString(const std::string_view str) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleString(str.data(), str.length()); }
    static void SimpleBool(bool b) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleBool(b); }
    static void SimpleFloat(float b) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleFloat(b); }
    static void SimpleDouble(double b) { lttng::c_api::LttngTracepointContext_Less_PlainSimpleDouble(b); }
};
// NOLINTEND(cppcoreguidelines-avoid-magic-numbers)
