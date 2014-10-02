//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSString, TDThemeBitSource;

@interface TDAsset : NSManagedObject
{
    unsigned int _scaleFactor;
}

+ (int)subtypeFromImageFilename:(id)arg1;
+ (int)idiomFromImageFilename:(id)arg1;
+ (unsigned int)scaleFactorFromImageFilename:(id)arg1;
+ (id)_filenameRegex;
@property(readonly, nonatomic) NSString *baseName;
- (void)setHasProduction:(id)arg1;
- (BOOL)hasProduction;
- (id)fileURLWithDocument:(id)arg1;
- (id)sourceRelativePath;
- (id)_sourceRelativePathComponents;
- (unsigned int)scaleFactor;
- (void)setScaleFactor:(unsigned int)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *category; // @dynamic category;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TDThemeBitSource *source; // @dynamic source;

@end
