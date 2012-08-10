/*
//  GTCoreDataCenter.h
//
//  Created by Colin Wheeler on 9/24/09.
//  Copyright 2009 Colin Wheeler. All rights reserved.
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

#import <CoreData/CoreData.h>

#define CWCDManagedObjectContext() [[CWCoreDataCenter defaultCenter] managedObjectContext]
#define CWCDManagedObjectModel() [[CWCoreDataCenter defaultCenter] managedObjectModel]
#define CWCDPersistentStoreCoordinator() [[CWCoreDataCenter defaultCenter] persistentStoreCoordinator]

/**
 CWCoreDataCenter is a simple class used for maintaining pointers to a
 Managed Object Model, a Managed Object Context and a persistent store
 coordinator. In particular it makes it easy to point back to the main
 managed object context/model/coordinator for common core data operations
 */

@interface CWCoreDataCenter : NSObject
+(CWCoreDataCenter *)defaultCenter;
@property(assign) NSManagedObjectModel *managedObjectModel;
@property(assign) NSManagedObjectContext *managedObjectContext;
@property(assign) NSPersistentStoreCoordinator *persistentStoreCoordinator;
/**
 So you can create Core Data centers
 */
-(id)initWithManagedObjectModel:(NSManagedObjectModel *)mom 
		   managedObjectContext:(NSManagedObjectContext *)moc 
  andPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)psc;
@end
