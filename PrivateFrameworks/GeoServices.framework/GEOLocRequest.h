/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlatformProfile, NSMutableArray;



@interface GEOLocRequest : PBRequest 
{
    GEOPlatformProfile *_platformProfile;
    NSMutableArray *_appProfiles;
    NSMutableArray *_requestElements;
}

@property(readonly) NSInteger appProfilesCount;
@property(readonly) NSInteger requestElementsCount;
@property(retain) NSMutableArray *requestElements;
@property(retain) NSMutableArray *appProfiles;
@property(retain) GEOPlatformProfile *platformProfile;


- (void)writeTo:(id)arg1;
- (void)setPlatformProfile:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (NSUInteger)requestTypeCode;
- (id)platformProfile;
- (Class)responseClass;
- (id)appProfiles;
- (NSInteger)appProfilesCount;
- (void)setAppProfile:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)appProfileAtIndex:(NSUInteger)arg1;
- (void)addAppProfile:(id)arg1;
- (NSInteger)requestElementsCount;
- (void)setRequestElement:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)requestElementAtIndex:(NSUInteger)arg1;
- (void)addRequestElement:(id)arg1;
- (id)requestElements;
- (void)setRequestElements:(id)arg1;
- (void)setAppProfiles:(id)arg1;

@end