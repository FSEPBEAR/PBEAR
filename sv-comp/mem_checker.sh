PID=$1
MAX_MEMORY_USAGE=0
while ps -p $PID > /dev/null; do
    CURRENT_USAGE=$(ps -p $PID -o rss= | awk '{ printf "%.2f", $1/1024 }')
    
    if (( $(bc <<< "$CURRENT_USAGE > $MAX_MEMORY_USAGE") )); then
        MAX_MEMORY_USAGE=$CURRENT_USAGE
        echo "$MAX_MEMORY_USAGE"
    fi
    sleep 1
done