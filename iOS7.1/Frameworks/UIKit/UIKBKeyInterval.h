//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBKeyInterval : NSObject
{
    UIKBTree *_key;
    double _interval;
}

@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) UIKBTree *key; // @synthesize key=_key;
- (void)dealloc;
- (id)initWithKey:(id)arg1 interval:(double)arg2;

@end

