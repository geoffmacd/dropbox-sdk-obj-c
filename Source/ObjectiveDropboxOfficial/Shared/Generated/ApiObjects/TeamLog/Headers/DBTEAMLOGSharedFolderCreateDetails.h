///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedFolderCreateDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedFolderCreateDetails` struct.
///
/// Created a shared folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedFolderCreateDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Target asset index.
@property (nonatomic, readonly) NSNumber *targetIndex;

/// Parent namespace ID. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *parentNsId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param targetIndex Target asset index.
/// @param parentNsId Parent namespace ID. Might be missing due to historical
/// data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex parentNsId:(nullable NSString *)parentNsId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param targetIndex Target asset index.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedFolderCreateDetails` struct.
///
@interface DBTEAMLOGSharedFolderCreateDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedFolderCreateDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSharedFolderCreateDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderCreateDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGSharedFolderCreateDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedFolderCreateDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderCreateDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSharedFolderCreateDetails` object.
///
+ (DBTEAMLOGSharedFolderCreateDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END