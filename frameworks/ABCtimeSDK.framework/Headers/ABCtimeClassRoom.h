//
//  ABCtimeClassRoom.h
//  ABCtimeSDK
//
//  Created by Alen on 2018/5/21.
//  Copyright © 2018年 Allen li. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ABCtimeClassRoom : NSObject
/** 配置环境， YES  = isRelease ; NO = isDug 默认 YES */
@property(nonatomic, assign) BOOL isRelease;

/** appId 1\2\3\4\5\6\7\ */
@property(nonatomic, copy) NSString *appId;


/** 进入教室的 用户 唯一ID(通过第三方服务返回的uid) */
@property(nonatomic, copy) NSString *uid;

/** 进入教室的 用户的登录认证Token(通过第三方服务返回的token) */
@property(nonatomic, copy) NSString *token;

/** 产品名称 用户产品的名称 例如：ABCtime */
@property(nonatomic, copy) NSString *productName;

/** 进入教室的 用户昵称 */
@property(nonatomic, copy) NSString *userName;

/** 用户ID */
@property(nonatomic, copy) NSString *userId;

/** 用户的头像地址 */
@property(nonatomic, copy) NSString *userAvatar;

/** 课堂唯一ID，平台唯一 */
@property(nonatomic, copy) NSString *lessonID;

/** 课程名字 */
@property(nonatomic, copy) NSString *lessonName;

/** 课程介绍性封面图片的url */
@property(nonatomic, copy) NSString *cover;

/** 课程文字性介绍 */
@property(nonatomic, copy) NSString *vDescription;

/** 课程的主题 */
@property(nonatomic, copy) NSString *subject;

/** 课程适应的等级 */
@property(nonatomic, copy) NSString *stage;

/** 课件地址 */
@property(nonatomic, copy) NSString *slide_url;
/** 事件地址 */
@property(nonatomic, copy) NSString *event_url;

/** 课程视频信息 */
@property(nonatomic, strong) NSArray *videos;

/** 课程的时长，单位是秒 */
@property(nonatomic, assign) NSTimeInterval video_duration;

/** 课堂等待页面 */
@property(nonatomic, copy) NSString *waiting_page;

/** 课程故障通知页面 */
@property(nonatomic, copy) NSString *notice_page;

/** 课程结束页 */
@property(nonatomic, copy) NSString *end_page;

/** 课程状态，0表示还未开课，1表示课程正在上课，2表示课程已经结束 */
@property(nonatomic, assign) NSInteger status;

/** 开始日期， 时间戳*/
@property(nonatomic, assign) NSTimeInterval startTime;

/** 结束日期， 时间戳 */
@property(nonatomic, assign) NSTimeInterval endTime;

/** 视频id */
@property(nonatomic, copy) NSString *vid;
@end
