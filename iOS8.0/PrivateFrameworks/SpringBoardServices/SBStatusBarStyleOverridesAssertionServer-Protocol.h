//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@protocol SBStatusBarStyleOverridesAssertionServer <NSObject>
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(NSSet *)arg1;
- (void)activateStatusBarStyleOverridesAssertions:(NSSet *)arg1 reply:(void (^)(NSDictionary *))arg2;
@end
