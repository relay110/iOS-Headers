//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSMutableArray;

@interface SKUIGridComponent : SKUIPageComponent
{
    NSMutableArray *_children;
    struct SKUIEditorialStyle _editorialStyle;
    int _gridType;
    struct SKUILockupStyle _lockupStyle;
    int _missingItemCount;
    BOOL _showsIndexNumbers;
}

@property(readonly, nonatomic) struct SKUIEditorialStyle editorialStyle; // @synthesize editorialStyle=_editorialStyle;
@property(readonly, nonatomic) BOOL showsIndexNumbers; // @synthesize showsIndexNumbers=_showsIndexNumbers;
@property(readonly, nonatomic) struct SKUILockupStyle lockupStyle; // @synthesize lockupStyle=_lockupStyle;
@property(readonly, nonatomic) int gridType; // @synthesize gridType=_gridType;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (id)description;
- (void)_reloadMissingItemCount;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle)arg2;
- (id)_updateWithMissingItems:(id)arg1;
- (id)_updateWithInvalidItemIdentifiers:(id)arg1;
- (id)metricsElementName;
- (BOOL)isMissingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (int)componentType;
- (id)initWithLockups:(id)arg1;
- (id)initWithGridItems:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithBrickItems:(id)arg1;

@end

