project('bitmap', 'cpp')
inc = include_directories('include')

cpp_flags = ['-std=c++14']

subdir('include')
subdir('src')

#rest
bitmap_dep = declare_dependency(include_directories: inc, sources: project_srcs)
subdir('test')

