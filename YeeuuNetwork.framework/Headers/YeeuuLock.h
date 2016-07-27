//
//  YeeuuLock.h
//  YeeuuNetwork
//
//  Created by TheOne on 16/7/27.
//  Copyright © 2016年 谭伟. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YeeuuLock : NSObject
-(instancetype)initWithData:(NSDictionary*)data;


/**
 *  锁id
 */
@property (nonatomic, retain, readonly) id lid;

/**
 *  是否在线
 */
@property (nonatomic, assign, readonly) BOOL online;

/**
 *  生效时间(unix时间戳)
 */
@property (nonatomic, assign, readonly) NSInteger startDate;

/**
 *  结束时间(unix时间戳), -1为不限时间
 */
@property (nonatomic, assign, readonly) NSInteger endDate;

/**
 *  是否管理员
 */
@property (nonatomic, assign, readonly) BOOL admin;

/**
 *  是否密码锁
 */
@property (nonatomic, assign, readonly) BOOL isPwdLock;

/**
 *  锁拥有者(酒店、公寓等)名称
 */
@property (nonatomic, retain, readonly) NSString *hotel;

/**
 *  锁所在房间名
 */
@property (nonatomic, retain, readonly) NSString *room;

/**
 *  可以开门的总次数（-1为无限次）
 */
@property (nonatomic, assign, readonly) NSInteger total;

/**
 *  当前以及开门的次数
 */
@property (nonatomic, assign, readonly) NSInteger count;

/**
 *  是否禁用
 */
@property (nonatomic, assign, readonly) BOOL isDisable;
@end
