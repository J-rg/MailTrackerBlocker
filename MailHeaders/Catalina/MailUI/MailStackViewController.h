//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "StackDataSource-Protocol.h"
#import "StackDelegate-Protocol.h"

@class CALayer, NSArray, NSImage, NSMutableDictionary, NSMutableSet, NSString, NSView, StackContainerView, StackController;

@interface MailStackViewController : NSObject <StackDataSource, StackDelegate>
{
    NSMutableDictionary *_messageViewControllers;	// 8 = 0x8
    NSMutableDictionary *_messageLayers;	// 16 = 0x10
    NSMutableSet *_snapshotWindows;	// 24 = 0x18
    BOOL _initialLoadCompleted;	// 32 = 0x20
    BOOL _performingAsynchronousAnimation;	// 33 = 0x21
    NSArray *_messagesOrConversations;	// 40 = 0x28
    NSImage *_topLayerSnapshot;	// 48 = 0x30
    NSView *_containerView;	// 56 = 0x38
    StackContainerView *_stackContainerView;	// 64 = 0x40
    CALayer *_stackContainerLayer;	// 72 = 0x48
    StackController *_stackController;	// 80 = 0x50
}

@property(retain, nonatomic) StackController *stackController; // @synthesize stackController=_stackController;
@property(retain, nonatomic) CALayer *stackContainerLayer; // @synthesize stackContainerLayer=_stackContainerLayer;
@property(retain, nonatomic) StackContainerView *stackContainerView; // @synthesize stackContainerView=_stackContainerView;
@property(readonly, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSImage *topLayerSnapshot; // @synthesize topLayerSnapshot=_topLayerSnapshot;
@property(nonatomic) BOOL performingAsynchronousAnimation; // @synthesize performingAsynchronousAnimation=_performingAsynchronousAnimation;
@property(retain, nonatomic) NSArray *messagesOrConversations; // @synthesize messagesOrConversations=_messagesOrConversations;
@property(nonatomic) BOOL initialLoadCompleted; // @synthesize initialLoadCompleted=_initialLoadCompleted;
// - (void).cxx_destruct;	// IMP=0x00000001001cb777
- (void)stackController:(id)arg1 willRemoveLayerForItem:(id)arg2;	// IMP=0x00000001001cb6ab
- (void)stackController:(id)arg1 willDisplayLayer:(id)arg2 forItem:(id)arg3;	// IMP=0x00000001001cb6a5
- (void)stackController:(id)arg1 willStackLayer:(id)arg2 forItem:(id)arg3;	// IMP=0x00000001001cb69f
- (void)stackControllerDidStopStackingLayers:(id)arg1;	// IMP=0x00000001001cb481
- (void)stackControllerWillStartStackingLayers:(id)arg1;	// IMP=0x00000001001cb47b
- (void)stackController:(id)arg1 loadDataForItem:(id)arg2 inLayer:(id)arg3;	// IMP=0x00000001001cb475
- (BOOL)stackController:(id)arg1 isDataLoadedForItem:(id)arg2 inLayer:(id)arg3;	// IMP=0x00000001001cb46a
- (id)stackController:(id)arg1 layerForItem:(id)arg2;	// IMP=0x00000001001cb237
- (id)stackContainerLayerForStackController:(id)arg1;	// IMP=0x00000001001cb225
- (id)_messageOrConversationListFromSelection:(id)arg1;	// IMP=0x00000001001caf96
- (void)updateDisplayForSelection:(id)arg1;	// IMP=0x00000001001cae6d
- (id)_stackControllerCreateIfNeeded:(BOOL)arg1;	// IMP=0x00000001001cac1e
- (void)_abortAnimations;	// IMP=0x00000001001cabbb
- (void)mui_prepareToLayoutSynchronously:(id)arg1;	// IMP=0x00000001001ca86d
- (void)mui_performAnimation;	// IMP=0x00000001001ca201
- (void)mui_prepareToAnimate:(id)arg1;	// IMP=0x00000001001ca14d
- (void)_viewDidChangeAppearance:(id)arg1;	// IMP=0x00000001001ca0e4
- (void)_viewDidEndLiveResize:(id)arg1;	// IMP=0x00000001001c9e40
- (void)_viewFrameDidChange:(id)arg1;	// IMP=0x00000001001c988b
- (void)_resizeMessageViewWithID:(id)arg1 toSize:(struct CGSize)arg2 animating:(BOOL)arg3;	// IMP=0x00000001001c95dc
- (void)_messageViewControllerDidFinishLoading:(id)arg1;	// IMP=0x00000001001c933d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001001c91d5
- (void)_takeSnapshotOfMessageViewForController:(id)arg1 completionHandler:(id)arg2;	// IMP=0x00000001001c8efa
- (void)_removeMessageViewForItem:(id)arg1;	// IMP=0x00000001001c8e12
- (void)_createMessageViewForItem:(id)arg1;	// IMP=0x00000001001c8b24
- (void)_detachMessageViewFromIndividualWindow:(id)arg1;	// IMP=0x00000001001c8a32
- (void)_attachMessageViewToIndividualWindow:(id)arg1;	// IMP=0x00000001001c879b
- (void)setStackVisible:(BOOL)arg1 animates:(BOOL)arg2;	// IMP=0x00000001001c86f4
- (void)dealloc;	// IMP=0x00000001001c855f
- (id)init;	// IMP=0x00000001001c8490
- (id)initWithContainerView:(id)arg1;	// IMP=0x00000001001c831e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

