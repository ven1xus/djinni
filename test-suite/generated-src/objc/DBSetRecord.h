// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from set.djinni

#import <Foundation/Foundation.h>

@interface DBSetRecord : NSObject
- (nonnull instancetype)initWithSet:(nonnull NSSet<NSString *> *)set
                               iset:(nonnull NSSet<NSNumber *> *)iset;
+ (nonnull instancetype)setRecordWithSet:(nonnull NSSet<NSString *> *)set
                                    iset:(nonnull NSSet<NSNumber *> *)iset;

@property (nonatomic, readonly, nonnull) NSSet<NSString *> * set;

@property (nonatomic, readonly, nonnull) NSSet<NSNumber *> * iset;

@end
