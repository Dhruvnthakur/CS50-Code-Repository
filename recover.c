#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    // Open the memory card
    FILE *card = fopen(argv[1], "r");

    // Create a buffer for a block of data
    uint8_t buffer[512];
    bool found_jpeg = false;
    int counter = 0;
    char filename[8];
    FILE *img = NULL;

    // While there's still data left to read from the memory card
    while (fread(buffer, 512, 1, card) == 512)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            if (found_jpeg)
            {
                fclose(img);
            }
            else
            {
                found_jpeg = true;
            }

            sprintf(filename, "%03d.jpg", counter);
            img = fopen(filename, "w");
            if (img == NULL)
            {
                fclose(card);
                printf("Could not create %s. \n", filename);
                return 3;
            }
            counter++;
        }

        if (found_jpeg)
        {
            fwrite(buffer, 521, 1, img);
        }
        // Create JPEGs from the data
    }
    fclose(card);
    if (found_jpeg)
    {
        fclose(img);
    }
    return 0;
}
