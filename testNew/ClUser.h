//
//  ClUser.h
//  testNew
//
//  Created by zhux on 2017/2/3.
//  Copyright © 2017年 zhux. All rights reserved.
//

#import <Foundation/Foundation.h>

//单个枚举，第一种
typedef NS_ENUM(NSInteger,clSex) {
    clSexMan,
    clSexWoman
};

typedef char nssChar;

//单个枚举，第二种
enum{
    UIViewAutoNone,
    UIViewAutoOne,
    UIViewAutoTwo,
    UIViewAutoThree,
    UIViewAutoFour
};
typedef NSInteger UIViewAuto;

//位移枚举，可多个存在
typedef NS_OPTIONS(NSUInteger, clName) {
    clNameXiaoOne = 0 ,
    clNameXiaoTwo = 1 << 0,
    clNameXiaoThree = 1 << 1,
    clNameXiaoFour = 1 << 2
};

@interface ClUser : NSObject

@property (nonatomic , copy , readonly) NSString *name;
@property (nonatomic , assign , readonly) NSInteger age;
@property (nonatomic , assign ) clSex sex;
@property (nonatomic ) clName nameXiao;
@property (nonatomic , assign) nssChar *nameString;


- (instancetype)UserWithName:(NSString*)userName Age:(NSInteger)age;

- (void)doLogin;

@end
