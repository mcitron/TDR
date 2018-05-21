Source="${1:-../../../../AlphaTDR2/papers/SUS-16-038/trunk}"
Target="${2:-.}"
cp "$Source"/*.tex "$Target"
cp "$Source"/*.bib "$Target"
cp "$Source"/*.sh "$Target"
cp "$Source"/*.txt "$Target"
cp "$Source"/*.sh "$Target"
cp "$Source"/*.pdf "$Target"
cp "$Source"/*.html "$Target"
cp "$Source"/Supplementary/*.* "$Target"/Supplementary/
cp "$Source"/RootFilesAndTarFiles/*.* "$Target"/RootFilesAndTarFiles/
