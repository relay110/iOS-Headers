/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CommunicationsSetupUI/CNFRegController.h>

@class NSArray;

@interface CNFRegController (Filtering)
@property(readonly, nonatomic) NSArray *failedAccounts;
- (id)activeAccounts;
@property(readonly, nonatomic) NSArray *appleIDAccounts;
@property(readonly, nonatomic) NSArray *phoneAccounts;
- (id)_predicatesWithFilter:(long long)arg1;
- (id)_accountsPassingTests:(id)arg1 message:(id)arg2;
- (id)accountsWithFilter:(long long)arg1;
- (id)accountsWithFilter:(long long)arg1 message:(id)arg2;
- (void)_clearFilterCache;
- (id)__filter_operationalPredicate;
- (id)__filter_signedInPredicate;
- (id)__filter_validatedProfilePredicate;
- (id)__filter_signInCompletePredicate;
- (id)__filter_validatedAliasPredicate;
- (id)__filter_failedAccountsPredicate;
- (id)__filter_inactiveAccountsPredicate;
- (id)__filter_activeAccountsPredicate;
- (id)__filter_phoneAccountPredicate;
- (id)__filter_appleIDAccountPredicate;
@end

