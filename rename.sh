find . -type f -name '*motion*' | while read FILE ; do
    newfile="$(echo ${FILE} |sed -e 's/motion/hilux/')" ;
    mv "${FILE}" "${newfile}" ;
done
