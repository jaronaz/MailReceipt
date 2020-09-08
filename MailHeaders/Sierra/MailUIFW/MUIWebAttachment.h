//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"

@class MCFileWrapper, NSImage, NSString, NSURL;

@interface MUIWebAttachment : NSObject <NSCoding, NSPasteboardReading, NSPasteboardWriting>
{
    NSString *_inlineTagName;
    NSString *_mimeType;
    NSString *_uti;
    NSURL *_fileURL;
    MCFileWrapper *_fileWrapper;
    NSURL *_cidURL;
    NSString *_contentID;
    NSURL *_remoteURL;
}

+ (id)readableTypesForPasteboard:(id)arg1;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(retain, nonatomic) NSURL *cidURL; // @synthesize cidURL=_cidURL;
@property(readonly, nonatomic) MCFileWrapper *fileWrapper; // @synthesize fileWrapper=_fileWrapper;
- (void).cxx_destruct;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
@property(readonly, nonatomic) BOOL shouldAlwaysAutomaticallyDownload;
@property(readonly, nonatomic) BOOL isDataDownloaded;
@property(readonly, nonatomic) __weak NSURL *downloadDirectory;
@property(readonly, nonatomic) BOOL isAutoArchiveAttachment;
@property(readonly, nonatomic) NSString *filenameForSaving;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) NSImage *iconImage;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, copy, nonatomic) NSString *inlineTagName;
@property(readonly, copy, nonatomic) NSString *uti;
@property(readonly, copy, nonatomic) NSString *mimeTypeForAttachmentTag;
@property(readonly, copy, nonatomic) NSString *mimeType;
- (id)_fileURLIfAvailable;
@property(readonly, nonatomic) NSURL *fileURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileWrapper:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
