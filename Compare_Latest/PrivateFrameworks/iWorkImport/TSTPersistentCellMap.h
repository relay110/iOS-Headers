/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPContainedObject.h>

#import "TSTCellMap-Protocol.h"

// Not exported
@interface TSTPersistentCellMap : TSPContainedObject <TSTCellMap>
{
    CDStruct_0441cfb5 *mCellIDs;
    id *mCells;
    unsigned long long mCapacity;
    unsigned long long mCount;
    _Bool mMayModifyFormulasInCells;
    _Bool mMayModifyValuesReferencedByFormulas;
    _Bool mIgnoreHiddenCellsWhenApplying;
    _Bool mAppliesToHidden;
}

@property(nonatomic) _Bool appliesToHidden; // @synthesize appliesToHidden=mAppliesToHidden;
- (void)saveToArchive:(struct CellMapArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct CellMapArchive *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (void)popLastCell;
- (void)addCell:(id)arg1 andCellID:(CDStruct_0441cfb5)arg2;
- (_Bool)mayModifyValuesReferencedByFormulas;
- (_Bool)mayModifyFormulasInCells;
- (id)cellAtIndex:(unsigned long long)arg1;
- (CDStruct_0441cfb5)cellIDAtIndex:(unsigned long long)arg1;
- (_Bool)containsCellID:(CDStruct_0441cfb5)arg1;
- (CDStruct_0441cfb5 *)cellIDs;
- (unsigned long long)count;
- (void)setMayModifyValuesReferencedByFormulas:(_Bool)arg1;
- (void)setMayModifyFormulasInCells:(_Bool)arg1;
- (void)dealloc;
- (id)initWithOwner:(id)arg1 andCapacity:(unsigned long long)arg2;

@end
