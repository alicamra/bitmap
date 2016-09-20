#ifndef BITMAP_H_
#define BITMAP_H_
#include <stdint.h>
using namespace std;

struct Header {
  uint8_t type1;
  uint8_t type2;
  uint32_t size;
  uint16_t reserved1;
  uint16_t reserved2;
  uint32_t offBits;
};

struct Data {
  uint32_t size;
  uint32_t width;
  uint32_t height;
  uint16_t planes;
  uint16_t count;
  uint32_t compression;
  uint32_t sizeImage;
  uint32_t XPxPerMeter;
  uint32_t YPxPerMeter;
  uint32_t colorsUsed;
  uint32_t colorsImportant;
};

class Bitmap {
  public:
  Bitmap(const Header& header, const Data& data)
      : header_{header}, data_{data} {};
  virtual ~Bitmap() = default;

  private:
  Header header_;
  Data data_;
};

#endif
