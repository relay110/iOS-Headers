/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSAttributeDescription.h>

@interface NSAttributeDescription (_NSInternalMethods)
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (int)_canConvertPredicate:(id)arg1 andWarning:(id)arg2;
- (BOOL)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1;
- (BOOL)_comparePredicatesAndWarnings:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (BOOL)_nonPredicateValidateValue:(id *)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id *)arg4;
- (void)_versionHash:(char *)arg1;
- (id)_initWithName:(id)arg1 type:(unsigned int)arg2;
- (id)_initWithType:(unsigned int)arg1;
- (Class)_attributeValueClass;
- (unsigned int)_propertyType;
- (BOOL)storesBinaryDataExternally;
- (void)setStoresBinaryDataExternally:(BOOL)arg1;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(const id)arg6 fetchRequests:(id)arg7;
@end

