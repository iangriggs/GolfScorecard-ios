//
//  PlayerDetailsViewController.m
//  GolfScorecard
//
//  Created by Ian Griggs on 21/12/2012.
//  Copyright (c) 2012 Ian Griggs. All rights reserved.
//

#import "PlayerDetailsViewController.h"

@interface PlayerDetailsViewController ()

@end


@implementation PlayerDetailsViewController

@synthesize delegate;

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
 
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view delegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
	if (indexPath.section == 0)
		[self.playerName becomeFirstResponder];
}

- (IBAction)cancel:(id)sender {
    [self.delegate playerDetailsViewControllerDidCancel:self];
}

- (IBAction)done:(id)sender {
    Player *player = [[Player alloc] init];
	player.name = self.playerName.text;
//	player.game = @"Chess";
//	player.rating = 1;
	[self.delegate playerDetailsViewController:self didAddPlayer:player];
}

@end
