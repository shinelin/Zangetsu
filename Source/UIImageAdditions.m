/*
//  UIImage+CWUIImageAdditions.m
//  Zangetsu
//
//  Created by Colin Wheeler on 6/12/12.
//  Copyright (c) 2012. All rights reserved.
//
 
 Copyright (c) 2012 Colin Wheeler
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */
 
#import "UIImageAdditions.h"

@implementation UIImage (CWUIImageAdditions)

-(UIImage *)cw_imageResizedToSize:(CGSize)size
{
	UIImage *result = [self cw_imageResizedToSize:size 
						 withInterpolationQuality:kCGInterpolationHigh];
	return result;
}

-(UIImage *)cw_imageResizedToSize:(CGSize)size 
		 withInterpolationQuality:(CGInterpolationQuality)quality
{
	CGImageRef image = self.CGImage;
	CGRect rect = { CGPointZero, size };
	
	CGContextRef context = CGBitmapContextCreate(NULL, size.width, size.height, 
												 CGImageGetBitsPerComponent(image), 0,
												 CGImageGetColorSpace(image), 
												 kCGImageAlphaPremultipliedLast);
	if (context == NULL) {
		CWDebugLog(@"ERROR: Received NULL CGContextRef");
		return nil;
	}
	
	CGContextSetInterpolationQuality(context, quality);
	CGContextDrawImage(context, rect, image);
	
	CGImageRef cgImage = CGBitmapContextCreateImage(context);
	UIImage *result = [UIImage imageWithCGImage:cgImage];
	
	CGImageRelease(cgImage);
	CGContextRelease(context);
	
	return result;
}

@end
