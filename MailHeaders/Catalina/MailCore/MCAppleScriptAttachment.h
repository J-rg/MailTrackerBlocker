//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCAttachment, NSScriptClassDescription, NSScriptObjectSpecifier, NSString;

@interface MCAppleScriptAttachment : NSObject
{
    NSString *_uuidString;	// 8 = 0x8
    MCAttachment *_attachment;	// 16 = 0x10
    NSScriptObjectSpecifier *_messageContainer;	// 24 = 0x18
    NSScriptClassDescription *_messageClassDescription;	// 32 = 0x20
}

@property(retain, nonatomic) NSScriptClassDescription *messageClassDescription; // @synthesize messageClassDescription=_messageClassDescription;
@property(retain, nonatomic) NSScriptObjectSpecifier *messageContainer; // @synthesize messageContainer=_messageContainer;
@property(retain, nonatomic) MCAttachment *attachment; // @synthesize attachment=_attachment;
// - (void).cxx_destruct;	// IMP=0x000000000003c6ca
- (id)objectSpecifier;	// IMP=0x000000000003c5bb
@property(readonly, copy, nonatomic) NSString *uniqueID;
- (id)handleSaveAttachmentCommand:(id)arg1;	// IMP=0x000000000003bf7a
- (BOOL)downloaded;	// IMP=0x000000000003bf35
- (id)fileSize;	// IMP=0x000000000003bec3
- (id)mimeType;	// IMP=0x000000000003be73
- (id)name;	// IMP=0x000000000003be23
- (id)init;	// IMP=0x000000000003bd54
- (id)initWithMessage:(id)arg1 attachment:(id)arg2;	// IMP=0x000000000003bc66

@end

