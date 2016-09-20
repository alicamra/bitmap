#include <Bitmap.h>
#include <string>
#include <cstdlib>
#include <iostream>

int main() {
  Header header;
  Data data;

 header.type1 = 'B';
 header.type2 = 'M';
  header.size = 14 + 40 + 200 * 200 * 3;
  header.reserved1 = 0;
  header.reserved2 = 0;
  header.offBits = 14 + 40;

  data.size = 40;
  data.width = 200;
  data.height = 200;
  data.planes = 1;
  data.count = 8;
  data.compression = 0;
  data.sizeImage = 200 * 200 * 3;
  data.XPxPerMeter = 0;
  data.YPxPerMeter = 0;
  data.colorsUsed = 24;
  data.colorsImportant = 0;

  unsigned char* img = NULL;
  img = (unsigned char*)malloc(200 * 200);
  // img = new unsigned char [200*200*3];
  FILE* f;

  f = fopen("image.bmp", "wb");
  fwrite(&header, 1, 14, f);

  fwrite(&data, 1, 40, f);
  fwrite(img, sizeof(char), 3 * 200 * 200, f);
  fclose(f);
  return 0;
}
