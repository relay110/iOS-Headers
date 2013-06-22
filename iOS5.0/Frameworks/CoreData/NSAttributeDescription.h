/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSPropertyDescription.h>

@class NSString;

@interface NSAttributeDescription : NSPropertyDescription
{
    Class _attributeValueClass;
    NSString *_valueTransformerName;
    unsigned int _type;
    NSString *_attributeValueClassName;
    struct __attributeDescriptionFlags {
        unsigned int _hasMaxValueInExtraIvars:1;
        unsigned int _hasMinValueInExtraIvars:1;
        unsigned int _storeBinaryDataExternally:1;
        unsigned int _reservedAttributeDescription:29;
    } _attributeDescriptionFlags;
    id _defaultValue;
}

+ (void)initialize;
+ (id)_classNameForType:(unsigned int)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)attributeValueClassName;
- (void)setAttributeValueClassName:(id)arg1;
- (unsigned int)attributeType;
- (void)setAttributeType:(unsigned int)arg1;
- (id)defaultValue;
- (void)setDefaultValue:(id)arg1;
- (BOOL)isIndexed;
- (id)valueTransformerName;
- (void)setValueTransformerName:(id)arg1;
- (id)versionHash;
- (id)validationPredicates;
- (id)validationWarnings;
- (BOOL)allowsExternalBinaryDataStorage;
- (void)setAllowsExternalBinaryDataStorage:(BOOL)arg1;

@end
