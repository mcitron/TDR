for file in *pdf; do
   pdf2ps $file ${file/pdf/ps}
   ps2pdf ${file/pdf/ps} $file
done
