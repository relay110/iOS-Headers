/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface OISFUCryptoUtils : NSObject
{
}

+ (id)sha1HashFromStorage:(id)arg1;
+ (id)sha256HashFromString:(id)arg1;
+ (id)sha256HashFromStorage:(id)arg1;
+ (id)sha256HashFromData:(id)arg1;
+ (id)decodePassphraseHint:(id)arg1;
+ (id)encodePassphraseHint:(id)arg1;
+ (id)newBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(_Bool)arg3 zipStream:(id *)arg4;
+ (_Bool)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1;
+ (_Bool)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2;
+ (unsigned int)iterationCountFromPassphraseVerifier:(id)arg1;
+ (id)generatePassphraseVerifierForKey:(id)arg1;
+ (unsigned int)ivLengthForKey:(id)arg1;
+ (id)hashForPassphrase:(id)arg1 withSalt:(id)arg2;
+ (id)generateRandomSalt;
+ (_Bool)generateRandomDataInBuffer:(char *)arg1 length:(unsigned long long)arg2;

@end
