/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEditItemViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, UITableView;

@interface EKEventAvailabilityEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate>
{
    int _availability;
    unsigned int _supportedAvailabilities;
    NSMutableArray *_choices;
    UITableView *_table;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_selectRow:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
@property(nonatomic) unsigned int supportedAvailabilities;
@property(nonatomic) int availability;
- (void)dealloc;
- (void)viewDidUnload;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

