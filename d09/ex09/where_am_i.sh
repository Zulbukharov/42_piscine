var=$(ifconfig | grep "inet" | cut -d ' ' -f2)
col=$(ifconfig | grep "inet" | cut -d ' ' -f2 | wc -l | bc)
if [$col == 2]; then 
	echo "I am lost!"
else
	echo "$var"
fi
