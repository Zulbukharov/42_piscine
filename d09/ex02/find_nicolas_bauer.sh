cat $1 | grep -i "Nicolas		Bauer" | awk '{print $(NF - 1)}'
