#!/bin/bash

javac ScrLib.java && \
javah scrlib.ScrLib && \
mv ScrLib.class scrlib && \
jar -cf ScrLib.jar scrlib/ScrLib.class

JAVA_HOME=/usr/lib/jvm/java-7-openjdk
gcc -std=c99 -I$JAVA_HOME/include -I$JAVA_HOME/include/linux -c -fPIC ScrLib.c -o scrlib.o -lmenu -lncurses
gcc -std=c99 -shared -o libscrlib.so scrlib.o -lncurses
