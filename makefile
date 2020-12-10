map: map.o map_single_thread.o concurrent_map.o \
	actual_mapping.o mapping_struct.o
	cc -o map map.o map_single_thread.o \
		concurrent_map.o actual_mapping.o mapping_struct.o -pthread

map.o: map.c map_single_thread.h concurrent_map.h
	cc -c map.c 
map_single_thread.o: map_single_thread.c map_single_thread.h
	cc -c map_single_thread.c
concurrent_map.o: concurrent_map.c concurrent_map.h actual_mapping.h
	cc -c concurrent_map.c 
actual_mapping.o: actual_mapping.c actual_mapping.h mapping_struct.h 
	cc -c actual_mapping.c
mapping_struct.o: mapping_struct.c mapping_struct.h
	cc -c mapping_struct.c

clean:
	rm map *.o


