//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class NSString, UILabel, UIView;

@interface BrandProfileSectionHeaderView : UITableViewHeaderFooterView
{
    UIView *_bottomView;
    UILabel *_titleLabel;
    UIView *_dividingLine;
    NSString *_title;
}

+ (double)headerHeight;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end
