cpp_file=cartesian_product.cpp
out_file=/tmp/cpp.out

reset
g++ $cpp_file -o $out_file
$out_file
