//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFUIMailbox-Protocol.h"

@class NSArray, NSImage, NSString;

@interface _MailboxPlaceholder : NSObject <MFUIMailbox>
{
    BOOL _isContainer;	// 8 = 0x8
    int _mailboxType;	// 12 = 0xc
    NSString *_persistentUIIdentifier;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSString *_accountURLString;	// 32 = 0x20
}

@property(nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
@property(copy, nonatomic) NSString *accountURLString; // @synthesize accountURLString=_accountURLString;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *persistentUIIdentifier; // @synthesize persistentUIIdentifier=_persistentUIIdentifier;
@property int mailboxType; // @synthesize mailboxType=_mailboxType;
// - (void).cxx_destruct;	// IMP=0x000000010015880e
@property(readonly, nonatomic) NSImage *accountIcon;
@property(readonly, copy, nonatomic) NSString *extendedDisplayName;
@property(readonly) unsigned long long displayCount;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL isPlaceholder;
@property(readonly) BOOL isVisibleFlaggedMailbox;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;	// IMP=0x0000000100158698
@property(readonly, copy) NSArray *children;
@property(readonly) unsigned long long numberOfChildren;
@property(readonly) BOOL hasChildren;
@property(readonly, nonatomic) BOOL isAccountActive;
@property(readonly, nonatomic) BOOL isLocal;
@property(readonly, nonatomic) BOOL isStore;
@property(readonly, nonatomic) BOOL isSpotlightMailbox;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100158655
- (id)init;	// IMP=0x0000000100158586
- (id)initWithPersistentID:(id)arg1 name:(id)arg2 accountURLString:(id)arg3 type:(int)arg4 isContainer:(BOOL)arg5;	// IMP=0x0000000100158490

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

