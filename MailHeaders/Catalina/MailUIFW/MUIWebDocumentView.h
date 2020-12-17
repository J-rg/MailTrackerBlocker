//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class MUIWKWebViewController, MUIWebDocument;

@interface MUIWebDocumentView : NSView
{
    unsigned long long _loadedState;	// 112 = 0x70
    struct CGSize _contentSize;	// 120 = 0x78
    double _preferredMinLayoutWidth;	// 136 = 0x88
    BOOL _preparingToLayoutSynchronously;	// 144 = 0x90
    NSView *_snapshotView;	// 152 = 0x98
    id _prepareToLayoutSynchronouslyCompletionHandler;	// 160 = 0xa0
    MUIWKWebViewController *_wkWebViewController;	// 168 = 0xa8
}

+ (id)keyPathsForValuesAffectingPageZoom;	// IMP=0x0000000000026d5a
+ (id)keyPathsForValuesAffectingWebDocument;	// IMP=0x0000000000026d3a
+ (BOOL)requiresConstraintBasedLayout;	// IMP=0x00000000000060b6
@property(retain, nonatomic) MUIWKWebViewController *wkWebViewController; // @synthesize wkWebViewController=_wkWebViewController;
@property(copy, nonatomic) id prepareToLayoutSynchronouslyCompletionHandler; // @synthesize prepareToLayoutSynchronouslyCompletionHandler=_prepareToLayoutSynchronouslyCompletionHandler;
@property(nonatomic) BOOL preparingToLayoutSynchronously; // @synthesize preparingToLayoutSynchronously=_preparingToLayoutSynchronously;
@property(readonly, nonatomic) NSView *snapshotView; // @synthesize snapshotView=_snapshotView;
// - (void).cxx_destruct;	// IMP=0x00000000000291ad
- (void)exportAttachmentsToApplication:(id)arg1;	// IMP=0x00000000000290a3
- (BOOL)canExportAttachmentsToApplication:(id)arg1;	// IMP=0x0000000000028fe7
- (void)saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3;	// IMP=0x0000000000028f31
- (void)saveAttachmentsWithPanel:(id)arg1;	// IMP=0x0000000000028ec1
- (void)quickLookAttachments:(id)arg1;	// IMP=0x0000000000028e34
- (id)_attachmentControllersForAttachments:(id)arg1;	// IMP=0x0000000000028c15
- (id)description;	// IMP=0x0000000000028a1b
- (BOOL)shouldHandleClickForURL:(id)arg1;	// IMP=0x0000000000028a10
- (void)getSelectedText:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028989
- (void)selectFindMatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000288e3
- (void)findMatchesForString:(id)arg1 relativeToMatch:(id)arg2 findOptions:(unsigned long long)arg3 maxResults:(unsigned long long)arg4 resultCollector:(CDUnknownBlockType)arg5;	// IMP=0x0000000000028808
- (void)generateSelectionWebDocument:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028796
- (void)generateStyleInlinedWebDocument:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028724
- (void)setAttachments:(id)arg1 asHidden:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028694
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x0000000000008780
- (void)mui_cancelSynchronousLayout;	// IMP=0x000000000002860f
- (void)mui_performLayoutSynchronously;	// IMP=0x00000000000285b7
- (void)_readyToLayoutSynchronously;	// IMP=0x000000000002854c
- (void)mui_prepareToLayoutSynchronously:(CDUnknownBlockType)arg1;	// IMP=0x000000000002848d
- (void)mui_cancelAnimation;	// IMP=0x00000000000283bf
- (void)mui_performAnimation;	// IMP=0x000000000002816b
- (void)mui_prepareToAnimate:(CDUnknownBlockType)arg1;	// IMP=0x00000000000277b3
- (void)mui_didCacheDisplayInRect;	// IMP=0x0000000000027714
- (void)mui_prepareToCacheDisplayInRect:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002705a
- (id)printOperationWithPrintInfo:(id)arg1;	// IMP=0x0000000000026fb9
- (void)prepareTilesInRect:(struct CGRect)arg1;	// IMP=0x000000000000929a
- (id)evaluateJavaScriptSynchronously:(id)arg1;	// IMP=0x0000000000026f3f
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006215
@property(nonatomic) BOOL drawsBackground;
@property(nonatomic) BOOL shouldPaintToBounds;
@property(nonatomic) double pageZoom;
@property(retain, nonatomic) MUIWebDocument *webDocument;
@property(nonatomic) unsigned long long loadedState;
@property(nonatomic) double preferredMinLayoutWidth;
@property(nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) __weak NSView *contentView;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;	// IMP=0x0000000000026bc1
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;	// IMP=0x000000000000a318
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000082a9
- (void)_updatePreferredMinLayoutWidth;	// IMP=0x0000000000005f46
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;	// IMP=0x0000000000008465
- (void)viewDidMoveToSuperview;	// IMP=0x0000000000005f05
- (BOOL)isFlipped;	// IMP=0x0000000000005d58
- (void)tearDown;	// IMP=0x0000000000026b84
- (void)_muiWebDocumentViewCommonInit;	// IMP=0x000000000002695a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000268fb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000268b4

@end
