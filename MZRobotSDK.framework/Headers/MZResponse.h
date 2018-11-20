//
//  MZResponse.h
//  MZRobotSDK
//
//  Created by Alex William on 2018/11/19.
//  Copyright © 2018年 MoziTechnology. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MZResponse : NSObject


// 是否成功
@property (nonatomic, assign) BOOL isSuccess;

// 错误信息
@property (nonatomic, strong) NSError *error;

// 返回的数据对象
@property (nonatomic, strong) id data;

// 状态编码
@property (nonatomic, assign) NSInteger code;

// 返回的信息提示
@property (nonatomic, copy) NSString *msg;

// 单例
+ (MZResponse *)shareInstance;

@end
