/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libAWDProtobufWifi.dylib
 */

@interface AWDWifiPowerState : PBCodable  {
    unsigned long long _timestamp;
    BOOL _powerState;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int powerState : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasPowerState;
@property BOOL powerState;


- (void)setHasPowerState:(BOOL)arg1;
- (void)setPowerState:(BOOL)arg1;
- (BOOL)hasPowerState;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)copyTo:(id)arg1;
- (BOOL)powerState;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
