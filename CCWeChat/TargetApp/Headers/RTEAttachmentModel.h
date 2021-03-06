//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString, RTEAttachmentImageInfo, RTEAttachmentMusicInfo, RTEAttachmentVideoInfo, RTEAttachmentVoiceInfo;

@interface RTEAttachmentModel : NSObject
{
    unsigned int _type;
    NSAttributedString *_attrText;
    NSString *_localDataID;
    RTEAttachmentImageInfo *_imageInfo;
    RTEAttachmentVoiceInfo *_voiceInfo;
    RTEAttachmentVideoInfo *_videoInfo;
    RTEAttachmentMusicInfo *_musicInfo;
}

+ (id)attachmentModelOfAttachmentAttributesString:(id)arg1;
+ (id)newTextInfoWithAttrString:(id)arg1;
@property(retain, nonatomic) RTEAttachmentMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) RTEAttachmentVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) RTEAttachmentVoiceInfo *voiceInfo; // @synthesize voiceInfo=_voiceInfo;
@property(retain, nonatomic) RTEAttachmentImageInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(retain, nonatomic) NSString *localDataID; // @synthesize localDataID=_localDataID;
@property(retain, nonatomic) NSAttributedString *attrText; // @synthesize attrText=_attrText;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)onUpdateAttachmentModelURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end

