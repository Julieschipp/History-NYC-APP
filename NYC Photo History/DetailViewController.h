//
//  DetailViewController.h
//  NYC Photo History
//
//  Created by kyle winslow on 9/19/14.
//  Copyright (c) 2014 ___LBS Team Red___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
