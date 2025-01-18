flag=1

while [ $flag -eq 1 ]; do
    echo -e "\nMenu:"
    echo "1) Copy a file (Specify source file and target directory)"
    echo "2) Remove a file (Specify file)"
    echo "3) Move a file (Specify file and target location)"
    echo "4) Rename a file"
    echo "5) Exit"
    echo -n "Enter your choice: "
    read choice

    case $choice in
        1)
            echo -n "Enter the source file path: "
            read src_file
            if [ ! -f "$src_file" ]; then
                echo "Source file does not exist!"
            else
                echo -n "Enter the target directory: "
                read target_dir
                if [ ! -d "$target_dir" ]; then
                    echo "Target directory does not exist!"
                else
                    cp "$src_file" "$target_dir"
                    echo "File copied successfully!"
                fi
            fi
            ;;
        2)
            echo -n "Enter the file to remove: "
            read file_to_remove
            if [ -f "$file_to_remove" ]; then
                rm "$file_to_remove"
                echo "File removed successfully!"
            else
                echo "File does not exist!"
            fi
            ;;
        3)
            echo -n "Enter the file to move: "
            read file_to_move
            if [ ! -f "$file_to_move" ]; then
                echo "File does not exist!"
            else
                echo -n "Enter the target location (directory or new file path): "
                read target_location
                mv "$file_to_move" "$target_location"
                echo "File moved successfully!"
            fi
            ;;
        4)
            echo -n "Enter the file to rename: "
            read old_name
            if [ ! -f "$old_name" ]; then
                echo "File does not exist!"
            else
                echo -n "Enter the new name for the file: "
                read new_name
                mv "$old_name" "$new_name"
                echo "File renamed successfully!"
            fi
            ;;
        5)
            echo "Exiting the script. Goodbye!"
            flag=0
            ;;
        *)
            echo "Invalid choice. Please enter a valid option (1-5)."
            ;;
    esac
done