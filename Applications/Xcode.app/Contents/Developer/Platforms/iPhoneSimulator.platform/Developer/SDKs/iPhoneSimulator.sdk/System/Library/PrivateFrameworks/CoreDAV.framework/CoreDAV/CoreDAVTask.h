//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreDAVSubmittable.h"

@class CoreDAVErrorItem, CoreDAVRequestLogger, NSData, NSDate, NSDictionary, NSError, NSHTTPURLResponse, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSURLConnection, NSURLRequest;

@interface CoreDAVTask : NSObject <CoreDAVSubmittable>
{
    id <CoreDAVTaskManager> _taskManager;
    id <CoreDAVAccountInfoProvider> _accountInfoProvider;
    long long _numDownloadedElements;
    int _depth;
    NSHTTPURLResponse *_response;
    NSURLConnection *_connection;
    NSURLRequest *_request;
    double _timeoutInterval;
    long long _responseStatusCode;
    NSDate *_dateConnectionWentOut;
    _Bool _didSendRequest;
    _Bool _didFailWithError;
    _Bool _didCancel;
    _Bool _didReceiveResponse;
    _Bool _didReceiveData;
    _Bool _didFinishLoading;
    _Bool _finished;
    id _context;
    _Bool _receivedBadPasswordResponse;
    _Bool _justTriedTokenAuth;
    _Bool _everTriedTokenAuth;
    _Bool _shouldRetryWithClientToken;
    _Bool _didRetryWithClientToken;
    _Bool _requestIsCompressed;
    _Bool _compressedRequestFailed;
    NSError *_passwordNotificationError;
    id <CoreDAVResponseBodyParser> _responseBodyParser;
    CoreDAVRequestLogger *_logger;
    NSURL *_url;
    _Bool _allowAutomaticRedirects;
    id <CoreDAVTaskDelegate> _delegate;
    CDUnknownBlockType _requestProgressBlock;
    CDUnknownBlockType _responseProgressBlock;
    CDUnknownBlockType _completionBlock;
    NSError *_error;
    unsigned long long _totalBytesReceived;
    NSMutableDictionary *_overriddenHeaders;
    NSMutableArray *_redirectHistory;
    NSDictionary *_requestProperties;
    NSData *_fakeResponseData;
    _Bool _haveParsedFakeResponseData;
    CoreDAVErrorItem *_forbiddenErrorItem;
    NSString *_uniqueID;
}

+ (id)stringFromDepth:(int)arg1;
+ (unsigned int)uniqueQueryID;
@property(retain, nonatomic) NSDictionary *requestProperties; // @synthesize requestProperties=_requestProperties;
@property(nonatomic) _Bool allowAutomaticRedirects; // @synthesize allowAutomaticRedirects=_allowAutomaticRedirects;
@property(nonatomic) unsigned long long totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType responseProgressBlock; // @synthesize responseProgressBlock=_responseProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType requestProgressBlock; // @synthesize requestProgressBlock=_requestProgressBlock;
@property(nonatomic) long long responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(retain, nonatomic) id <CoreDAVResponseBodyParser> responseBodyParser; // @synthesize responseBodyParser=_responseBodyParser;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) int depth; // @synthesize depth=_depth;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) id <CoreDAVTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <CoreDAVAccountInfoProvider> accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
@property(nonatomic) id <CoreDAVTaskManager> taskManager; // @synthesize taskManager=_taskManager;
- (id)_requestForLogging;
- (id)_connectionForLogging;
- (void)reportStatusWithError:(id)arg1;
- (long long)numDownloadedElements;
- (void)reset;
- (void)submitWithTaskManager:(id)arg1;
- (void)finishEarlyWithError:(id)arg1;
- (void)startModal;
@property(readonly, nonatomic) NSDictionary *responseHeaders;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)handleWebLoginRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)lastRedirectURL;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (_Bool)_shouldHandleStatusCode:(long long)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)_handleBadPasswordResponse;
- (id)_applyStorageSession:(struct __CFURLStorageSession *)arg1 toRequest:(id)arg2;
- (id)_applyAuthenticationChain:(struct __CFArray *)arg1 toRequest:(id)arg2;
- (id)credentialForOAuthChallenge:(id)arg1;
- (_Bool)markAsFinished;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)_sendTimeSpentInNetworkingToProvider;
- (_Bool)validate:(id *)arg1;
- (void)performCoreDAVTask;
- (unsigned long long)cachePolicy;
- (void)overrideRequestHeader:(id)arg1 withValue:(id)arg2;
- (id)additionalHeaderValues;
- (void)_failImmediately;
- (id)_createBodyData;
- (id)_compressBodyData:(id)arg1;
- (void)tearDownResources;
- (void)loadRequest:(id)arg1;
- (_Bool)shouldLogResponseBody;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)requestBodyStream;
- (_Bool)_includeGeneralHeaders;
- (id)httpMethod;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
