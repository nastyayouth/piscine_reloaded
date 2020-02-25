find . -type f -name '*.sh' | rev | sed 's/\/.*//' | rev | cut -d. -f1
