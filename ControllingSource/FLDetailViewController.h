//
//  FLDetailViewController.h
//  ControllingSource
//
//  Created by Felipe Lara de Souza on 7/28/14.
//  Copyright (c) 2014 Felipe Lara. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FLDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
