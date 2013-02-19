//
//  PlayerDetailsViewController.h
//  GolfScorecard
//
//  Created by Ian Griggs on 21/12/2012.
//  Copyright (c) 2012 Ian Griggs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Player.h"

@class PlayerDetailsViewController;
@class Player;

@protocol PlayerDetailsViewControllerDelegate <NSObject>
- (void)playerDetailsViewControllerDidCancel:(PlayerDetailsViewController *)controller;
- (void)playerDetailsViewController:(PlayerDetailsViewController *)controller didAddPlayer:(Player*) player;
@end

@interface PlayerDetailsViewController : UITableViewController

@property (nonatomic, weak) id <PlayerDetailsViewControllerDelegate> delegate;

- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *playerName;

@end
