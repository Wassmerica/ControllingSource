//
//  MAWAppDelegate.h
//  ControllingSource
//
//  Created by michael wasserman on 11/2/2013.
//  Copyright (c) 2013 michael wasserman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MAWAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
