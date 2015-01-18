//
//  DetailTableViewController.h
//  catchGoal
//
//  Created by Maverick on 1/17/15.
//  Copyright (c) 2015 iosDevCourse. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailTableViewController : UITableViewController

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;
@property (weak, nonatomic) IBOutlet UILabel *perMonthLabel;
@property (weak, nonatomic) IBOutlet UILabel *totalLabel;

@property (weak, nonatomic) IBOutlet KAProgressLabel *circleProgressLabel;
@property (weak, nonatomic) IBOutlet KAProgressLabel *sumLeftLabel; 
@property (strong, nonatomic) IBOutletCollection(KAProgressLabel) NSArray *smallCircleLabals;

@property (assign, nonatomic) NSInteger selectedItemInArray;
@property (assign, nonatomic) CGFloat progress;
@property (strong, nonatomic) NSMutableArray *goalsArray;

@end
