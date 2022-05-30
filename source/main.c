// Program to convert TIFF image -----> Uncompressed GIF
#include<stdio.h>
#include"declarations.h"

int main(int argc,char *argv[])
{
    short int width,height;        // image width and height in pixels
    unsigned char **rgb_pixels;    // 2D array containing the RGB values of every pixel
    unsigned char* indexed_pixels; // Array containg the indexed values of every pixel

    // Opens and extracts information out of TIFF
    FILE *fp = fopen(argv[1], "rb");
    rgb_pixels = open_tiff_file(fp,&width, &height);
    
    // Opens the GIF image 
    FILE *gif;
    gif = fopen(argv[2], "wb");

    // Writes the GIF image
    header(gif); 
    logical_screen_descriptor(gif, width, height); 
    indexed_pixels = global_color_table(gif, rgb_pixels, width, height); 
    image_descriptor(gif, width, height); 
    image_data(gif, indexed_pixels, width, height);

    // Closes the GIF image
    fclose(gif);
}  