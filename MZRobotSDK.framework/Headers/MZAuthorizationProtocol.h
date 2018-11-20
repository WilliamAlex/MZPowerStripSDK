//
//  MZAuthorizationProtocol.h
//  MZRobotSDK
//
//  Created by Alex William on 2018/11/19.
//  Copyright © 2018年 MoziTechnology. All rights reserved.
//

#import <Foundation/Foundation.h>

// 授权后的回调
typedef void(^authorizationCallBlock)(MZResultModel *resultModel);

@protocol MZAuthorizationProtocol <NSObject>

/**
 *  用户登录
 *
 *  username            用户名（手机号）
 *  password            密码
 *  clientid            客户端id
 *  clientsecret        客户端密码
 *
 **/
- (void)mzAuthorizationUsername:(NSString *)username
                       password:(NSString *)password
                       clientid:(NSString *)clientid
                   clientsecret:(NSString *)clientsecret
               authorizationCallbackBlock:(authorizationCallBlock)callbackBlock;

/**
 *  用户查询token
 *
 **/
- (NSString *)mzGetAuthorizationToken;

/**
 *  用户清除token
 *
 **/
- (void)mzClearAuthorizationToken;


@end
