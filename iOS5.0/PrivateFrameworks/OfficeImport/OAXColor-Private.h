/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OAXColor.h>

@interface OAXColor (Private)
+ (id)readScRgbColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSRgbColorFromXmlNode:(struct _xmlNode *)arg1 attribute:(const char *)arg2;
+ (id)readHslColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readPresetColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSystemColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSchemeColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)presetColorEnumMap;
+ (id)systemColorEnumMap;
+ (id)schemeColorEnumMap;
@end
