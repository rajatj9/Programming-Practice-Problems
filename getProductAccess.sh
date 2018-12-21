#!/bin/bash
grep -E "/products/" $1 | cut -f 1,4 | sort -n -k1,1 -k2,2 | uniq
