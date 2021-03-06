/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequester.h"

@class NSThread;

@interface GEORequester : PBRequester
{
    BOOL _disableReplay;
    NSThread *_thread;
}

+ (void)replayRequests;
+ (void)stopAllRequests;
@property BOOL disableReplay; // @synthesize disableReplay=_disableReplay;
- (void)start;
- (void)_handleResumeOnThread;
- (void)_applicationWantsToReplayRequests:(id)arg1;
- (void)_handleSuspendOnThread;
- (void)_applicationDidStopAllRequests:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;

@end

