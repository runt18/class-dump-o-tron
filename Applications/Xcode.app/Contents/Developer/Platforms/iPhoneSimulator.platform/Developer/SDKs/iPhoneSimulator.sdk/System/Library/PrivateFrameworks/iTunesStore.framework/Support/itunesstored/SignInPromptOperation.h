//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class NSString, SSAuthenticationContext, SignInResponse;

@interface SignInPromptOperation : ISOperation
{
    long long _attemptNumber;
    SSAuthenticationContext *_authenticationContext;
    NSString *_reasonDescriptionFormat;
    SignInResponse *_response;
}

- (id)_userNameTextField;
- (_Bool)_shouldUseSpringBoardPluginDialog;
- (void)_setSignInResponseType:(long long)arg1;
- (void)_setSignInResponse:(id)arg1;
- (long long)_responseTypeByPromptingToCreateAccount:(id *)arg1;
- (id)_reasonDescriptionWithAccountName:(id)arg1;
- (id)_passwordTextField;
- (id)_newSignInDialog;
- (id)_newCreateAccountDialog;
- (void)_enterCreateAccountFlow;
- (id)_copyResponseUsingSpringBoardPluginDialog:(id *)arg1;
- (id)_copyResponseUsingSingleSignOn:(id *)arg1;
- (id)_copyResponseUsingITunesDialog:(id *)arg1;
- (id)_copyResponseUsingDialog:(id)arg1 displayOnLockscreen:(_Bool)arg2 error:(id *)arg3;
- (id)_copyResponseByPromptingForCredentials:(id *)arg1;
- (_Bool)_canUseSingleSignOn;
- (id)_activeUserName;
- (void)run;
@property(readonly) SignInResponse *signInResponse;
@property(copy) NSString *reasonDescriptionFormat;
@property long long attemptNumber;
@property(readonly) SSAuthenticationContext *authenticationContext;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;

@end

