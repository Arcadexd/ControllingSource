//
//  FLAppDelegate.h
//  ControllingSource
//
//  Created by Felipe Lara de Souza on 7/28/14.
//  Copyright (c) 2014 Felipe Lara. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FLAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
