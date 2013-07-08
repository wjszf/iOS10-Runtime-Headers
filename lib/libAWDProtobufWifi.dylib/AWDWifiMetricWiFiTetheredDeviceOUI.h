/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libAWDProtobufWifi.dylib
 */

@class NSData;

@interface AWDWifiMetricWiFiTetheredDeviceOUI : PBCodable  {
    unsigned long long _timestamp;
    NSData *_tetheredOUI;
    struct { 
        unsigned int timestamp : 1; 
    } _has;
}

@property(readonly) BOOL hasTetheredOUI;
@property(retain) NSData * tetheredOUI;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;


- (id)tetheredOUI;
- (BOOL)hasTetheredOUI;
- (void)setTetheredOUI:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)copyTo:(id)arg1;
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
