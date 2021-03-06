//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol IMAPMailboxDelegate, MCMailbox;

@interface IMAPMailbox : NSObject
{
    id <IMAPMailboxDelegate> _delegate;	// 8 = 0x8
    unsigned int _uidValidity;	// 16 = 0x10
    unsigned long long _exists;	// 24 = 0x18
    unsigned int _permanentFlags;	// 32 = 0x20
    BOOL _hasNewResponses;	// 36 = 0x24
    unsigned long long _allegedHighestModificationSequence;	// 40 = 0x28
    unsigned long long _computedHighestModificationSequence;	// 48 = 0x30
    BOOL _allegedHighestModificationSequenceHasBeenInitialized;	// 56 = 0x38
    BOOL _computedHighestModificationSequenceHasBeenInitialized;	// 57 = 0x39
    BOOL _readOnly;	// 58 = 0x3a
    BOOL _uidNotSticky;	// 59 = 0x3b
    BOOL _supportsModificationSequences;	// 60 = 0x3c
    unsigned int _uidNext;	// 64 = 0x40
    unsigned int _unseenCount;	// 68 = 0x44
    id <MCMailbox> _mailbox;	// 72 = 0x48
    NSString *_referenceName;	// 80 = 0x50
    NSArray *_quotaRoots;	// 88 = 0x58
    NSMutableArray *_unprocessedResponses;	// 96 = 0x60
    CDStruct_d3e19d9e _quotaUsage;	// 104 = 0x68
}

+ (BOOL)automaticallyNotifiesObserversOfQuotaUsage;	// IMP=0x000000000003567a
+ (BOOL)automaticallyNotifiesObserversOfAllegedHighestModificationSequence;	// IMP=0x0000000000001ea5
+ (BOOL)automaticallyNotifiesObserversOfExists;	// IMP=0x0000000000035672
@property(retain, nonatomic) NSMutableArray *unprocessedResponses; // @synthesize unprocessedResponses=_unprocessedResponses;
@property BOOL supportsModificationSequences; // @synthesize supportsModificationSequences=_supportsModificationSequences;
@property unsigned int unseenCount; // @synthesize unseenCount=_unseenCount;
@property unsigned int uidNext; // @synthesize uidNext=_uidNext;
@property CDStruct_d3e19d9e quotaUsage; // @synthesize quotaUsage=_quotaUsage;
@property(retain) NSArray *quotaRoots; // @synthesize quotaRoots=_quotaRoots;
@property BOOL uidNotSticky; // @synthesize uidNotSticky=_uidNotSticky;
@property BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(copy) NSString *referenceName; // @synthesize referenceName=_referenceName;
@property(retain) id <MCMailbox> mailbox; // @synthesize mailbox=_mailbox;
- (void).cxx_destruct;	// IMP=0x000000000003595b
- (id)description;	// IMP=0x000000000003581e
- (void)updateWithStatusEntries:(id)arg1;	// IMP=0x0000000000035682
@property(nonatomic) unsigned int permanentFlags;
- (void)setTotalSize:(unsigned long long)arg1 forQuotaMessageCount:(long long)arg2;	// IMP=0x000000000000f82a
@property unsigned long long computedHighestModificationSequence;
@property unsigned long long allegedHighestModificationSequence;
@property unsigned int uidValidity;
@property unsigned long long exists;
- (void)setExists:(unsigned long long)arg1 fromIDLE:(BOOL)arg2;	// IMP=0x000000000000b0b9
- (void)clearDelegate:(id)arg1;	// IMP=0x000000000000d6bb
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000001ead
- (id)init;	// IMP=0x000000000003565e
- (id)initWithMailboxName:(id)arg1;	// IMP=0x0000000000001d8b

@end

