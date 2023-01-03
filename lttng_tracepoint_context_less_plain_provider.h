//This file was automatically generated from the source context_less.tp. Do not edit!
#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER context_less_plain

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "lttng_tracepoint_context_less_plain_provider.h"

#if !defined(_LTTNG_TRACEPOINT_CONTEXT_LESS_PLAIN_PROVIDER_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _LTTNG_TRACEPOINT_CONTEXT_LESS_PLAIN_PROVIDER_H

#include <lttng/tracepoint.h>
#include <stdint.h>
#include <stdbool.h>



TRACEPOINT_EVENT(
    context_less_plain,
    context_less_plain_begin,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    context_less_plain_end,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_uint8_t,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        uint8_t, uint8
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_integer(uint8_t, uint8, uint8)
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_uint16_t,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        uint16_t, uint16
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_integer(uint16_t, uint16, uint16)
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_uint32_t,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        uint32_t, uint32
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_integer(uint32_t, uint32, uint32)
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_uint64_t,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        uint64_t, uint64
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_integer(uint64_t, uint64, uint64)
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_int8_t,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        int8_t, int8
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_integer(int8_t, int8, int8)
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_int16_t,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        int16_t, int16
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_integer(int16_t, int16, int16)
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_int32_t,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        int32_t, int32
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_integer(int32_t, int32, int32)
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_int64_t,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        int64_t, int64
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_integer(int64_t, int64, int64)
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_char,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        char, c
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_array_text(char, c, &c, 1)
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_string,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        const char*, str, uint32_t, str_len
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_sequence_text(char, str, str, uint32_t, str_len)
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_bool,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        bool, b
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_integer(bool, b, b)
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_float,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        float, b
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_float(float, b, b)
    )
)

TRACEPOINT_EVENT(
    context_less_plain,
    simple_double,

    /* List of tracepoint arguments (input) */
    TP_ARGS(
        double, b
    ),

    /* List of fields of eventual event (output) */
    TP_FIELDS(
        ctf_float(double, b, b)
    )
)



#endif /* _LTTNG_TRACEPOINT_CONTEXT_LESS_PLAIN_PROVIDER_H */

#include <lttng/tracepoint-event.h>
