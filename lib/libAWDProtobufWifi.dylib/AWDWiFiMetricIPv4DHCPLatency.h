/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libAWDProtobufWifi.dylib
 */

@interface AWDWiFiMetricIPv4DHCPLatency : PBCodable  {
    unsigned long long _timestamp;
    unsigned int _dhcpLatencyMilliSecs;
    unsigned int _securityType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dhcpLatencyMilliSecs : 1; 
        unsigned int securityType : 1; 
    } _has;
}

@property BOOL hasDhcpLatencyMilliSecs;
@property unsigned int dhcpLatencyMilliSecs;
@property BOOL hasSecurityType;
@property unsigned int securityType;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;


- (void)setHasSecurityType:(BOOL)arg1;
- (void)setHasDhcpLatencyMilliSecs:(BOOL)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (unsigned int)securityType;
- (BOOL)hasSecurityType;
- (void)setDhcpLatencyMilliSecs:(unsigned int)arg1;
- (unsigned int)dhcpLatencyMilliSecs;
- (BOOL)hasDhcpLatencyMilliSecs;
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
