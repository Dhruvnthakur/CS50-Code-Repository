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

        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0 ; i < height ; i++)
    {
        for(int j=0 ; j < width/2 ; j++)
        {
            int k = width - j + 1;
            int a = image[i][j].rgbtRed;
            image[i][j].rgbtRed = image[i][k].rgbtRed;
            image[i][k].rgbtRed = a;
            int b = image[i][j].rgbtBlue;
            image[i][j].rgbtBlue = image[i][k].rgbtBlue;
            image[i][k].rgbtBlue = b;
            int c = image[i][j].rgbtGreen;
            image[i][j].rgbtGreen = image[i][k].rgbtGreen;
            image[i][k].rgbtGreen = c;

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
