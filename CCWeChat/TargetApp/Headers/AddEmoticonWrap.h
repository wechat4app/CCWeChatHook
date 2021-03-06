//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class EmoticonUploadInfoObj, NSDictionary, NSNumber, NSString;

@interface AddEmoticonWrap : MMObject
{
    NSString *_md5;
    long long _source;
    NSNumber *_fileType;
    NSString *_productId;
    NSDictionary *_extInfo;
    NSString *_thumbFileUrl;
    NSString *_thumbTempFilePath;
    NSString *_fromUser;
    long long _fileSize;
    EmoticonUploadInfoObj *_uploadInfoObj;
}

@property(retain, nonatomic) EmoticonUploadInfoObj *uploadInfoObj; // @synthesize uploadInfoObj=_uploadInfoObj;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fromUser; // @synthesize fromUser=_fromUser;
@property(retain, nonatomic) NSString *thumbTempFilePath; // @synthesize thumbTempFilePath=_thumbTempFilePath;
@property(retain, nonatomic) NSString *thumbFileUrl; // @synthesize thumbFileUrl=_thumbFileUrl;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSNumber *fileType; // @synthesize fileType=_fileType;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSelfieEmoticon;
- (id)initWithMessageWrap:(id)arg1 AndSource:(long long)arg2;

@end

