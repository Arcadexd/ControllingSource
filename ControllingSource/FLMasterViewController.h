//
//  FLMasterViewController.h
//  ControllingSource
//
//  Created by Felipe Lara de Souza on 7/28/14.
//  Copyright (c) 2014 Felipe Lara. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface FLMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
