//TODO Watch Video on Debugging < DONE

gdb --args // i knew this one

// TODO Need to watch the video to understand this one < DONE
threat apply all bt // Dump a backtrace on all threads. It's very useful

gdb --batch --ex r --ex bt --ex q --args //Run a program so that if it bombs you get a backtrace.

info break

info watchpoint //TODO Whats it for?
//"You can use a watchpoint to stop execution whenever the value of an expression changes, without having to predict a particular place where this may happen."

attach pid

detach


