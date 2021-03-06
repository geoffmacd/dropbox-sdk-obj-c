///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLegalHoldPolicy;
@class DBTEAMLegalHoldsListPoliciesResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LegalHoldsListPoliciesResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLegalHoldsListPoliciesResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly) NSArray<DBTEAMLegalHoldPolicy *> *policies;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param policies (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPolicies:(NSArray<DBTEAMLegalHoldPolicy *> *)policies;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LegalHoldsListPoliciesResult` struct.
///
@interface DBTEAMLegalHoldsListPoliciesResultSerializer : NSObject

///
/// Serializes `DBTEAMLegalHoldsListPoliciesResult` instances.
///
/// @param instance An instance of the `DBTEAMLegalHoldsListPoliciesResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsListPoliciesResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLegalHoldsListPoliciesResult *)instance;

///
/// Deserializes `DBTEAMLegalHoldsListPoliciesResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsListPoliciesResult` API object.
///
/// @return An instantiation of the `DBTEAMLegalHoldsListPoliciesResult` object.
///
+ (DBTEAMLegalHoldsListPoliciesResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
