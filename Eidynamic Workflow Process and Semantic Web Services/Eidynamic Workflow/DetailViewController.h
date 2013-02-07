//
//  DetailViewController.h
//  Eidynamic Workflow
//
//  Created by keith scharding on 2/6/13.
//  Copyright (c) 2013 keith scharding. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
