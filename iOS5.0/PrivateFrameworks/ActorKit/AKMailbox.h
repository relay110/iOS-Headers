/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSProxy.h"

@class AKDispatchQueue, Protocol;

@interface AKMailbox : NSProxy
{
    id _target;
    Protocol *_publicProtocol;
    Protocol *_privateProtocol;
    AKDispatchQueue *_dispatchQueue;
    union qed_queue_u *_queue;
}

+ (id)mailboxWithTarget:(id)arg1 protocol:(id)arg2;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (void)dealloc;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)send;
- (void)setDispatchQueue:(id)arg1;
- (id)dispatchQueue;
- (void)setPrivateMessages:(id)arg1;
- (BOOL)swapCurrentTarget:(id)arg1 forNewTarget:(id)arg2;
@property(nonatomic) id target; // @synthesize target=_target;

@end

