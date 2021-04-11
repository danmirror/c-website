all: index about
index:
		gcc index.c -o index
about: 
		gcc about.c -o about
clear:
		rm -f index about 