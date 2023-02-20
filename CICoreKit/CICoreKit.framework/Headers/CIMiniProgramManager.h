//
//  CIMiniProgramManager.h
//  CICoreKit
//
//  Created by daben on 2022/4/11.
//  Copyright © 2022 CI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CIMiniProgramConst.h"

NS_ASSUME_NONNULL_BEGIN

/**
 在AppDelegate的application:didFinishLaunchingWithOptions:方法中调用： [[CIMiniProgramManager manager] registerWithLaunchOptions:launchOptions];
 示例：
 [[CIMiniProgramManager manager] registerWithLaunchOptions:@{
     CIMiniProgramHostLaunchKey: @"https://dp-5e620de0033d3.gw002.oneitfarm.com",
     CIMiniProgramProxyPathLaunchKey: @"main.php/json/proxy/call?url=",
     CIMiniProgramAccountServiceAppIdLaunchKey: @"doatnnuotjlwbh6r83jed1m7yvwrps5q",
     CIMiniProgramAccountServiceChannelLaunchKey: @"default",
     CIMiniProgramLoginEnableURLLaunchKey: @"https://gyha.buzhizhe.cn/index/api/getstatus",
     CIMiniProgramLoginPolicyLaunchKey: @(CIMiniProgramLoginPolicyRepeat)
 }];
 */
@interface CIMiniProgramManager : NSObject

/// 单例
+ (instancetype)manager;

/// 注册小程序配置
/// @param launchOptions 运行配置
- (void)registerWithLaunchOptions:(nullable NSDictionary<CIMiniProgramLaunchKey, id> *)launchOptions;

/// 注销登录
- (void)logout;

@end

NS_ASSUME_NONNULL_END
