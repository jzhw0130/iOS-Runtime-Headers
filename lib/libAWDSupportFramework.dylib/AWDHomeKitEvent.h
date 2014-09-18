/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDHomeKitEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventType : 1; 
    unsigned int _eventType;
    NSString *_guid;
    } _has;
    unsigned long long _timestamp;
}

@property unsigned int eventType;
@property(retain) NSString * guid;
@property bool hasEventType;
@property(readonly) bool hasGuid;
@property bool hasTimestamp;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventType;
- (id)guid;
- (bool)hasEventType;
- (bool)hasGuid;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end