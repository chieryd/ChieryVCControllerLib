//
//  ChieryVCController.h
//  ChieryVCController
//
//  Created by chiery on 2018/1/5.
//  Copyright © 2018年 com.chiery.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ChieryVCController : NSObject

+ (instancetype)getInstance;

@property (nonatomic, strong) UINavigationController *navigationController;

@end
