/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable-Protocol.h"

@class NSString, SAGKSpeakableAnswer;

@interface SAGKDirectAnswer : AceObject <SAAceSerializable>
{
}

+ (id)directAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)directAnswer;
@property(retain, nonatomic) SAGKSpeakableAnswer *speakableAnswer;
@property(copy, nonatomic) NSString *answer;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

