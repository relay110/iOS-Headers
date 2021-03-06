//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ESDContainer, ESDObject, OABReaderState, OADGraphic, OADGroup, OADTableCell;

@protocol OABReaderClient
+ (BOOL)tablesAreAllowed;
+ (BOOL)escherIsFullySupported;
+ (void)readClientDataFromTableCell:(ESDObject *)arg1 toTableCell:(OADTableCell *)arg2 state:(OABReaderState *)arg3;
+ (void)readClientDataFromGroup:(ESDContainer *)arg1 toGroup:(OADGroup *)arg2 state:(OABReaderState *)arg3;
+ (void)readClientDataFromShape:(ESDObject *)arg1 toGraphic:(OADGraphic *)arg2 state:(OABReaderState *)arg3;
@end

