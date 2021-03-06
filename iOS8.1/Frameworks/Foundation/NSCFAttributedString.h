//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

__attribute__((visibility("hidden")))
@interface NSCFAttributedString : NSMutableAttributedString
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)setAttributedString:(id)arg1;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)appendAttributedString:(id)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (Class)classForCoder;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToAttributedString:(id)arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attributesAtIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (unsigned int)length;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (void)finalize;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;

@end

