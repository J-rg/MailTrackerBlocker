//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSIndexSet;

@interface IMAPVanishedResponse : IMAPResponse
{
    BOOL _earlier;	// 8 = 0x8
    NSIndexSet *_uids;	// 16 = 0x10
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;	// IMP=0x000000000006a982
@property(copy, nonatomic) NSIndexSet *uids; // @synthesize uids=_uids;
@property(nonatomic) BOOL earlier; // @synthesize earlier=_earlier;
- (void).cxx_destruct;	// IMP=0x000000000006ab4e
- (id)description;	// IMP=0x000000000006a9ae

@end
