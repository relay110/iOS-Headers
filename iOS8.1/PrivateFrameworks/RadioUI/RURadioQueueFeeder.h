//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPQueueFeeder.h"

@class NSArray, NSMapTable, NSMutableSet, RURadioAdObserver, RadioStation, RadioStationSkipController;

@interface RURadioQueueFeeder : MPQueueFeeder
{
    RURadioAdObserver *_adObserver;
    NSMapTable *_adSlotToAllAdTracks;
    NSMapTable *_adSlotToInsertedAdTracks;
    NSMapTable *_adSlotToRadioTrack;
    BOOL _didReceiveTracklistEnd;
    NSMapTable *_fetchingTracksCompletionHandlersByStation;
    BOOL _hasReceivedStreamTrack;
    int _maximumGetTracksRetryCount;
    int _playbackMode;
    NSArray *_previousDatabaseTrackPlaybackDescriptorQueue;
    NSMapTable *_radioTrackToAdSlot;
    RadioStation *_station;
    RadioStationSkipController *_stationSkipController;
    NSMapTable *_stationTracklistRetrievalRetryCount;
    NSArray *_tracks;
    NSMutableSet *_visibleAdSlots;
    BOOL _wasUsingBackgroundNetwork;
}

+ (void)_updateIsExplicitContentRestrictedAndPostNotification:(BOOL)arg1 removeTracks:(BOOL)arg2;
+ (id)_tracksWithPromotionalContentFromTracks:(id)arg1;
+ (id)_tracksByRemovingPromotionalContentFromTracks:(id)arg1;
+ (int)maximumNumberOfTracksToFetch;
+ (void)setUserDefaultExplicitTracksEnabled:(BOOL)arg1;
+ (BOOL)isUserDefaultExplicitTracksEnabled;
+ (BOOL)isProfileExplicitContentRestricted;
+ (BOOL)isExplicitTracksEnabled;
+ (void)_explicitContentAllowedDidChangeNotification:(id)arg1;
@property(copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
- (void).cxx_destruct;
- (void)_updateWithTracks:(id)arg1 tracklistActionType:(int)arg2 options:(int)arg3;
- (void)_updateTracksForChangedTrackPlaybackDescriptorQueue;
- (void)_updateTracksForAdSlot:(id)arg1 radioTrack:(id)arg2;
- (void)_updateForLoadedStoreBag:(id)arg1;
- (id)_tracksByRemovingPlayedTracks:(id)arg1;
- (id)_trackAtIndex:(unsigned int)arg1;
- (void)_setAdSlot:(id)arg1 forRadioTrack:(id)arg2;
- (BOOL)_reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 startPlayback:(BOOL)arg3;
- (int)_playbackModeForTrack:(id)arg1;
- (void)_performGetTracksOperationForStation:(id)arg1 withNumberOfTracks:(int)arg2;
- (unsigned int)_indexOfItem:(id)arg1 inTracks:(id)arg2;
- (unsigned int)_indexOfItem:(id)arg1;
- (unsigned int)_indexOfCurrentItem;
- (BOOL)_hasReceivedStreamTrack;
- (void)_fetchNextTrackAdSlotIfNeeded;
- (void)_fetchAdSlotIfNeededForRadioTrack:(id)arg1 inStation:(id)arg2;
- (void)_fetchAdditionalTracksWithBaseIndex:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_endPlaybackIfNecessaryForNetworkType;
- (id)_currentTrackPlaybackDescriptorQueueWithCurrentItem:(id)arg1 shouldIncludePlaybackInformation:(BOOL)arg2 skipDate:(id)arg3;
- (BOOL)_canHavePlaceholderTrack;
- (void)_applyTracksForAdSlot:(id)arg1 radioTrack:(id)arg2 currentPlayingItem:(id)arg3 toTracks:(id)arg4;
- (id)_adSlotForAdTrack:(id)arg1;
@property(readonly, nonatomic) NSArray *tracksForNextPlaybackGroup;
@property(retain, nonatomic) RadioStation *station;
- (id)preparedAdSlotForRadioTrack:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allPreparedAdSlotRadioTracks;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_playerContentsDidChangeNotification:(id)arg1;
- (void)_numberOfAvailableSkipsDidChangeNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_itemIsBannedDidChangedNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_cellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)_adTrackDidFailToLoadNotification:(id)arg1;
- (void)_adTrackActionWillBeginNotification:(id)arg1;
- (void)_adTrackActionDidFinishNotification:(id)arg1;
- (void)_adSlotAdTracksDidChangeNotification:(id)arg1;
- (BOOL)isRadioQueueFeeder;
- (unsigned int)initialPlaybackQueueDepthForStartingIndex:(unsigned int)arg1;
- (CDStruct_a00ebdb8)skipLimit;
- (void)setAVController:(id)arg1;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (unsigned int)realRepeatType;
- (BOOL)playerPreparesItemsForPlaybackAsynchronously;
- (int)playbackMode;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (Class)itemClass;
- (BOOL)hasValidItemAtIndex:(unsigned int)arg1;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (BOOL)canSkipToPreviousItem;
- (BOOL)canSkipItem:(id)arg1;
- (BOOL)canSeek;
- (void)dealloc;
- (id)init;

@end
