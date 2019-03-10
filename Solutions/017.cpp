Logic
Use mapping
map<int, string>
map number of \t for each string
and keep account of max path till each\t
eg
dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext

map
0-dir       
max_path=dir

1-subdir
max_path=dir/subdir1

1-subdir2           // i am not updating id max==current\t
max_path=dir/subdir1

2-file.ext
max_path=dir/subdir2/file.ext

max_path includes all map.
