/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libAWDProtobufWifi.dylib
 */

@class NSData, NSString;

@interface AWDWifiAssociation : PBCodable  {
    unsigned long long _timestamp;
    NSData *_bssidOui;
    int _channel;
    int _deauthReason;
    NSData *_deauthSourceOui;
    unsigned int _error;
    NSString *_security;
    int _signal;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int channel : 1; 
        unsigned int deauthReason : 1; 
        unsigned int error : 1; 
        unsigned int signal : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasError;
@property unsigned int error;
@property BOOL hasChannel;
@property int channel;
@property BOOL hasSignal;
@property int signal;
@property(readonly) BOOL hasBssidOui;
@property(retain) NSData * bssidOui;
@property(readonly) BOOL hasSecurity;
@property(retain) NSString * security;
@property BOOL hasDeauthReason;
@property int deauthReason;
@property(readonly) BOOL hasDeauthSourceOui;
@property(retain) NSData * deauthSourceOui;


- (void)setHasDeauthReason:(BOOL)arg1;
- (void)setHasSignal:(BOOL)arg1;
- (void)setHasChannel:(BOOL)arg1;
- (void)setHasError:(BOOL)arg1;
- (id)deauthSourceOui;
- (BOOL)hasDeauthSourceOui;
- (void)setDeauthReason:(int)arg1;
- (int)deauthReason;
- (BOOL)hasDeauthReason;
- (id)security;
- (BOOL)hasSecurity;
- (id)bssidOui;
- (BOOL)hasBssidOui;
- (void)setSignal:(int)arg1;
- (BOOL)hasSignal;
- (void)setChannel:(int)arg1;
- (int)channel;
- (BOOL)hasChannel;
- (void)setDeauthSourceOui:(id)arg1;
- (void)setSecurity:(id)arg1;
- (void)setBssidOui:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasError;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (void)setError:(unsigned int)arg1;
- (unsigned int)error;
- (id)dictionaryRepresentation;
- (int)signal;

@end
