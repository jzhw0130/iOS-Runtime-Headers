/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSViewControllerFactory : NSObject

+ (id)sharedFactory;

- (id)autoAuthenticationViewController;
- (id)credentialEntryViewController;
- (id)identityProviderPickerViewControllerWithIdentityProviders:(id)arg1;
- (id)loadingViewController;
- (id)onscreenCodeAuthenticationViewController;
- (id)viewControllerForAboutPrivacyWithTarget:(id)arg1 action:(SEL)arg2;
- (id)viewControllerToConfirmAccountDeletionForIdentityProviderDisplayName:(id)arg1 preferredStyle:(int)arg2 confirmationHandler:(id /* block */)arg3;
- (id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(id /* block */)arg1;
- (id)viewControlllerForUnsupportedProvider:(id)arg1 withRequestingAppDisplayName:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)viewServiceRemoteViewControllerWithCompletion:(id /* block */)arg1;
- (id)webAuthenticationViewController;

@end