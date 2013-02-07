//
//  MasterViewController.h
//  Eidynamic Workflow
//
//  Created by keith scharding on 2/6/13.
//  Copyright (c) 2013 keith scharding. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
