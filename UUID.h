//
//  UUID.h
//  GetMAC
//
//  Created by Jason on 16/9/13.
//  Copyright © 2016年 MTP. All rights reserved.
//

#import <Foundation/Foundation.h>
#define KEY_USERNAME_PASSWORD @"com.company.app.usernamepassword"
#define KEY_USERNAME @"com.company.app.username"
#define KEY_PASSWORD @"com.company.app.password"


@interface UUID : NSObject

+(NSString *)getUUID;

@end
