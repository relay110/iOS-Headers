//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSPComponentDelegate.h"
#import "TSPObjectModifyDelegate.h"

@class NSCache, NSHashTable, NSMapTable, NSObject<OS_dispatch_queue>, TSPComponent, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSPComponentManager : NSObject <TSPComponentDelegate, TSPObjectModifyDelegate>
{
    int _ignoreCachedObjectEvictionCount;
    NSObject<OS_dispatch_queue> *_componentQueue;
    NSHashTable *_components;
    NSMapTable *_componentDictionary;
    NSCache *_componentCache;
    TSPComponent *_viewStateComponent;
    NSObject<OS_dispatch_queue> *_readFlushedComponentQueue;
    TSPObjectContext *_context;
    TSPComponent *_packageMetadataComponent;
}

@property(readonly, nonatomic) TSPComponent *packageMetadataComponent; // @synthesize packageMetadataComponent=_packageMetadataComponent;
@property(readonly, nonatomic) TSPObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2;
- (void)removeComponentFromCacheWithIdentifier:(long long)arg1;
- (void)cacheComponent:(id)arg1;
- (id)objectForIdentifier:(long long)arg1;
- (void)evictAllCachedObjects;
- (BOOL)shouldKeepAllCachedObjectsInMemory;
- (void)endIgnoringCachedObjectEviction;
- (void)beginIgnoringCachedObjectEviction;
- (void)traverseComponentTreeFromRoot:(id)arg1 accessor:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL isSupportComponentTreeModified;
@property(readonly, nonatomic) BOOL isDocumentComponentTreeModified;
- (void)discardOrphanedComponents;
- (id)rootComponentForPackageIdentifier:(unsigned char)arg1;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)dirtyAllComponentsForDocumentUpgradeInPackage:(unsigned char)arg1;
- (void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2;
- (void)componentForRootObjectOfLazyReference:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)componentForRootObjectOfLazyReference:(id)arg1;
- (id)componentForRootObjectOfLazyReferenceImpl:(id)arg1;
- (id)componentForRootObjectIdentifier:(long long)arg1;
- (void)componentForRootObjectIdentifier:(long long)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retrieveOrCreateComponentForRootObject:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enumerateComponents:(CDUnknownBlockType)arg1;
@property(retain) TSPComponent *viewStateComponent;
@property(readonly, nonatomic) TSPComponent *supportObjectContainerComponent;
@property(readonly, nonatomic) TSPComponent *supportComponent;
@property(readonly, nonatomic) TSPComponent *documentObjectContainerComponent;
@property(readonly, nonatomic) TSPComponent *documentComponent;
- (id)supportComponentImpl;
- (id)documentComponentImpl;
- (id)rootComponentWithIdentifierImpl:(long long)arg1 locator:(id)arg2 packageIdentifier:(unsigned char)arg3;
- (void)loadFromPackageMetadata:(id)arg1 packageIdentifier:(unsigned char)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

@end
