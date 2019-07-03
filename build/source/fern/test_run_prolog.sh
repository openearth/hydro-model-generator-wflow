set -e

test_data_dir="/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/fern/data/test"
fern_test_dir="/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/sources/fern"
cmake="/usr/bin/cmake"


echo "write(-9.8, \"$fern_test_dir/constant-1.gnr:earth/gravity\", \
    \"Fern\")" | fern execute -


# io_ogr_test_dir="$fern_test_dir/io/ogr/test"
# $cmake -E copy $test_data_dir/point.json $io_ogr_test_dir
# 
# $cmake -E copy $test_data_dir/point.json $io_ogr_test_dir/read_only_point.json
# chmod 444 $io_ogr_test_dir/read_only_point.json
# 
# $cmake -E copy $test_data_dir/point.json $io_ogr_test_dir/write_only_point.json
# chmod 222 $io_ogr_test_dir/write_only_point.json
# 
# $cmake -E copy $test_data_dir/point.json $io_ogr_test_dir/execute_only_point.json
# chmod 111 $io_ogr_test_dir/execute_only_point.json
# 
# $cmake -E make_directory $io_ogr_test_dir/read_only_dir
# chmod 666 $io_ogr_test_dir/read_only_dir
