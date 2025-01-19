#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

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
    bool found_jpeg = false ;
    int counter = 0;
    char filename[8];
    FILE *img = NULL;

    // While there's still data left to read from the memory card
    while (fread(buffer, 1, 512, card) == 512)
    {
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            found_jpeg = true;
        }
        // Create JPEGs from the data
        if(found_jpeg = true)
        {
            if(counter != 0)
            {
                fclose(img);
            }
            sprintf(filename , "%i03.jpeg", counter );
            img = fopen (filename , "w");
            fwrite(buffer, 1, 512, img);
            found_jpeg = false ;
            counter++;
        }
        else if(counter != 0)
        {
            fwrite(buffer, 1, 512, img);
        }
    }
    fclose(card);
}
