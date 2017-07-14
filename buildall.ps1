Get-ChildItem "*.cpp" -Recurse | ForEach-Object { 
    Write-Output "On: $($_.Directory.Name)\$($_.Name)"
        $output_path = "$($_.DirectoryName)\$($_.BaseName)"
        g++ "$($_.fullname)" -o "$output_path.exe"
    Write-Output ""
}