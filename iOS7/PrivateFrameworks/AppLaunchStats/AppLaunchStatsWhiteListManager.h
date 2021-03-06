/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DuetLoggerProtocol-Protocol.h"
#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class AppLaunchStatsSaveAndRestore, LSApplicationWorkspace, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface AppLaunchStatsWhiteListManager : NSObject <LSApplicationWorkspaceObserverProtocol, DuetLoggerProtocol>
{
    NSObject<OS_dispatch_queue> *aplsWLMQueue;
    AppLaunchStatsSaveAndRestore *saveAndRestoreContext;
    LSApplicationWorkspace *wlmAppWorkSpace;
    NSMutableArray *defaultsWriteWhiteList;
    NSMutableArray *launchServiceWhiteListFetch;
    NSMutableArray *launchServiceWhiteListPush;
    _Bool enableWhiteListCheck;
}

+ (id)instance;
@property(nonatomic) _Bool enableWhiteListCheck; // @synthesize enableWhiteListCheck;
- (void).cxx_destruct;
- (void)logLight:(struct __aslclient *)arg1 withMsg:(struct __aslmsg *)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __aslclient *)arg1 withMsg:(struct __aslmsg *)arg2 withLevel:(int)arg3;
- (void)saveContext:(id)arg1;
- (void)reloadConfiguration;
- (_Bool)isWhiteListed:(id)arg1 withFetch:(int)arg2;
- (_Bool)isAppInList:(id)arg1 withBundleID:(id)arg2;
- (void)initSetup;
- (void)applicationsDidInstall:(id)arg1;
- (void)addToMultiTaskingQueue:(id)arg1;
- (id)init;

@end

