//
//  MAWMasterViewController.h
//  ControllingSource
//
//  Created by michael wasserman on 11/2/2013.
//  Copyright (c) 2013 michael wasserman. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MAWMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
