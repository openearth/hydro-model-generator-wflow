file(REMOVE_RECURSE
  "../../bin/libpcraster_old_calc.pdb"
  "../../bin/libpcraster_old_calc.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang C CXX)
  include(CMakeFiles/pcraster_old_calc.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
