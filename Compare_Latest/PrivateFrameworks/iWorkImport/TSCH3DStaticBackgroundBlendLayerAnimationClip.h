//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartAnimationClip.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCH3DStaticBackgroundBlendLayerAnimationClip : TSCH3DChartAnimationClip
{
    NSArray *mNames;
}

+ (id)clipWithTimerName:(id)arg1;
+ (id)clip;
+ (id)clipWithTimerNames:(id)arg1;
- (void)willRunWithScene:(id)arg1 context:(id)arg2 layers:(id)arg3;
- (void)dealloc;
- (id)initWithTimerName:(id)arg1;
- (id)initWithTimerNames:(id)arg1;

@end

