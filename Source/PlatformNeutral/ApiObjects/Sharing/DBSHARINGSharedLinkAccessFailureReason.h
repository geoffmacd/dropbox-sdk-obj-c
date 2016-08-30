///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBSerializableProtocol.h"

@class DBSHARINGSharedLinkAccessFailureReason;

#pragma mark - API Object

/// 
/// The SharedLinkAccessFailureReason union.
/// 
/// This class implements the DBSerializable protocol (serialize and deserialize
/// instance methods), which is required for all Obj-C SDK API route objects.
/// 
@interface DBSHARINGSharedLinkAccessFailureReason : NSObject <DBSerializable> 

#pragma mark - Instance fields

/// The DBSHARINGSharedLinkAccessFailureReasonTag enum type represents the
/// possible tag states with which the DBSHARINGSharedLinkAccessFailureReason
/// union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGSharedLinkAccessFailureReasonTag) {
    /// User is not logged in.
    DBSHARINGSharedLinkAccessFailureReasonLoginRequired,

    /// User's email is not verified.
    DBSHARINGSharedLinkAccessFailureReasonEmailVerifyRequired,

    /// The link is password protected.
    DBSHARINGSharedLinkAccessFailureReasonPasswordRequired,

    /// Access is allowed for team members only.
    DBSHARINGSharedLinkAccessFailureReasonTeamOnly,

    /// Access is allowed for the shared link's owner only.
    DBSHARINGSharedLinkAccessFailureReasonOwnerOnly,

    /// (no description).
    DBSHARINGSharedLinkAccessFailureReasonOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGSharedLinkAccessFailureReasonTag tag;

#pragma mark - Constructors

/// 
/// Initializes union class with tag state of LoginRequired.
/// 
/// About the LoginRequired tag state: User is not logged in.
/// 
/// @return An initialized DBSHARINGSharedLinkAccessFailureReason instance.
/// 
- (nonnull instancetype)initWithLoginRequired;

/// 
/// Initializes union class with tag state of EmailVerifyRequired.
/// 
/// About the EmailVerifyRequired tag state: User's email is not verified.
/// 
/// @return An initialized DBSHARINGSharedLinkAccessFailureReason instance.
/// 
- (nonnull instancetype)initWithEmailVerifyRequired;

/// 
/// Initializes union class with tag state of PasswordRequired.
/// 
/// About the PasswordRequired tag state: The link is password protected.
/// 
/// @return An initialized DBSHARINGSharedLinkAccessFailureReason instance.
/// 
- (nonnull instancetype)initWithPasswordRequired;

/// 
/// Initializes union class with tag state of TeamOnly.
/// 
/// About the TeamOnly tag state: Access is allowed for team members only.
/// 
/// @return An initialized DBSHARINGSharedLinkAccessFailureReason instance.
/// 
- (nonnull instancetype)initWithTeamOnly;

/// 
/// Initializes union class with tag state of OwnerOnly.
/// 
/// About the OwnerOnly tag state: Access is allowed for the shared link's owner
/// only.
/// 
/// @return An initialized DBSHARINGSharedLinkAccessFailureReason instance.
/// 
- (nonnull instancetype)initWithOwnerOnly;

/// 
/// Initializes union class with tag state of Other.
/// 
/// @return An initialized DBSHARINGSharedLinkAccessFailureReason instance.
/// 
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

/// 
/// Retrieves whether the union's current tag state has value LoginRequired.
/// 
/// @return Whether the union's current tag state has value LoginRequired.
/// 
- (BOOL)isLoginRequired;

/// 
/// Retrieves whether the union's current tag state has value
/// EmailVerifyRequired.
/// 
/// @return Whether the union's current tag state has value EmailVerifyRequired.
/// 
- (BOOL)isEmailVerifyRequired;

/// 
/// Retrieves whether the union's current tag state has value PasswordRequired.
/// 
/// @return Whether the union's current tag state has value PasswordRequired.
/// 
- (BOOL)isPasswordRequired;

/// 
/// Retrieves whether the union's current tag state has value TeamOnly.
/// 
/// @return Whether the union's current tag state has value TeamOnly.
/// 
- (BOOL)isTeamOnly;

/// 
/// Retrieves whether the union's current tag state has value OwnerOnly.
/// 
/// @return Whether the union's current tag state has value OwnerOnly.
/// 
- (BOOL)isOwnerOnly;

/// 
/// Retrieves whether the union's current tag state has value Other.
/// 
/// @return Whether the union's current tag state has value Other.
/// 
- (BOOL)isOther;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// @return A human-readable string representing the union's current tag state.
/// 
- (NSString * _Nonnull)tagName;

@end


#pragma mark - Serializer Object

/// 
/// The serialization class for the DBSHARINGSharedLinkAccessFailureReason
/// union.
/// 
@interface DBSHARINGSharedLinkAccessFailureReasonSerializer : NSObject 

/// 
/// Serializes DBSHARINGSharedLinkAccessFailureReason instances.
/// 
/// @param instance An instance of the DBSHARINGSharedLinkAccessFailureReason
/// API object.
/// 
/// @return A json-compatible dictionary representation of the
/// DBSHARINGSharedLinkAccessFailureReason API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGSharedLinkAccessFailureReason * _Nonnull)instance;

/// 
/// Deserializes DBSHARINGSharedLinkAccessFailureReason instances.
/// 
/// @param dict A json-compatible dictionary representation of the
/// DBSHARINGSharedLinkAccessFailureReason API object.
/// 
/// @return An instantiation of the DBSHARINGSharedLinkAccessFailureReason
/// object.
/// 
+ (DBSHARINGSharedLinkAccessFailureReason * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end