/*
//  CWErrorUtilities.h
//  Zangetsu
//
//  Created by Colin Wheeler on 12/23/10.
//  Copyright 2010. All rights reserved.
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

#import <Foundation/Foundation.h>

#define CWLogError(_error_) NSLog(@"%@",[_error_ description])

static NSString * const kCWErrorDomain = @"CWErrorDomain";

/**
 Convenience method for creating a NSError Object
 
 Easy convenience method to create a NSError Object. It checks for the error message
 and throws an assertion if it's missing, allows for a string with formatting and
 passing arguments for the formatting of a string. If no domain is passed in it defaults
 to kCWErrorDomain.
 
 @param domain a NSString specifying the domain for a NSError object
 @param errorCode a NSInteger for the error code in a NSError object
 @param errorMessageFormat a NSString with optional formatting which specifies the NSError NSLocalizedDescriptionKey
 @return a NSError object with the values passed in
 */
NSError * CWCreateError(NSString * domain, NSInteger errorCode, NSString * errorMessageFormat, ...);

/**
 Convenience method for creating a NSError Object
 
 Easy convenience method to create a NSError Object. This method is similar to CWCreateError(),
 but it also allows setting userInfo dictionary entries. It checks for the error message
 and throws an assertion if it's missing, allows for a string with formatting and
 passing arguments for the formatting of a string. If no domain is passed in it defaults
 to kCWErrorDomain.
 
 @param domain a NSString specifying the domain for a NSError object
 @param errorCode a NSInteger for the error code in a NSError object
 @param info a NSDictionary with any other key/value pairs to be added to the NSError object
 @param errorMessageFormat a NSString with optional formatting which specifies the NSError NSLocalizedDescriptionKey
 @return a NSError object with the values passed in
 */
NSError * CWCreateErrorWithUserInfo(NSString * domain, NSInteger errorCode, NSDictionary *info, NSString * errorMessageFormat, ...);

/**
 Convenience Method for logging NSError information directly
 
 Internally this method does what you would have to do manually to log an NSError object to the
 console. It creates a NSError object and then logs its description with CWLogError().
 
 @param domain a NSString specifying the domain for a NSError object
 @param errorCode a NSInteger for the error code in a NSError object
 @param errorMessageFormat a NSString with optional formatting which specifies the NSError NSLocalizedDescriptionKey
 */
void CWLogErrorInfo(NSString * domain, NSInteger errorCode, NSString * errorMessageFormat, ...);
