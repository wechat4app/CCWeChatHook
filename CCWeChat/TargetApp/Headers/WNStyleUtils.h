//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WNStyleUtils : NSObject
{
}

+ (void)RemoveLinkAttrbute:(id)arg1;
+ (void)AddLinkAttribute:(id)arg1;
+ (void)AppendAttribute:(id)arg1 withString:(id)arg2;
+ (void)AddParagraphStyleAttribute:(id)arg1;
+ (_Bool)hasDefaultStyle:(id)arg1;
+ (void)formatTextParaStyle:(id)arg1;
+ (id)changeTextStyleToBold:(id)arg1 atRange:(struct _NSRange)arg2;
+ (id)changeTextStyleToUnBold:(id)arg1 atRange:(struct _NSRange)arg2;
+ (_Bool)isTextBoldStyle:(id)arg1;
+ (id)getFormattedText:(id)arg1;
+ (void)formatParaInfoStyle:(id)arg1;

@end
