//
//  RNBranchAgingDictionary.h
//  RNBranch
//
//  Created by Jimmy Dee on 3/8/17.
//  Copyright © 2017 Branch Metrics. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RNBranchAgingDictionary<KeyType, ObjectType> : NSObject

@property (nonatomic, readonly) NSTimeInterval ttl;

#pragma mark - Object lifecycle

- (instancetype)initWithTtl:(NSTimeInterval)ttl NS_DESIGNATED_INITIALIZER;

+ (instancetype)dictionaryWithTtl:(NSTimeInterval)ttl;

#pragma mark - Methods from NSMutableDictionary

- (void)setObject:(ObjectType)object forKey:(KeyType<NSCopying>)key;
- (void)setObject:(ObjectType)object forKeyedSubscript:(KeyType<NSCopying>)key;

- (nullable ObjectType)objectForKey:(KeyType)key;
- (nullable ObjectType)objectForKeyedSubscript:(KeyType)key;

- (void)removeObjectForKey:(KeyType)key;

@end
