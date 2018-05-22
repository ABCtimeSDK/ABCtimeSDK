//
//  ABCtimeManager.h
//  ABCtimeDemo
//
//  Created by Alen on 2018/4/1.
//  Copyright © 2018年 Allen li. All rights reserved.
//  主

#import <Foundation/Foundation.h>


@class ABCtimeClassRoom;
@interface ABCtimeManager : NSObject

/**
 *  单例方法
 *  @return 实例对象
 */
+(instancetype)shareManager;

/*
 * getSDKVersionStr 获取SDK版本信息
 */
+ (NSString *)getSDKVersionStr;

/**
 销毁 ABCtimeManager
 */
+ (void)dellocManager;

/**
 进入直播

 @param classRoom ABCtimeClassRoom
 @param complete  BOOL success,NSString *errorStr
 */
- (void)enterABCtimeClassRoom:(ABCtimeClassRoom *)classRoom  complete:(void(^)(BOOL success,NSString *errorStr))complete;

@end
