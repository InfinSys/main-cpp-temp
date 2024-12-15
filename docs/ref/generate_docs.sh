#!/bin/bash

if ! command -v doxygen &> /dev/null; then
	echo -e "ERROR: Doxygen is not installed on the machine, cannot generate documentation.\n"
	echo "Press Enter to continue..."
	read
	exit 1
fi

USER_LAST_WD=$(pwd)
SCRIPT_WD="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

cd "${SCRIPT_WD}/.."; doxygen ./Doxyfile
xdg-open ./ref/doxygen/html/index.html
cd ./ref/doxygen/latex; make
xdg-open ./refman.pdf

cd "${USER_LAST_WD}"

echo -e "\nDocs generation script complete\n"

exit 1
