find . -type f -name "*.cpp" -print0 | sort -z | while IFS= read -r -d '' file; do
    directory=`dirname "$file"`
    filename=`basename "$file" | cut -d'.' -f1`

    echo "On: ${directory##*/}/$filename"
        g++ -g "$file" -o "$directory/$filename"
    echo ""
done