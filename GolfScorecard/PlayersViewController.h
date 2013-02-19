//
//  PlayersViewController.h
//  GolfScorecard
//
//  Created by Ian Griggs on 21/12/2012.
//  Copyright (c) 2012 Ian Griggs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController<PlayerDetailsViewControllerDelegate>
@property (strong, nonatomic) IBOutlet UITableView *playersTableView;

@end
