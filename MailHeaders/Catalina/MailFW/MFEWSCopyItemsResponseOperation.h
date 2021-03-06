//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFEWSResponseOperation.h>

@class EWSCopyItemResponseType, NSArray;

@interface MFEWSCopyItemsResponseOperation : MFEWSResponseOperation
{
    NSArray *_destinationEWSItemIdStrings;	// 8 = 0x8
    unsigned long long _expectedResponseCount;	// 16 = 0x10
}

@property(nonatomic) unsigned long long expectedResponseCount; // @synthesize expectedResponseCount=_expectedResponseCount;
@property(copy) NSArray *destinationEWSItemIdStrings; // @synthesize destinationEWSItemIdStrings=_destinationEWSItemIdStrings;
// - (void).cxx_destruct;	// IMP=0x000000000006edd8
- (void)executeOperation;	// IMP=0x000000000006e6c5
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;	// IMP=0x000000000006e45e
@property(retain) EWSCopyItemResponseType *response;

@end

