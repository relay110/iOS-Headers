//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SGIdentityKey : NSObject <NSCopying>
{
    NSString *_content;
    unsigned int _type;
}

+ (BOOL)isSupportedEntityType:(long long)arg1;
+ (unsigned int)identityTypeForKeyPart:(id)arg1;
+ (id)keyForContactExternalId:(int)arg1;
+ (id)keyForNormalizedEmail:(id)arg1;
+ (id)keyForEmail:(id)arg1;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *externalId;
- (id)identityKey;
- (id)emailAddress;
- (BOOL)hasEmailAddress;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqualToIdentityKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)serialize;
- (id)initWithType:(unsigned int)arg1 content:(id)arg2;
- (id)initWithSerialized:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
