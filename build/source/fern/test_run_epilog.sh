set -e

test_data_dir="/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/fern/data/test"
binary_dir="/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/sources/fern"
cmake="/usr/bin/cmake"


interpreter_test_dir="$binary_dir/interpreter/test"
$cmake -E remove -f $interpreter_test_dir/output_dataset.map
$cmake -E remove -f $interpreter_test_dir/earth.gnr
