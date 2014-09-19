//
//  MasterViewController.h
//  NYC Photo History
//
//  Created by kyle winslow on 9/19/14.
//  Copyright (c) 2014 ___LBS Team Red___. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
