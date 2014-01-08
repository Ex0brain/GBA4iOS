//
//  GBAROM_Private.h
//  GBA4iOS
//
//  Created by Riley Testut on 11/10/13.
//  Copyright (c) 2013 Riley Testut. All rights reserved.
//

#import "GBAROM.h"

NSString *const GBAROMConflictedStateChangedNotification = @"GBAROMConflictedStateChangedNotification";
NSString *const GBAROMSyncingDisabledStateChangedNotification = @"GBAROMSyncingDisabledStateChangedNotification";

@interface GBAROM ()

@property (readwrite, assign, nonatomic) BOOL syncingDisabled;
@property (readwrite, assign, nonatomic) BOOL conflicted;
@property (readwrite, assign, nonatomic) BOOL newlyConflicted;

@property (readwrite, assign, nonatomic, getter = isEvent) BOOL event;

@end
