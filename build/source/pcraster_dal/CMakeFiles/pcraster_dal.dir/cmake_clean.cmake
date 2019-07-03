file(REMOVE_RECURSE
  "../../bin/libpcraster_dal.pdb"
  "../../bin/libpcraster_dal.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/pcraster_dal.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
