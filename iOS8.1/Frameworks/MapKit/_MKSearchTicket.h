//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/_MKTicket.h>

#import "MKMapServiceSearchTicket.h"

@class GEOMapRegion, GEOMapServiceTraits, NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface _MKSearchTicket : _MKTicket <MKMapServiceSearchTicket>
{
}

@property(readonly, nonatomic) NSString *searchQuery;
- (id)initWithSearchTicket:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) GEOMapRegion *boundingRegion;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSArray *exactMapItems;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSArray *refinedMapItems;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end
