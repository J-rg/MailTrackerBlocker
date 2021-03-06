//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (MailFrameworkAdditions)
+ (id)validURLCharacterSet;	// IMP=0x00000000001bab79
+ (void)resetBetterStringByResolvingSymlinksInPath;	// IMP=0x00000000001c3ac9
- (BOOL)isEqualExceptForFinalSlash:(id)arg1;	// IMP=0x00000000001babe5
@property(readonly, copy, nonatomic) NSString *validURLString;
- (BOOL)hasPrefixIgnoreCaseAndDiacritics:(id)arg1;	// IMP=0x00000000001ba88f
- (id)uniqueFilenameWithRespectToFilenames:(id)arg1;	// IMP=0x00000000001ba54d
@property(readonly, copy, nonatomic) NSString *foldedStringForSuggestionsOriginatedExactMatchSearches;
@property(readonly, copy, nonatomic) NSString *fileSystemString;
@property(readonly, nonatomic) BOOL containsOnlyWhitespace;
- (id)stringByReplacingSpecialSlashesWith:(id)arg1;	// IMP=0x00000000001ba300
@property(readonly, copy, nonatomic) NSString *stringByReplacingSpecialSlashesWithSlashes;
@property(readonly, copy, nonatomic) NSString *stringByReplacingSlashesWithSpecialSlashes;
- (id)specialSlash;	// IMP=0x00000000001ba1d7
@property(readonly, copy, nonatomic) NSString *stringByChangingBodyTagToDiv;
@property(readonly, copy) NSString *betterStringByResolvingSymlinksInPath;
@property(readonly, copy, nonatomic) NSString *stringByReallyAbbreviatingWithTildeInPath;
- (BOOL)isSubdirectoryOfPath:(id)arg1;	// IMP=0x00000000001c35c8
@end

