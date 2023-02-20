//
//  CIMiniProgramConst.h
//  CICoreKit
//
//  Created by daben on 2022/4/12.
//

#import <Foundation/Foundation.h>

typedef NSString * CIMiniProgramLaunchKey;

/// 登录策略
/// CIMiniProgramLoginPolicyOff    不使用登录功能，但不影响小程序跳转登录。
/// CIMiniProgramLoginPolicyStore    存储登录信息，如果登录信息有效，则不会弹出登录界面。
/// CIMiniProgramLoginPolicyAutoCheck  可以自动检测登录状态。检测登录是否可用，可以通过CIMiniProgramLoginEnableURLLaunchKey进行配置。
/// CIMiniProgramLoginPolicyRepeat: 每次冷启动进入程序都会跳转登录
typedef NS_ENUM(NSUInteger, CIMiniProgramLoginPolicy) {
    CIMiniProgramLoginPolicyOff, // 禁止使用登录
    CIMiniProgramLoginPolicyStore, // 登录信息会存储，每次自动登录
    CIMiniProgramLoginPolicyAutoCheck, // 自动检测&登录
    CIMiniProgramLoginPolicyRepeat // 每次进入都需要登录
};

/// 登录策略类型（value：CIMiniProgramLoginPolicy）
/// 默认：CIMiniProgramLoginPolicyOff
FOUNDATION_EXPORT CIMiniProgramLaunchKey const CIMiniProgramLoginPolicyLaunchKey;

/// 请求域名
FOUNDATION_EXPORT CIMiniProgramLaunchKey const CIMiniProgramHostLaunchKey;

/// 请求转发的代理地址
FOUNDATION_EXPORT CIMiniProgramLaunchKey const CIMiniProgramProxyPathLaunchKey;

/// 检测登录功能是否可用的请求地址
/// GET请求，返回的数据格式：{"ret":1,"data":false}
/// 仅在CIMiniProgramLoginPolicyLaunchKey的值是CIMiniProgramLoginPolicyAutoCheck时，该配置才会生效
/// 如果请求失败或未配置，将会跳过登录自动进入主程序。
FOUNDATION_EXPORT CIMiniProgramLaunchKey const CIMiniProgramLoginEnableURLLaunchKey;

/// 账号服务唯一id（appId）
/// 当前使用场景：登录服务（当登录可用时）
FOUNDATION_EXPORT CIMiniProgramLaunchKey const CIMiniProgramAccountServiceAppIdLaunchKey;

/// 账号服务唯一key（appKey）
/// 当前使用场景：登录服务（当登录可用时）
FOUNDATION_EXPORT CIMiniProgramLaunchKey const CIMiniProgramAccountServiceAppKeyLaunchKey;

/// 账号服务通道值
/// 当前使用场景：登录服务（当登录可用时）
FOUNDATION_EXPORT CIMiniProgramLaunchKey const CIMiniProgramAccountServiceChannelLaunchKey;
