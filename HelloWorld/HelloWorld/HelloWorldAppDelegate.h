//
//  HelloWorldAppDelegate.h
//  HelloWorld
//
//  Created by Kenny Liou Private on 11/28/12.
//  Copyright (c) 2012 Kenny Liou Private. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloWorldViewController;

@interface HelloWorldAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) HelloWorldViewController *viewController;

@end
