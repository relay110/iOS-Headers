/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PTPOperationResponsePacket : NSObject
{
    int _numParameters;
    unsigned short _responseCode;
    unsigned int _transactionID;
    unsigned int _parameters[5];
}

- (void)setParameter5:(unsigned int)arg1;
- (unsigned int)parameter5;
- (void)setParameter4:(unsigned int)arg1;
- (unsigned int)parameter4;
- (void)setParameter3:(unsigned int)arg1;
- (unsigned int)parameter3;
- (void)setParameter2:(unsigned int)arg1;
- (unsigned int)parameter2;
- (void)setParameter1:(unsigned int)arg1;
- (unsigned int)parameter1;
- (void)setPparameter:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)parameterAtIndex:(unsigned int)arg1;
- (int)numParameters;
- (void)setTransactionID:(unsigned int)arg1;
- (unsigned int)transactionID;
- (void)setResponseCode:(unsigned short)arg1;
- (unsigned short)responseCode;
- (id)description;
- (id)contentForUSBUsingBuffer:(void *)arg1 capacity:(unsigned int)arg2;
- (id)contentForUSB;
- (id)contentForTCP;
- (id)initWithUSBBuffer:(void *)arg1;
- (id)initWithTCPBuffer:(void *)arg1;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5 parameter4:(unsigned int)arg6 parameter5:(unsigned int)arg7;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5 parameter4:(unsigned int)arg6;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 numParameters:(unsigned int)arg3 parameters:(unsigned int *)arg4;

@end

