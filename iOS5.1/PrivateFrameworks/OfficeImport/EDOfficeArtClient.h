/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "OADClient-Protocol.h"
#import "OADTextClient-Protocol.h"

@class EDAnchor, EDComment, EDSheet, EDTextBox, NSMutableDictionary;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient>
{
    EDSheet *mSheet;
    id mClientState;
    EDAnchor *mAnchor;
    EDTextBox *mTextBox;
    EDComment *mComment;
    NSMutableDictionary *mTableModels;
    struct CGRect mBounds;
    _Bool mIsBoundsSet;
}

- (id)init;
- (void)dealloc;
- (id)clientState;
- (void)setClientState:(id)arg1;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (_Bool)areBoundsSet;
- (void)setBounds:(struct CGRect)arg1;
- (BOOL)hasBounds;
- (struct CGRect)bounds;
- (id)sheet;
- (void)setSheet:(id)arg1;
- (id)tableModels;
- (void)setTableModels:(id)arg1;
- (id)textBox;
- (void)setTextBox:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (BOOL)hasText;

@end
