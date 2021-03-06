//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPAVRoutingControllerDelegate.h"

@class MPAVRoutingController;

@interface RCAudioRouteController : NSObject <MPAVRoutingControllerDelegate>
{
    BOOL _reportUserDefaultForRouteSetting;
    BOOL _defaultSettingsApplied;
    MPAVRoutingController *_routingController;
    int _lastPickedRCRoute;
    BOOL _voiceMemoSettingsEnabled;
    BOOL _expectsFaceContactWhenHandsetSelected;
    unsigned int _availableRoutesMask;
}

+ (id)sharedRouteController;
@property(nonatomic) BOOL expectsFaceContactWhenHandsetSelected; // @synthesize expectsFaceContactWhenHandsetSelected=_expectsFaceContactWhenHandsetSelected;
@property(nonatomic) BOOL voiceMemoSettingsEnabled; // @synthesize voiceMemoSettingsEnabled=_voiceMemoSettingsEnabled;
- (void).cxx_destruct;
- (void)_pickAudioDeviceRouteType:(int)arg1;
- (void)_pickSpeakerAudioDeviceRoute;
- (void)_pickHandsetAudioDeviceRoute;
- (void)_setShouldRouteToSpeakerUserDefaultValue:(BOOL)arg1;
- (BOOL)_routeDefaultBoolForKey:(id)arg1 nonVoiceMemoAppValue:(BOOL)arg2;
- (void)_updateProximitySetting;
- (void)_updateSpeakerRouteDefault;
- (void)_applyUserDefaultAudioRoute;
- (BOOL)_speakerIsUserDefaultRoute;
- (unsigned int)_updatedCachedRouteMask;
- (unsigned int)_availableRoutesMask;
- (unsigned int)_RCAudioRouteMaskForPickedAVAudioSessionOutputType;
- (BOOL)_AVAudioSessionWirelessRouteIsPickedOutputType;
- (BOOL)_AVAudioSessionHandsetRouteIsPickedOutputType;
- (BOOL)_AVAudioSessionReceiverRouteIsPickedOutputType;
- (BOOL)_AVAudioSessionSpeakerRouteIsPickedOutputType;
- (int)_voiceMemosRouteTypeForRoute:(id)arg1;
- (void)_initializeRouteControllers;
- (void)_initializePreviewControllerOutputRouteCategoryIfNecessaryWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_AVAudioSessionRouteChangeNotification:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)applyVoiceMemoSettings;
@property(readonly, nonatomic) unsigned int availableRoutesMask; // @synthesize availableRoutesMask=_availableRoutesMask;
@property(readonly, nonatomic) BOOL wirelessRouteIsPicked;
@property(readonly, nonatomic) BOOL speakerRouteIsPicked;
- (void)toggleSpeaker;
- (void)showAvailableRoutes;
- (void)dealloc;
- (id)init;

@end

