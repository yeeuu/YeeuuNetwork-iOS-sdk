//
//  YeeuuNetwork.h
//  YeeuuNetwork
//
//  Created by TheOne on 16/7/27.
//  Copyright © 2016年 Yeeuu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YeeuuLock.h"

@class YeeuuNetwork;

typedef void(^YeeuuNetworkErr)(NSInteger errCode, id errMsg);
typedef void(^YeeuuLocksResult)(NSArray<YeeuuLock*> *Data);
typedef void(^YeeuuOpenLockResult)(BOOL openSuccess, id msg);

@interface YeeuuNetwork : NSObject
+(instancetype)new;
/**
 *  超时时间，默认10秒
 */
@property (nonatomic, assign) NSUInteger timeout;

/**
 *  获取用户某酒店的全部锁
 *
 *  @param token    用户登录token
 *  @param hotel    酒店ID
 *  @param block    成功后返回
 *  @param errBlock 失败后返回
 */
-(void)GetLocksWithToken:(NSString*)token HotelID:(NSString*)hotel Success:(YeeuuLocksResult)block Err:(YeeuuNetworkErr)errBlock;

/**
 *  开锁
 *
 *  @param token    用户登录token
 *  @param lid      锁id
 *  @param block    开锁结果
 */
-(void)OpenLockWithToken:(NSString*)token Lock:(YeeuuLock*)lock Success:(YeeuuOpenLockResult)block;

@end
