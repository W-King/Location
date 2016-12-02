//
//  AppDelegate.h
//  PPX_Location
//
//  Created by pipixia on 2016/12/2.
//  Copyright © 2016年 pipixia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LocationTracker.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property LocationTracker * locationTracker;
@property (nonatomic) NSTimer* locationUpdateTimer;

@end

