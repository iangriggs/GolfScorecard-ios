//
//  Game.h
//  GolfScorecard
//
//  Created by Ian Griggs on 19/02/2013.
//  Copyright (c) 2013 Ian Griggs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Course.h"
#import "Player.h"

@interface Game : NSObject

@property (nonatomic, strong) NSDate* startDate;
@property (nonatomic, strong) Course* course;
@property (nonatomic, strong) NSDictionary* players;

@end
