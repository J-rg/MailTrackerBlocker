//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPTask.h>

@class IMAPNetworkBlockOperation, IMAPTaskManager, NSString;

@interface IMAPNetworkBlockTask : IMAPTask
{
    IMAPNetworkBlockOperation *_operation;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    IMAPTaskManager *_taskManager;	// 24 = 0x18
    long long _taskPriority;	// 32 = 0x20
    NSString *_blockDescription;	// 40 = 0x28
}

@property(readonly, copy, nonatomic) NSString *blockDescription; // @synthesize blockDescription=_blockDescription;
@property(readonly, nonatomic) long long taskPriority; // @synthesize taskPriority=_taskPriority;
@property(readonly, nonatomic) IMAPTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) IMAPNetworkBlockOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;	// IMP=0x0000000000046b9b
- (void)operationFinished:(id)arg1;	// IMP=0x00000000000469bd
- (void)cancel;	// IMP=0x000000000004683a
- (void)recalculatePriorities;	// IMP=0x00000000000467df
- (id)nextPersistenceOperation;	// IMP=0x00000000000467d7
- (id)nextNetworkOperation;	// IMP=0x0000000000046629
- (id)mailboxNameWithoutPII;	// IMP=0x0000000000046562
- (id)initWithMailboxName:(id)arg1;	// IMP=0x0000000000046493
- (id)initWithMailboxName:(id)arg1 priority:(long long)arg2 taskManager:(id)arg3 description:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x000000000004625d

@end
