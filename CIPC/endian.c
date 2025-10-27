#include <stdio.h>

int main() {
    unsigned int num = 0x12345678;   // 4-byte integer
    unsigned char *ptr = (unsigned char *)&num; // Point to its memory

    printf("Number: 0x%x\n", num);
    printf("Memory representation (byte by byte):\n");

    for (int i = 0; i < sizeof(num); i++) {
        printf("Byte %d: 0x%02x\n", i, ptr[i]);
    }

    // Check which endianness this system uses
    if (*ptr == 0x78)
        printf("\nSystem is Little Endian\n");
    else if (*ptr == 0x12)
        printf("\nSystem is Big Endian\n");
    else
        printf("\nUnknown Endianness\n");

    return 0;
}