/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MSStorageProtocol-Protocol.h"

@protocol MSPublishStorageProtocol <MSStorageProtocol>
@property(nonatomic) id <MSPublishStorageProtocolDelegate> delegate;
- (void)abort;
- (void)computeHashForAsset:(id)arg1;
- (void)publishAssets:(id)arg1 URL:(id)arg2;
@end
