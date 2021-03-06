//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, SKUIAttributedStringLayout, UIColor;

@interface SKUIAttributedStringView : UIView
{
    float _calculatedTopInset;
    int _firstLineTopInset;
    SKUIAttributedStringLayout *_layout;
    NSMutableArray *_requiredBadges;
    int _stringTreatment;
    UIColor *_textColor;
    UIColor *_treatmentColor;
}

+ (struct CGSize)sizeWithLayout:(id)arg1 treatment:(int)arg2;
@property(nonatomic) int firstLineTopInset; // @synthesize firstLineTopInset=_firstLineTopInset;
@property(retain, nonatomic) UIColor *treatmentColor; // @synthesize treatmentColor=_treatmentColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) int stringTreatment; // @synthesize stringTreatment=_stringTreatment;
@property(copy, nonatomic) NSArray *requiredBadges; // @synthesize requiredBadges=_requiredBadges;
@property(retain, nonatomic) SKUIAttributedStringLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)_reloadTopInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)description;
@property(readonly, nonatomic) float firstBaselineOffset;
@property(readonly, nonatomic) float baselineOffset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

