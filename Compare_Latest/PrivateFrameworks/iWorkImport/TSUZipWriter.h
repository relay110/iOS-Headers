//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_data>, NSObject<OS_dispatch_queue>, TSUZipWriterEntry;

__attribute__((visibility("hidden")))
@interface TSUZipWriter : NSObject
{
    unsigned int _options;
    NSMutableArray *_entries;
    NSMutableDictionary *_entriesMap;
    TSUZipWriterEntry *_currentEntry;
    BOOL _calculateSize;
    BOOL _force32BitSize;
    BOOL _calculateCRC;
    unsigned short _entryTime;
    unsigned short _entryDate;
    long long _currentOffset;
    NSObject<OS_dispatch_data> *_localFileHeaderData;
    NSMutableArray *_entryDatas;
    unsigned long _entryDataSize;
    NSObject<OS_dispatch_queue> *_writeQueue;
    long long _writtenOffset;
    NSError *_error;
    BOOL _isClosed;
}

- (void).cxx_destruct;
- (unsigned long long)encodedLengthForEntryWithName:(id)arg1;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)initEntryTime;
- (void)handleWriteError:(id)arg1;
@property(readonly, nonatomic) unsigned long long archiveLength;
@property(readonly, nonatomic) id <TSURandomWriteChannel> writeChannel;
- (void)writeData:(id)arg1 offset:(long long)arg2;
- (void)writeData:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)writeData:(id)arg1;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned int)arg3;
- (void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned int)arg3;
- (void)writeCentralFileHeaderDataForEntry:(id)arg1;
- (id)localFileHeaderDataForEntry:(id)arg1;
- (void)writeCentralDirectory;
- (void)closeWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 fromReadChannel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4 fromReadChannel:(id)arg5 writeHandler:(CDUnknownBlockType)arg6;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4 fromReadChannel:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)finishEntry;
- (void)flushEntryData;
- (void)addDataImpl:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addData:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addData:(id)arg1;
- (void)beginEntryWithNameImpl:(id)arg1 force32BitSize:(BOOL)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4;
- (void)beginEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4;
- (void)beginEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2;
- (id)initWithOptions:(unsigned int)arg1;
- (id)init;

@end

