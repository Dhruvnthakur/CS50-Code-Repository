 #include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float a = image[i][j].rgbtRed;
            float b = image[i][j].rgbtBlue;
            float c = image[i][j].rgbtGreen;
            int s = round((a + b + c) / 3.0);
            image[i][j].rgbtRed = s;
            image[i][j].rgbtBlue = s;
            image[i][j].rgbtGreen = s;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float originalRed = image[i][j].rgbtRed;
            float originalBlue = image[i][j].rgbtBlue;
            float originalGreen = image[i][j].rgbtGreen;
            int sepiaRed = fmin(
                255, round(0.393 * originalRed + 0.769 * originalGreen + 0.189 * originalBlue));
            int sepiaGreen = fmin(
                255, round(0.349 * originalRed + 0.686 * originalGreen + 0.168 * originalBlue));
            int sepiaBlue = fmin(
                255, round(0.272 * originalRed + 0.534 * originalGreen + 0.131 * originalBlue));
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtBlue = sepiaBlue;
            image[i][j].rgbtGreen = sepiaGreen;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            int k = width - j - 1;
            RGBTRIPLE a = image[i][j];
            image[i][j] = image[i][k];
            image[i][k] = a;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int TR = 0, TB = 0, TG = 0;
            float counter = 0.0;
            for (int x = -1; x < 2; x++)
            {
                for (int y = -1; y < 2; y++)
                {
                    int cx = i + x;
                    int cy = j + y;

                    if (cx < 0 || cx > (height - 1) || cy < 0 || cy > (width - 1))
                    {
                        continue;
                    }

                    TR += image[cx][cy].rgbtRed;
                    TB += image[cx][cy].rgbtBlue;
                    TG += image[cx][cy].rgbtGreen;

                    counter++;
                }
            }
            copy[i][j].rgbtRed = round(TR / counter);
            copy[i][j].rgbtBlue = round(TB / counter);
            copy[i][j].rgbtGreen = round(TG / counter);
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = copy[i][j];
        }
    }

    return;
}
