/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "SLFacebookAudienceViewController-Protocol.h"

@class NSArray, SLFacebookPostPrivacySetting, UINavigationItem;

@interface SLFacebookAudienceTableViewController : UITableViewController <SLFacebookAudienceViewController>
{
    NSArray *_privacySettings;
    SLFacebookPostPrivacySetting *_selectedSetting;
    id <SLFacebookAudienceViewControllerDelegate> _selectionDelegate;
    UINavigationItem *_navigationItem;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)_privacySettingForIndexPath:(id)arg1;
- (void)setCurrentPrivacySetting:(id)arg1;
- (void)setPrivacySettings:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (id)initWithStyle:(int)arg1;

@end
