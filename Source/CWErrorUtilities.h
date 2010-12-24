//
//  CWErrorUtilities.h
//  Zangetsu
//
//  Created by Colin Wheeler on 12/23/10.
//  Copyright 2010. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#define kCWErrorDomain @"CWErrorDomain"

NSError *CWCreateError(NSInteger errorCode, NSString *domain, NSString *errorMessage);