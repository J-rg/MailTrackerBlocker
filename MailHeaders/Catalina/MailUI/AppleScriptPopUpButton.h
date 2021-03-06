//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

@class NSMenu, NSString, NSURL, RulesPreferences;

@interface AppleScriptPopUpButton : NSPopUpButton
{
    BOOL _amIAwake;	// 108 = 0x6c
    NSString *_previouslySelectedItem;	// 112 = 0x70
    NSURL *_applicationScriptsDirectoryURL;	// 120 = 0x78
    RulesPreferences *_delegate;	// 128 = 0x80
    NSMenu *_appleScriptFilesMenu;	// 136 = 0x88
}

@property(nonatomic) BOOL amIAwake; // @synthesize amIAwake=_amIAwake;
@property(retain, nonatomic) NSMenu *appleScriptFilesMenu; // @synthesize appleScriptFilesMenu=_appleScriptFilesMenu;
@property(nonatomic) __weak RulesPreferences *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *applicationScriptsDirectoryURL; // @synthesize applicationScriptsDirectoryURL=_applicationScriptsDirectoryURL;
@property(retain, nonatomic) NSString *previouslySelectedItem; // @synthesize previouslySelectedItem=_previouslySelectedItem;
// - (void).cxx_destruct;	// IMP=0x00000001000ac4f1
- (void)_invalidateAppleScriptFilesMenu;	// IMP=0x00000001000ac3e6
- (void)_popupMenuChanged:(id)arg1;	// IMP=0x00000001000ac361
- (void)resetPopUp;	// IMP=0x00000001000abf14
@property(readonly, copy, nonatomic) NSString *selectedAppleScriptPath;
- (void)selectAppleScriptPath:(id)arg1;	// IMP=0x00000001000abb71
- (void)_configureAppleScriptFilesMenu;	// IMP=0x00000001000ab654
- (id)_appleScriptFilesFromMagicDirectory;	// IMP=0x00000001000ab22a
- (void)viewDidMoveToWindow;	// IMP=0x00000001000ab1e9
- (id)menu;	// IMP=0x00000001000ab0c6
- (void)dealloc;	// IMP=0x00000001000ab051
- (void)awakeFromNib;	// IMP=0x00000001000aafd1

@end

