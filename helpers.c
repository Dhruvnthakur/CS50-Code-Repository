#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0 ; i< height ; i++)
    {
        for(int j=0 ; j<width ; j++)
        {
            float a = image[i][j].rgbtRed;
            float b = image[i][j].rgbtBlue;
            float c = image[i][j].rgbtGreen;
            int s = round((a+b+c)/3.0);
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
    for(int i=0 ; i< height ; i++)
    {
        for(int j=0 ; j<width ; j++)
        {
            float originalRed = image[i][j].rgbtRed;
            float originalBlue = image[i][j].rgbtBlue;
            float originalGreen = image[i][j].rgbtGreen;
            float sepiaRed = 0.393 * originalRed + 0.769 * originalGreen + 0.189 * originalBlue;
            float sepiaGreen = 0.349 * originalRed + 0.686 * originalGreen + 0.168 * originalBlue;
            float sepiaBlue = 0.272 * originalRed + 0.534 * originalGreen + 0.131 * originalBlue;
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtBlue = sepiaGreen;
            image[i][j].rgbtGreen = sepiaBlue;

        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0 ; i < height ; i++)
    {
        for(int j=0 ; j < width / 2 ; j++)
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
    for(int i=0 ; i< height ; i++)
    {
        for(int j=0 ; j<width ; j++)
        {

        }
    }
    return;
}
