//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IFavCdnDownloadMgrExt.h"

@class FavoritesDownloadCDNInfo, FavoritesItem, NSString;

@interface FavoritesDownloader : MMObject <IFavCdnDownloadMgrExt>
{
    FavoritesItem *_favItem;
    id <FavoritesDownloaderDelegate> _delegate;
    int _runningState;
    FavoritesDownloadCDNInfo *_downloadingInfo;
    _Bool _isCanceled;
}

@property(nonatomic) __weak id <FavoritesDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnFavCdnDownload:(id)arg1;
- (void)OnFavCdnDownloadProgress:(id)arg1;
- (void)OnFavCdnDownloadStartError:(id)arg1;
- (void)BroadcastDownloadFail:(int)arg1;
- (void)modifyDownloadingMediaInfo:(id)arg1 withDataList:(id)arg2;
- (void)tryStartNextData;
- (id)getItem;
- (_Bool)stop;
- (void)run;
- (void)dealloc;
- (id)initWithFavoritesItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

