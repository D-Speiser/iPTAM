#include "fast_corner.h"
#include "prototypes.h"

namespace CVD
{
	void fast_corner_detect_9(const BasicImage<byte>& i, std::vector<ImageRef>& corners, int b)
	{
		fast_corner_detect_plain_9(i, corners, b);
	}
}
