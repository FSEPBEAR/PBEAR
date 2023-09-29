# original CBMC
timeout 900 cbmc target.c --unwind 10 --trace (if needed, --object-bits N)

# CBMC-refine
timeout 900 cbmc target.c --unwind 10 --trace --refine (if needed, --object-bits N)
