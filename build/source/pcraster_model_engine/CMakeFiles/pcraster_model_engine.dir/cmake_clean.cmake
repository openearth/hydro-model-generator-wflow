file(REMOVE_RECURSE
  "../../bin/libpcraster_model_engine.pdb"
  "../../bin/libpcraster_model_engine.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/pcraster_model_engine.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
