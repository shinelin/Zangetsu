/*
//  CWSystemInfoIOS.h
//  Zangetsu
//
//  Created by Colin Wheeler on 1/21/12.
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
 
#import <UIKit/UIKit.h>

static NSString * const kCWSystemMajorVersion =  @"majorVersion";
static NSString * const kCWSystemMinorVersion =  @"minorVersion";
static NSString * const kCWSystemBugFixVersion = @"bugfixVersion";

@interface CWSystemInfoIOS : NSObject

/**
 Returns a NSString with the system version
 */
+(NSString *)systemVersionString;

/**
 Returns a NSDictionary with the system version broken up by section
 
 Returns a NSDictionary with the system version broken up by sections such as the
 Major Version ("5" in "5.0.1"), Minor Version ("0" in "5.0.1") and Bugfix Version
 ("1" in "5.0.1"). To access these you use the keys kCWSystemMajorVersion,
 kCWSystemMinorVersion and kCWSystemBugFixVersion. 
 */
+(NSDictionary *)hostVersion;

/**
 Returns a NSInteger with the number of CPU Cores on the Device
 
 @return a NSInteger representing the # of CPU Cores on the current Device
 */
+(NSInteger)cpuCoreCount;

/**
 Returns a hardware model string such as 'iPad2,1' that uniquely idenifies the host machine
 
 @return a NSString that identifies the hardware that the code is being executed on
 */
+(NSString *)hardwareModelString;

/**
 Performs the same function as +hardwareModelString except this returns strings like 'iPhone 4S' instead of iPhone4,1
 
 @return a human readable string such 'iPhone 4S' that identifies the hardware this code is being run on
 */
+(NSString *)englishHardwareString;

/**
 Returns YES if Retina Resolution is supported on the host hardware, otherwise returns NO
 
 @return a BOOL indicating YES is retina resolution is supported on the current hardware, otherwise NO
 */
+(BOOL)retinaSupported;

@end
