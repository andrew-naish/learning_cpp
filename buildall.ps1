$from_dir = ".\Pluralsight\C++\Learn How to Program with C++"
$module_dirs = Get-ChildItem -Directory -Path $from_dir

$module_dirs | ForEach-Object {

    $this_dir = $_.FullName
    $marker_file = "$this_dir\1output" # if this file is found all source files will be presented to compiler
    $output_path = "$($_.DirectoryName)\$($_.BaseName)"

    Write-Output "Compiling for module dir: $($_.Name)"

    # Complex linking mode: compile all cpp files inot single exe
    if (Test-Path "$marker_file") {
        Write-Output "found marker file"
        $output_path = "$this_dir\$(Get-Content -Raw $marker_file).exe"

        g++ -g "$this_dir\*.cpp" -o "$output_path"
    }

    # Normal mode: compile each cpp into respective exe
    else {
        Get-ChildItem "$this_dir\*.cpp" -Recurse | ForEach-Object { 
            $output_path = "$($_.DirectoryName)\$($_.BaseName)"
            g++ -g "$($_.FullName)" -o "$output_path.exe"
        }
    }

    Write-Output ""

}