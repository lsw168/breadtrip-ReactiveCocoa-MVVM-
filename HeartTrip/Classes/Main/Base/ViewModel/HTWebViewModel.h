//
//  HTWebViewModel.h
//  HeartTrip
//
//  Created by 熊彬 on 16/12/13.
//  Copyright © 2016年 BinBear. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HTViewModelService.h"


typedef NS_ENUM(NSUInteger, HTWebNavBarStyleType) {
    
    kWebNavBarStyleNomal   = 1, // 默认
    kWebNavBarStyleHidden  = 2, // 隐藏
    
};

@interface HTWebViewModel : NSObject

/**
 *  请求地址
 */
@property (copy, nonatomic) NSString *requestURL;
/**
 *  标题
 */
@property (copy, nonatomic) NSString *title;
/**
 *  NavBar类型
 */
@property (assign , nonatomic) HTWebNavBarStyleType navBarStyleType;

- (instancetype)initWithServices:(id<HTViewModelService>)services params:(NSDictionary *)params;

@end
