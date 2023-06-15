cc=`pkg-config --cflags --libs gstreamer-1.0`
output: s2 s1
		g++ s1 s2 -o output $(cc)
s1 : mmm.h mmm.cpp
		g++ -c mmm.cpp -o s1 $(cc)
s2 : thumbnail_final.cpp 
		g++ -c thumbnail_final.cpp -o s2 $(cc)
clean : rm -r *.o