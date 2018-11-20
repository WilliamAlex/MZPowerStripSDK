//
//  MZResultModel.h
//  MZRobotSDK
//
//  Created by Alex William on 2018/11/19.
//  Copyright © 2018年 MoziTechnology. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MZResultModel : NSObject

// 消息
@property (nonatomic, copy) NSString *message;

// 状态编码
@property (nonatomic, copy) NSString *code;

// 数据对象
@property (nonatomic, strong) NSDictionary *data;
@end
