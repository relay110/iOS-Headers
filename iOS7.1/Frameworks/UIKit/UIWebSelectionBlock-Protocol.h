//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOMDocument, DOMNode, DOMRange, WebFrame;

@protocol UIWebSelectionBlock <NSObject>
- (DOMDocument *)enclosingDocument;
- (DOMRange *)rangeOfContents;
- (BOOL)canShrinkDirectlyToTextOnly;
- (BOOL)containsRange:(DOMRange *)arg1;
- (DOMRange *)asDomRange;
- (DOMNode *)asDomNode;
- (BOOL)selectable;
- (BOOL)rendersAsBlock;
- (BOOL)strictlyContainsBlock:(id <UIWebSelectionBlock>)arg1;
- (BOOL)containsBlock:(id <UIWebSelectionBlock>)arg1;
- (BOOL)isSameBlock:(id <UIWebSelectionBlock>)arg1;
- (id <UIWebSelectionBlock>)largerParent;
- (id <UIWebSelectionBlock>)parentBlock;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
- (struct CGRect)boundingRect;
- (WebFrame *)webFrame;
@end
