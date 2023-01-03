pkill lttng-sessiond
rm -rf /root/lttng-traces
LTTNG_EXE=/usr/local/bin/lttng
$LTTNG_EXE create test
$LTTNG_EXE enable-event -u '*:*'
$LTTNG_EXE start
file run_test
LTTNG_UST_DEBUG=true ./run_test
$LTTNG_EXE stop
$LTTNG_EXE view
$LTTNG_EXE destroy