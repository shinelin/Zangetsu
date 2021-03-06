/*
//  NSImage+CW.h
//  Zangetsu
//
//  Created by Colin Wheeler on 7/7/12.
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

#import <Cocoa/Cocoa.h>

@interface NSImage (CWNSImageAdditions)

/**
 Returns a new image of the receiver resized to the specified size
 
 This method is equivalent to calling 
 cw_imageResizedToSize:size withInterPolationQuality:kCGInterpolationHigh
 
 @param size a CGSize spec that the object should be resized to
 @return a new NSImage object that has been scaled to the new size or nil if something went wrong
 */
-(NSImage *)cw_imageResizedToSize:(CGSize)size;

/**
 Returns a new image of the receiver resized to the specified size
 
 @param size a CGSize spec that the object should be resized to
 @param quality the amount of interpolation quality that should be applied to the resize
 @return a new NSImage object that has been scaled to the new size or nil if something went wrong
 */
-(NSImage *)cw_imageResizedToSize:(CGSize)size 
		 withInterpolationQuality:(CGInterpolationQuality)quality;

@end
