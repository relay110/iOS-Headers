/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKAnnotationMarkerLayer.h>

#import "VKAnchorDelegate-Protocol.h"
#import "VKTrackableAnnotationPresentation-Protocol.h"

@class NSString, VKAnchor, VKAnimation;

@interface VKAnnotationMarker : VKAnnotationMarkerLayer <VKAnchorDelegate, VKTrackableAnnotationPresentation>
{
    id <VKAnnotation> _annotation;
    NSString *_reuseIdentifier;
    struct VKPoint _projectedPoint;
    struct VKPoint _projectedGroundPoint;
    _Bool _selected;
    _Bool _canShowCallout;
    long long _dragState;
    _Bool _draggable;
    _Bool _tracking;
    _Bool _animatingToCoordinate;
    VKAnimation *_coordinateAnimation;
    _Bool _followsTerrain;
    CDStruct_2c43369c _presentationCoordinate;
    struct CGPoint _presentationPoint;
    _Bool _useScreenSpacePoint;
    float _dropFraction;
    VKAnchor *_anchor;
    CDStruct_cfeb8bef _styleTransitionState;
    id <VKAnnotationMarkerDelegate> _delegate;
    _Bool _hidden;
    struct CGPoint _calloutOffset;
}

+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingTitle;
+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) float dropFraction; // @synthesize dropFraction=_dropFraction;
@property(nonatomic) _Bool useScreenSpacePoint; // @synthesize useScreenSpacePoint=_useScreenSpacePoint;
@property(nonatomic) _Bool followsTerrain; // @synthesize followsTerrain=_followsTerrain;
@property(nonatomic) _Bool animatingToCoordinate; // @synthesize animatingToCoordinate=_animatingToCoordinate;
@property(nonatomic) id <VKAnnotationMarkerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_cfeb8bef styleTransitionState; // @synthesize styleTransitionState=_styleTransitionState;
@property(nonatomic) struct CGPoint calloutOffset; // @synthesize calloutOffset=_calloutOffset;
@property(nonatomic, getter=isDraggable) _Bool draggable; // @synthesize draggable=_draggable;
@property(nonatomic) long long dragState; // @synthesize dragState=_dragState;
@property(nonatomic) _Bool canShowCallout; // @synthesize canShowCallout=_canShowCallout;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) struct VKPoint projectedGroundPoint; // @synthesize projectedGroundPoint=_projectedGroundPoint;
@property(nonatomic) struct VKPoint projectedPoint; // @synthesize projectedPoint=_projectedPoint;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) id <VKAnnotation> annotation; // @synthesize annotation=_annotation;
- (id).cxx_construct;
- (_Bool)isPersistent;
- (id)subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)debugAnchorPointString;
- (struct CGPoint)screenPointToScrollRelativeToWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2;
- (struct CGPoint)calloutAnchorPointWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(_Bool)arg3;
- (struct VKPoint)pointInWorldWithContext:(id)arg1;
- (struct CGRect)significantFrameWithCanvasSize:(struct CGSize)arg1;
- (struct CGRect)frameWithCanvasSize:(struct CGSize)arg1;
- (struct CGPoint)pointToDropAtForPoint:(struct CGPoint)arg1;
- (double)animateInWithCanvasSize:(struct CGSize)arg1 delay:(double)arg2 completionHandler:(id)arg3;
@property(readonly, nonatomic) _Bool canAnimateIn;
- (void)animateFromCoordinate:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2;
- (void)setDragState:(long long)arg1 animated:(_Bool)arg2;
- (id)anchorWithContext:(id)arg1;
@property(nonatomic, getter=isTracking) _Bool tracking;
@property(nonatomic) struct CGPoint presentationPoint;
@property(nonatomic) CDStruct_c3b9c2ee presentationCoordinate;
- (void)anchorWorldPointDidChange:(void *)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)init;

@end

