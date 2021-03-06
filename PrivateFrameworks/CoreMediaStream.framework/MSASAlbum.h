/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSDate, NSDictionary, NSString;

@interface MSASAlbum : NSObject <NSCopying> {
    NSString *_GUID;
    NSString *_URLString;
    id _context;
    NSString *_ctag;
    NSString *_foreignCtag;
    NSDictionary *_metadata;
    NSString *_ownerEmail;
    NSString *_ownerFirstName;
    NSString *_ownerFullName;
    NSString *_ownerLastName;
    NSString *_ownerPersonID;
    NSString *_publicURLString;
    int _relationshipState;
    NSDate *_subscriptionDate;
}

@property(retain) NSString * GUID;
@property(retain) NSString * URLString;
@property(retain) id context;
@property(retain) NSString * ctag;
@property(retain) NSString * foreignCtag;
@property(retain) NSDictionary * metadata;
@property(retain) NSString * ownerEmail;
@property(retain) NSString * ownerFirstName;
@property(retain) NSString * ownerFullName;
@property(retain) NSString * ownerLastName;
@property(retain) NSString * ownerPersonID;
@property(retain) NSString * publicURLString;
@property int relationshipState;
@property(retain) NSDate * subscriptionDate;
@property(readonly) BOOL useForeignCtag;

+ (id)album;
+ (id)albumWithAlbum:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GUID;
- (id)URLString;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ctag;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)foreignCtag;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)metadata;
- (id)metadataValueForKey:(id)arg1;
- (id)ownerEmail;
- (id)ownerFirstName;
- (id)ownerFullName;
- (id)ownerLastName;
- (id)ownerPersonID;
- (id)publicURLString;
- (int)relationshipState;
- (void)setContext:(id)arg1;
- (void)setCtag:(id)arg1;
- (void)setForeignCtag:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setOwnerEmail:(id)arg1;
- (void)setOwnerFirstName:(id)arg1;
- (void)setOwnerFullName:(id)arg1;
- (void)setOwnerLastName:(id)arg1;
- (void)setOwnerPersonID:(id)arg1;
- (void)setPublicURLString:(id)arg1;
- (void)setRelationshipState:(int)arg1;
- (void)setSubscriptionDate:(id)arg1;
- (void)setURLString:(id)arg1;
- (id)subscriptionDate;
- (BOOL)useForeignCtag;

@end
