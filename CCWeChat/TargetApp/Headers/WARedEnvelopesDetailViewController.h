//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ContactUpdateHelper, MMTableView, NSString, UIView, WARedEnvelopesDetailViewModel;

@interface WARedEnvelopesDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *m_tableView;
    UIView *m_oHeaderView;
    WARedEnvelopesDetailViewModel *m_viewModel;
    UIView *oTopHeaderView;
    ContactUpdateHelper *_m_helperForSenderNickName;
    UIView *_m_pinImageView;
}

@property(retain, nonatomic) UIView *m_pinImageView; // @synthesize m_pinImageView=_m_pinImageView;
@property(retain, nonatomic) ContactUpdateHelper *m_helperForSenderNickName; // @synthesize m_helperForSenderNickName=_m_helperForSenderNickName;
- (void).cxx_destruct;
- (id)addBorderViewBottomAtView:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLeftBarButtonDone;
- (void)gotoBalanceDetail;
- (id)GetHeaderView:(id)arg1;
- (id)GetViewHeader:(id)arg1;
- (void)initTableView;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)setColorTitle:(id)arg1 TextColor:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
