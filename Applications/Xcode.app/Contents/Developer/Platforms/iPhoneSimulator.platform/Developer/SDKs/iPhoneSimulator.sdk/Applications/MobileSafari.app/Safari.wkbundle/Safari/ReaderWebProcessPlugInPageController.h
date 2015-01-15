//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebProcessPlugInPageController.h"

@class WKWebProcessPlugInScriptWorld;

@interface ReaderWebProcessPlugInPageController : WebProcessPlugInPageController
{
    struct unique_ptr<WebProcessPlugInReaderJSController, std::__1::default_delete<WebProcessPlugInReaderJSController>> _readerJSController;
    WKWebProcessPlugInScriptWorld *_isolatedWorldForNextPageDetection;
    WebProcessPlugInPageController *_originalPageController;
}

+ (id)readerPageControllerForContextHandle:(id)arg1;
@property(nonatomic) __weak WebProcessPlugInPageController *originalPageController; // @synthesize originalPageController=_originalPageController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (id)collectReaderContentFromPrintAndMailingFrame;
- (id)isolatedWorldForNextPageDetection;
- (void)setUsesNarrowLayout:(_Bool)arg1;
- (void)makeTextSmaller;
- (void)makeTextLarger;
- (void)loadNewArticle;
- (void)_initializeReaderJSControllerForFrame:(id)arg1;
- (struct OpaqueJSValue *)originalArticleFinder;
- (void)willDestroyBrowserContextController:(id)arg1;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;

@end
