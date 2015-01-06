//
//  DetailViewController.h
//  SplitView
//
//  Created by Nesamuddin Saadat on 29.09.14.
//  Copyright (c) 2014 Nesamuddin Saadat. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
