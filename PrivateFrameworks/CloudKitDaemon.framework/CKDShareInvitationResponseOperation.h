/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKDShareInvitationResponseOperation : CKDOperation {
    NSMutableDictionary *_invitationsByInvitationID;
    NSArray *_invitationsToAccept;
    NSArray *_invitationsToDecline;
    id _shareInvitationResponseProgressBlock;
}

@property(retain) NSMutableDictionary * invitationsByInvitationID;
@property(retain) NSArray * invitationsToAccept;
@property(retain) NSArray * invitationsToDecline;
@property(copy) id shareInvitationResponseProgressBlock;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleInvitationRespondedTo:(id)arg1 invitationID:(id)arg2 responseCode:(id)arg3;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)invitationsByInvitationID;
- (id)invitationsToAccept;
- (id)invitationsToDecline;
- (void)main;
- (void)setInvitationsByInvitationID:(id)arg1;
- (void)setInvitationsToAccept:(id)arg1;
- (void)setInvitationsToDecline:(id)arg1;
- (void)setShareInvitationResponseProgressBlock:(id)arg1;
- (id)shareInvitationResponseProgressBlock;

@end