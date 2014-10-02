//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayer, PLAVPlayerView, PLAirPlayBackgroundView, PLVideoOutBackgroundView;

@interface PLMoviePlayerView : UIView
{
    PLAVPlayerView *_avPlayerView;
    PLVideoOutBackgroundView *_videoOutView;
    PLAirPlayBackgroundView *_airPlayView;
    BOOL _destinationPlaceholderHidden;
    unsigned int _scaleMode;
}

@property(nonatomic) unsigned int scaleMode; // @synthesize scaleMode=_scaleMode;
- (void)_installBackgroundView:(id)arg1;
@property(nonatomic, getter=isDestinationPlaceholderHidden) BOOL destinationPlaceholderHidden;
- (void)setDestinationPlaceholderStyle:(int)arg1 airPlayDeviceName:(id)arg2;
@property(readonly, nonatomic) int destinationPlaceholderStyle;
- (void)setScaleMode:(unsigned int)arg1 duration:(double)arg2;
@property(retain, nonatomic) AVPlayer *player;
- (void)reattachVideoView;
@property(readonly, nonatomic) UIView *videoView;
- (void)_clearAirPlayView;
- (void)_clearVideoView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
