//
//  CWDateUtilities.m
//  NilTracker
//
//  Created by Colin Wheeler on 10/16/10.
//  Copyright 2010. All rights reserved.
//

#import "CWDateUtilities.h"


@implementation CWDateUtilities

//
// Experimental method for parsing ISO8601 Strings given usually when 
// XML data is given bakc
//
+(NSDate *)dateFromISO8601String:(NSString *)dateString
{
	[NSDateFormatter setDefaultFormatterBehavior:NSDateFormatterBehavior10_4];
	
	NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
	[formatter setDateFormat:@"yyyy-mm-dd'T'hh:mm:ssZZZ"];
	
	NSDate * _tmp_date = [formatter dateFromString:dateString];
	
	NSDate *_returnDate = nil;
	
	_returnDate = _tmp_date;
	
	return _returnDate;
}

@end
