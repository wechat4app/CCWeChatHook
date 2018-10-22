//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IContactMgrExt.h"
#import "PBMessageObserverDelegate.h"

@class MMTimer;

@interface WebViewJSEventHandler_quicklyAddContact : WebviewJSEventHandlerBase <PBMessageObserverDelegate, IContactMgrExt>
{
    _Bool _isWaitContactSync;
    MMTimer *_timerContactSync;
}

- (void).cxx_destruct;
- (void)onModifyContact:(id)arg1;
- (void)callbackAddContactOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onTimeoutContactSync:(id)arg1;
- (void)invalidateContactSyncTimer;
- (void)scheduleContactSyncTimer;
- (void)CreateVerify:(id)arg1 andScene:(unsigned int)arg2 reportInfo:(id)arg3;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

@end
