/*
//  NSDataAdditions.m
//  Zangetsu
//
//  Created by Colin Wheeler on 1/15/11.
//  Copyright 2012. All rights reserved.
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

#import "NSDataAdditions.h"

@implementation NSData (CWNSDataAdditions)

- (NSString *) cw_NSStringFromData
{
    NSString * _result = [[NSString alloc] initWithData:self 
											   encoding:NSUTF8StringEncoding];
    return _result;
}

- (const char *) cw_utf8StringFromData
{
    NSString * _result = [[NSString alloc] initWithData:self 
											   encoding:NSUTF8StringEncoding];
    const char * cRep = [_result UTF8String];
    return cRep;
}

-(NSString *)cw_hexString
{
	NSUInteger capacity = [self length] * 2;
	NSMutableString *stringBuffer = [NSMutableString stringWithCapacity:capacity];
	const unsigned char *dataBuffer = [self bytes];
	
	for (NSUInteger i = 0; i < [self length]; ++i) {
		[stringBuffer appendFormat:@"%02X ",(unsigned int)dataBuffer[i]];
	}
	if (stringBuffer) {
		return stringBuffer;
	}
	return nil;
}

@end
