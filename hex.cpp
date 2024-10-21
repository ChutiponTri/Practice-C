#include <stdio.h>
#include <stdint.h>

uint16_t decodeHeartRate(uint8_t *data) {
    uint8_t flags = data[0];  // First byte contains flags
    uint16_t heartRate;

    // Check if heart rate is in 8-bit format (uint8)
    if ((flags & 0x01) == 0) {
        heartRate = data[1];  // 8-bit heart rate
    } else {
        // 16-bit heart rate (little-endian)
        heartRate = (data[2] << 8) | data[1];  // Combine bytes
    }

    return heartRate;  // Return the decoded heart rate
}

int main(void) {
    int hexValue = 0x1A; // Defining a hex value (26 in decimal)
    printf("Decimal: %d\n", hexValue); // Prints: Decimal: 26
    printf("Hexadecimal: %x\n", hexValue); // Prints: Hexadecimal: 1a

    // Example 1: 8-bit heart rate
    uint8_t data1[] = {0x00, 72};  // flags=0x00 (8-bit format), heartRate=72 bpm
    uint16_t heartRate1 = decodeHeartRate(data1);
    printf("Heart Rate (8-bit format): %d bpm\n", heartRate1);

    // Example 2: 16-bit heart rate
    uint8_t data2[] = {0x01, 0x34, 0x01};  // flags=0x01 (16-bit format), heartRate=308 bpm
    uint16_t heartRate2 = decodeHeartRate(data2);
    printf("Heart Rate (16-bit format): %d bpm\n", heartRate2);

    return 0;
}
