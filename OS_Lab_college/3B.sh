flag=1
while [ $flag -eq 1 ]
do
        echo -e "\nEnter the choices"
        echo "1) for printing the content of current file"
        echo "2) for showing the present working directory"
        echo "3) for showing the calender of the current month of the current year"
        echo "4) exit "
        read choice
        echo "your choice is : $choice"
        case $choice in
                1 )
                 echo -e "\ncontents of the current file:"
                 ls
                 ;;
                2 )
                        echo -e "\npresent working directory:"
                        pwd
                        ;;
                3 )
                        echo -e "\nCalendar of the current month:"
                        cal
                        ;;
                4 )
                echo "Exiting"
                flag=0
                ;;
                * )
                        echo "Invalid choice"
                        ;;
        esac
done