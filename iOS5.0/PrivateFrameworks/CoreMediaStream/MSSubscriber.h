/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreMediaStream/MSCupidStateMachine.h>

#import "MSReauthorizationProtocolDelegate-Protocol.h"
#import "MSSubscribeStorageProtocolDelegate-Protocol.h"
#import "MSSubscribeStreamsProtocolDelegate-Protocol.h"
#import <CoreMediaStream/MSSubscriber-Protocol.h>

@class MSMediaStreamDaemon, MSObjectQueue, MSReauthorizationProtocol, MSSubscribeStreamsProtocol, NSMutableArray, NSMutableDictionary;

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate>
{
    id <MSSubscriberDelegate> _delegate;
    MSMediaStreamDaemon *_daemon;
    BOOL _checkOneMoreTime;
    int _state;
    MSSubscribeStreamsProtocol *_protocol;
    NSMutableDictionary *_newSubscriptionsByStreamID;
    int _retrievalState;
    id <MSSubscribeStorageProtocol> _storageProtocol;
    MSReauthorizationProtocol *_reauthProtocol;
    MSObjectQueue *_retrievalQueue;
    NSMutableArray *_assetsBeingRetrieved;
    long long _targetRetrievalByteCount;
    int _retrievalBatchSize;
    int _maxErrorCount;
}

+ (BOOL)isInRetryState;
+ (void)stopAllActivities;
+ (id)personIDsWithOutstandingActivities;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (id)nextActivityDate;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (void)forgetPersonID:(id)arg1;
+ (id)_clearInstantiatedSubscribersByPersonID;
+ (id)existingSubscriberForPersonID:(id)arg1;
+ (id)subscriberForPersonID:(id)arg1;
@property(nonatomic) int retrievalBatchSize; // @synthesize retrievalBatchSize=_retrievalBatchSize;
@property(nonatomic) long long targetRetrievalByteCount; // @synthesize targetRetrievalByteCount=_targetRetrievalByteCount;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) id <MSSubscriberDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reauthorizationProtocol:(id)arg1 reauthorizedAssets:(id)arg2 rejectedAssets:(id)arg3 error:(id)arg4;
- (void)reauthorizationProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)arg1;
- (void)subscribeStorageProtocol:(id)arg1 didFinishRetrievingAsset:(id)arg2 error:(id)arg3;
- (void)_finishedRetrievingAsset:(id)arg1;
- (BOOL)_isInRetryState;
- (void)_forget;
- (void)abort;
- (void)_abort;
- (void)stop;
- (void)_stopOutSubscriberState:(int *)arg1 outRetrievalState:(int *)arg2;
- (void)_reauthorizeAssets;
- (void)_retrieveNextAssets;
- (void)_retrieveAssets;
- (void)checkForOutstandingActivities;
- (void)retrieveAssets:(id)arg1;
- (void)subscribeStreamsProtocol:(id)arg1 didFindShareState:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 difFindTemporarilyUnavailableSubscriptionForPersonID:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)_didReceiveAuthenticationError:(id)arg1;
- (void)subscribeStreamsProtocol:(id)arg1 didFinishError:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFindDisappearedSubscriptionForPersonID:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFinishReceivingUpdatesForPersonID:(id)arg2 ctag:(id)arg3;
- (void)subscribeStreamsProtocol:(id)arg1 didReceiveAssetCollections:(id)arg2 forPersonID:(id)arg3;
- (void)subscribeStreamsProtocol:(id)arg1 willReceiveUpdatesForPersonID:(id)arg2 wasReset:(BOOL)arg3 metadata:(id)arg4;
- (void)_didFinishRetrievingSubscriptionUpdate;
- (void)_checkForNewAssetCollections;
- (void)checkForNewAssetCollections;
- (BOOL)_isAllowedToDownload;
- (void)resetSync;
- (void)_setSubscriptionsByStreamID:(id)arg1;
- (id)_subscriptionsByStreamID;
- (void)_setHasOutstandingPoll:(BOOL)arg1;
- (BOOL)_hasOutstandingPoll;
- (void)_updateMasterManifest;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (void)_refreshServerSideConfigurationParameters;
- (void)dealloc;
- (void)deactivate;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)ownSubscribedStream;
- (id)subscribedStreams;

@end
