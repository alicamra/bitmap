gtest = dependency('gtest')
gmock = dependency('gmock')

src = [
]

testexe = executable('bitmaptest', src,  dependencies: [gtest, gmock, bitmap_dep],cpp_args:cpp_flags)

dir = '@0@/@1@'.format(meson.source_root(), 'build/test')

test('Bitmap prototype tests', testexe, workdir : dir)
