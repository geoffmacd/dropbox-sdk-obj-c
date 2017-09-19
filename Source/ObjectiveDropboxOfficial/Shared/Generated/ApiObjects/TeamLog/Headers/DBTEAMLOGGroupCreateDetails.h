///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGGroupCreateDetails;
@class DBTEAMLOGGroupJoinPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupCreateDetails` struct.
///
/// Created a group.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGGroupCreateDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Is admin managed group. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) NSNumber *isAdminManaged;

/// Group join policy.
@property (nonatomic, readonly) DBTEAMLOGGroupJoinPolicy *joinPolicy;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param joinPolicy Group join policy.
/// @param isAdminManaged Is admin managed group. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithJoinPolicy:(DBTEAMLOGGroupJoinPolicy *)joinPolicy
                    isAdminManaged:(nullable NSNumber *)isAdminManaged;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param joinPolicy Group join policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithJoinPolicy:(DBTEAMLOGGroupJoinPolicy *)joinPolicy;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupCreateDetails` struct.
///
@interface DBTEAMLOGGroupCreateDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGGroupCreateDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGGroupCreateDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupCreateDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGGroupCreateDetails *)instance;

///
/// Deserializes `DBTEAMLOGGroupCreateDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupCreateDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGGroupCreateDetails` object.
///
+ (DBTEAMLOGGroupCreateDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END