//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "UITextViewDelegate.h"

@class NSString, UILabel;

@interface EKExpandingTextView : UITextView <UITextViewDelegate>
{
    UILabel *_placeholderLabel;
    BOOL _allowEnclosingViewScroll;
    struct CGSize _previousIntrinsicContentSize;
}

- (void).cxx_destruct;
- (BOOL)_shouldScrollEnclosingScrollView;
- (struct CGSize)intrinsicContentSize;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)_updatePlaceholder;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *placeholder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
