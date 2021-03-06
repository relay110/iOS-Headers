//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSString;

@interface SBCellDataActivationFailureAlertItem : SBAlertItem
{
    int _error;
    NSString *_reason;
    _Bool _suggestWiFi;
    long long _settingsButtonIndex;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_showNetworkPrefs;
- (_Bool)dismissOnLock;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)dealloc;
- (id)initWithErrorCode:(int)arg1 reason:(id)arg2 suggestWiFi:(_Bool)arg3;

@end

