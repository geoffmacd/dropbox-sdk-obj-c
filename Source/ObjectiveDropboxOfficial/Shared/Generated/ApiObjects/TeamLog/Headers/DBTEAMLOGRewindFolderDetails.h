///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGRewindFolderDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RewindFolderDetails` struct.
///
/// Rewound a folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGRewindFolderDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Folder was Rewound to this date.
@property (nonatomic, readonly) NSDate *rewindFolderTargetTsMs;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param rewindFolderTargetTsMs Folder was Rewound to this date.
///
/// @return An initialized instance.
///
- (instancetype)initWithRewindFolderTargetTsMs:(NSDate *)rewindFolderTargetTsMs;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RewindFolderDetails` struct.
///
@interface DBTEAMLOGRewindFolderDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGRewindFolderDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGRewindFolderDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGRewindFolderDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGRewindFolderDetails *)instance;

///
/// Deserializes `DBTEAMLOGRewindFolderDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGRewindFolderDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGRewindFolderDetails` object.
///
+ (DBTEAMLOGRewindFolderDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
