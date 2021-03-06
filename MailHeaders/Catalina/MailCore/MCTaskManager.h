//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailCore/MCActivityDelegate-Protocol.h>
#import <MailCore/MCHandlerDelegate-Protocol.h>
#import <MailCore/MCTaskListDelegate-Protocol.h>

@class MCTaskList, NSArray, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;

@interface MCTaskManager : NSObject <MCTaskListDelegate, MCHandlerDelegate, MCActivityDelegate>
{
    NSMutableArray *_networkHandlers;	// 8 = 0x8
    NSMutableArray *_persistenceHandlers;	// 16 = 0x10
    NSMutableSet *_handlersCleaningUp;	// 24 = 0x18
    NSMutableSet *_activities;	// 32 = 0x20
    NSMutableSet *_bodyTrackers;	// 40 = 0x28
    NSMutableArray *_terminationBlocks;	// 48 = 0x30
    BOOL _hasActivity;	// 56 = 0x38
    BOOL _reassignTasksWillRun;	// 57 = 0x39
    NSOperationQueue *_serializationQueue;	// 64 = 0x40
    unsigned long long _maximumNetworkHandlers;	// 72 = 0x48
    unsigned long long _maximumPersistenceHandlers;	// 80 = 0x50
    MCTaskList *_taskList;	// 88 = 0x58
}

@property(readonly, nonatomic) MCTaskList *taskList; // @synthesize taskList=_taskList;
@property BOOL reassignTasksWillRun; // @synthesize reassignTasksWillRun=_reassignTasksWillRun;
@property BOOL hasActivity; // @synthesize hasActivity=_hasActivity;
@property unsigned long long maximumPersistenceHandlers; // @synthesize maximumPersistenceHandlers=_maximumPersistenceHandlers;
@property unsigned long long maximumNetworkHandlers; // @synthesize maximumNetworkHandlers=_maximumNetworkHandlers;
@property(readonly, nonatomic) NSOperationQueue *serializationQueue; // @synthesize serializationQueue=_serializationQueue;
// - (void).cxx_destruct;	// IMP=0x000000000009dbb0
@property(readonly, nonatomic) BOOL networkIsLimited;
- (void)bodyTracker:(id)arg1 didCacheBodiesForMessages:(id)arg2;	// IMP=0x000000000009d9cf
- (void)handlerDidCleanUp:(id)arg1;	// IMP=0x000000000009d772
- (void)handler:(id)arg1 didFinishOperation:(id)arg2;	// IMP=0x000000000009d760
- (void)resetNetworkHandlers;	// IMP=0x000000000009d5db
- (void)cleanUp;	// IMP=0x000000000009d349
- (void)terminate:(id)arg1;	// IMP=0x000000000009d11f
- (id)newBodyFetchContext;	// IMP=0x000000000009d117
- (void)goOffline;	// IMP=0x000000000009d083
- (void)activity:(id)arg1 didEncounterError:(id)arg2;	// IMP=0x000000000009d07d
- (void)activityDidFinish:(id)arg1;	// IMP=0x000000000009ce93
- (void)addActivity:(id)arg1;	// IMP=0x000000000009cc89
- (void)taskListDidChange:(id)arg1;	// IMP=0x000000000009cc77
- (void)assignIdleTasks;	// IMP=0x000000000009cc71
- (void)assignActiveTasks;	// IMP=0x000000000009c202
- (void)adjustHandlers;	// IMP=0x000000000009bc22
@property(readonly, copy, nonatomic) NSArray *orderedPersistenceHandlers;
@property(readonly, copy, nonatomic) NSArray *orderedNetworkHandlers;
- (void)_reassignTasks;	// IMP=0x000000000009ba43
- (void)tasksNeedAssignment;	// IMP=0x000000000009b8a1
- (void)removePersistenceHandler:(id)arg1;	// IMP=0x000000000009b77c
- (void)addPersistenceHandler:(id)arg1;	// IMP=0x000000000009b655
- (void)removeNetworkHandler:(id)arg1;	// IMP=0x000000000009b50a
- (void)failedToCreateNetworkHandler;	// IMP=0x000000000009b3fc
- (void)addNetworkHandler:(id)arg1;	// IMP=0x000000000009b2d5
@property(readonly, copy, nonatomic) NSArray *persistenceHandlers;
@property(readonly, copy, nonatomic) NSArray *networkHandlers;
@property(readonly, nonatomic) BOOL isInSerializationQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000009b0c6
@property(readonly, nonatomic) NSOperationQueue *utilityQueue;
- (void)dealloc;	// IMP=0x000000000009aed3
- (id)init;	// IMP=0x000000000009ad11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

