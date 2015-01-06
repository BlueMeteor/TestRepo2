//
//  MasterViewController.h
//  SplitView
//
//  Created by Nesamuddin Saadat on 29.09.14.
//  Copyright (c) 2014 Nesamuddin Saadat. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
