#!/bin/bash

cat /etc/passwd | grep --invert-match '\#' | awk 'NR%2==0' | cut --delimiter ':' --fields 1 | rev | sort --dictionary-order --reverse | awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' | tr '\n' ',' | sed 's/,$/./' | sed 's/,/, /g'
