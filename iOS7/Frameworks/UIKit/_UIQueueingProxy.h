/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UITargetedProxy.h>

@class NSMutableArray;

// Not exported
@interface _UIQueueingProxy : _UITargetedProxy
{
    int _lock;
    unsigned long long _suspensionCount;
    NSMutableArray *_queuedInvocations;
    id _shouldSuspendInvocationBlock;
}

+ (id)proxyWithTarget:(id)arg1;
+ (id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(id)arg2;
- (id)description;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)removeAllEnqueuedInvocations;
- (void)resume;
- (void)_dispatchSuspendedMessages;
- (void)suspend;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end

