//
//  KeyChainStore.h
//  GetMAC
//
//  Created by Jason on 16/9/13.
//  Copyright © 2016年 MTP. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeyChainStore : NSObject

    + (void)save:(NSString *)service data:(id)data;
    + (id)load:(NSString *)service;
    + (void)deleteKeyData:(NSString *)service;

@end
