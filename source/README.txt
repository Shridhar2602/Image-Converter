README_FILE
 
PROJECT DESCRIPTION
-------------------

This archive contains a tool written in C programming language to convert an image from one format to another.

	Source format:		TIFF.(coloured)
	Destination format:	uncompressed GIF.

The tool:
> reads the image data from the source image.
> populates suitable data structures with image data.
> converts data such that it is suitable to fill destination format data structures.
> uses data in destination data structure format and creates a destination image file.

FILES
-----

declarations.h 	  -> contains function declarations and structures of both tiff and gif programs.
tiff_img_reader.c -> program to read image data and properties from the source image.
gif_img_writer.c  -> program to write GIF image file using RGB data collected from TIFF image.
main.c 			  -> contains main() function which calls all required functions, reads and writes data.
makefile		  -> makefile for this project (assumes gcc and GNU make).
README.txt		  -> this file.

BUILD
-----

Build the executable by doing:(assumes GNU make and gcc)

1. 'make clean'
2. 'make my_project'
3. './my_project source_image_name destination_image_name' (this will create the destination image)
4. Open source image destination image files using any display tool.

ASSUMPTIONS
-----------
1. The program works perfectly for images containing 3-4 colours. We have hardcoded nothing and we wrote
   the code for 256 colours but it gives Segmentation Error for some images having more than 4 colours.

2. For the 2 images provided, it works correctly.

PROJECT MEMBERS AND THEIR CONTRIBUTIONS.
---------------------------------------

1) Jainav: 	 Research on TIFF file format and helped writing TIFF image data code.
2) Prabal: 	 Defined appropriate data structures for storing TIFF data.
3) Anurag: 	 wrote code to store TIFF image data (tiff_img_reader.c)
4) Shashank: 	 Research on GIF and makefile.
5) Ashish: 	 Research on GIF and wrote code to convert RGB data from TIFF and wrote the gif image.
6) Shridhar: 	 Research on GIF and wrote code to convert RGB data from TIFF and wrote the gif image. 	 
