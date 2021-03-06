/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CHDAxis.h>

@interface CHDCategoryAxis : CHDAxis
{
    _Bool mAutomatic;
    _Bool mNoMultipleLevelLabel;
    int mLabelAlignment;
    int mLabelFrequency;
}

- (id)initWithResources:(id)arg1;
- (_Bool)isAutomatic;
- (void)setAutomatic:(_Bool)arg1;
- (_Bool)isNoMultipleLabellevel;
- (void)setNoMultipleLevelLabel:(_Bool)arg1;
- (int)labelAlignment;
- (void)setLabelAlignment:(int)arg1;
- (void)adjustAxisPositionForHorizontalChart;
- (int)labelFrequency;
- (void)setLabelFrequency:(int)arg1;

@end

