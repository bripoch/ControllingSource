//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Brian Pochne on 03/02/14.
//  Copyright (c) 2014 Brian Pochne. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
