for dir in */ ; do
    echo "Directory: $dir"
    cd $dir
    for file in *pdf; do
	if [[ $file =~ "limits_per_bin" ]]; then # just fix shane's files
	    echo "File: $file"
            pdf2ps $file ${file/pdf/ps}
	    ps2pdf ${file/pdf/ps} $file
	fi 
    done
    cd .. 
done

