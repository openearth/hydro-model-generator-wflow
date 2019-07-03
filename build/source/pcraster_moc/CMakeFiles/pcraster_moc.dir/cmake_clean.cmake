file(REMOVE_RECURSE
  "../../bin/libpcraster_moc.pdb"
  "../../bin/libpcraster_moc.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/pcraster_moc.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
