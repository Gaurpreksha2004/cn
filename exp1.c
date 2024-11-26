#include <stdio.h>

void convertDecToBin(int dec[], char bin[4][9]);

int main() {
    char bin2[4][9]; // To store binary representations
    int ipaddr[4];   // To store decimal IP address

    // Simulate reading an IP address (e.g., 192.168.0.1)
    printf("Enter 4 decimal numbers for the IP address: ");
    if (scanf("%d.%d.%d.%d", &ipaddr[0], &ipaddr[1], &ipaddr[2], &ipaddr[3]) != 4) {
        printf("Invalid IP address input.\n");
        return 1;
    }

    // Convert decimal to binary
    convertDecToBin(ipaddr, bin2);

    // Print binary representation
    printf("The address converted to binary is: %8s %8s %8s %8s\n",
           bin2[0], bin2[1], bin2[2], bin2[3]);

    return 0;
}

void convertDecToBin(int dec[], char bin[4][9]) {
    int i, j;
    for (i = 0; i < 4; i++) {  // Loop through each part of the IP
        for (j = 7; j >= 0; j--) {  // Convert each part to binary
            bin[i][j] = (dec[i] & 1) + '0'; // Extract LSB and convert to char
            dec[i] /= 2; // Right shift
        }
        bin[i][8] = '\0'; // Null terminate the binary string
    }
}
