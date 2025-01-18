for ((i = 1; i <= 5; i++)); do
    for ((j = i; j < 5; j++)); do
        echo -n "  "
    done
    for ((j = 1; j <= (2 * i - 1); j++)); do
        echo -n "* "
    done
    echo
done