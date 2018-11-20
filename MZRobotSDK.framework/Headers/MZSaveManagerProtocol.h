//
//  MZSaveManagerProtocol.h
//  MZRobotSDK
//
//  Created by Alex William on 2018/11/19.
//  Copyright © 2018年 MoziTechnology. All rights reserved.
//


@protocol MZSaveManagerProtocol <NSObject>

/**
 *
 *  存储   userID         用户唯一标识ID
 *
 */
- (BOOL)saveUserID:(NSString *)userID;



/**
 *
 *  0,开发环境 1,测试环境 2，预生产环境 3，生产环境
 *
 */
- (void)changeBaseUrl:(int)urlType;

@end
