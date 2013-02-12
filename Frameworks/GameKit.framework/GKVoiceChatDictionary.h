/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableDictionary;

@interface GKVoiceChatDictionary : NSObject {
    NSMutableDictionary *actualDictionary;
    NSUInteger type;
}

+ (id)dictionaryFromData:(id)arg1;
+ (id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(NSInteger)arg4;
+ (BOOL)validateCancel:(id)arg1;
+ (BOOL)validateDictionary:(id)arg1;
+ (BOOL)validateInvite:(id)arg1;
+ (BOOL)validateReply:(id)arg1;

- (NSInteger)callID;
- (id)cancelDictionary;
- (id)connectionData;
- (id)createBlob;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fromParticipantID;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCancelDictionary;
- (BOOL)isInviteDictionary;
- (BOOL)isReplyDictionary;
- (BOOL)matchesNonce:(NSInteger)arg1;
- (BOOL)matchesResponse:(id)arg1;
- (NSInteger)nonce;
- (id)participantID;
- (id)replyDictionary:(NSUInteger)arg1 connectionData:(id)arg2 callID:(NSInteger)arg3;
- (NSUInteger)response;
- (void)setFromParticipantID:(id)arg1;
- (NSUInteger)type;
- (id)version;

@end