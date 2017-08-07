#ifndef ASM_ASM
#define ASM_ASM

extern "C" void ASMAdjustBrightness(
	unsigned char* bmpDataScan0,
	unsigned char* bmpOriginal,
	short value,
	int imageSizeInBytes
);

#endif
