/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface FTRegUtilities : NSObject
{
}

+ (id)serviceWithType:(int)arg1;
+ (id)standaloneAuthorizationControllerWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3;
+ (id)standaloneNewPasswordControllerWithRegController:(id)arg1 appleID:(id)arg2;
+ (void)changePasswordControllerDidCancel:(id)arg1;
+ (void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
+ (void)authorizationController:(id)arg1 authorizedAccount:(BOOL)arg2;

@end
