//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCTDatabase, WCTTable;

@interface WAAppTaskDB : NSObject
{
    NSString *_appID;
    WCTDatabase *_db;
    WCTTable *_tableLocalStorageMainInfo;
    WCTTable *_tableLocalStorageDataInfo;
}

@property(retain) WCTTable *tableLocalStorageDataInfo; // @synthesize tableLocalStorageDataInfo=_tableLocalStorageDataInfo;
@property(retain) WCTTable *tableLocalStorageMainInfo; // @synthesize tableLocalStorageMainInfo=_tableLocalStorageMainInfo;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)openTable;
- (void)clearLocalStorage;
- (_Bool)removeLocalStorageDataWithKey:(id)arg1;
- (_Bool)setLocalStorageData:(id)arg1 dataType:(id)arg2 withKey:(id)arg3 lastModifyTime:(unsigned int)arg4;
- (id)getLocalStorageAllKeys;
- (unsigned int)getLocalStorageKeyAndDataLengthWithKey:(id)arg1;
- (void)getLocalStorageData:(id *)arg1 dataType:(id *)arg2 withKey:(id)arg3;
- (_Bool)setLocalStorageMainStorageLength:(unsigned long long)arg1 lastModifyTime:(unsigned int)arg2;
- (unsigned long long)getLocalStorageMainStorageLength;
- (void)close;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)open;
- (void)dealloc;
- (id)initWithAppID:(id)arg1;

@end

