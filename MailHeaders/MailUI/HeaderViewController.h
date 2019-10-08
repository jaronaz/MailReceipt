//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSDraggingSource-Protocol.h"
#import "NSLayoutManagerDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"
#import "NSTokenAttachmentDelegate-Protocol.h"
#import "QLPreviewMenuItemDelegate-Protocol.h"

@class CNAvatarViewController, ConversationMember, HeaderTextContainer, HeaderTruncationAttachmentCell, NSBox, NSButton, NSLayoutConstraint, NSString, NSTextAttachment, NSTextField, NSTextView, UnreadVIPButton;

@interface HeaderViewController : NSViewController <NSLayoutManagerDelegate, NSTextViewDelegate, NSTokenAttachmentDelegate, QLPreviewMenuItemDelegate, NSDraggingSource, NSMenuDelegate>
{
    NSTextField *_dateView;
    NSTextField *_mailboxView;
    NSButton *_detailsLink;
    NSButton *_unreadVIPButton;
    NSTextView *_textView;
    HeaderTextContainer *_textContainer;
    CNAvatarViewController *_avatarViewController;
    BOOL _expandRecipients;
    BOOL _showingAllHeaders;
    BOOL _isSingleton;
    BOOL _suppressesContentUpdates;
    BOOL _showDetailsButton;
    HeaderTruncationAttachmentCell *_truncationCell;
    NSTextAttachment *_flagTextAttachment;
    NSTextAttachment *_attachmentTextAttachment;
    NSBox *_dividerView;
    NSLayoutConstraint *_leadingDividerPadding;
    NSLayoutConstraint *_trailingDividerPadding;
    NSLayoutConstraint *_leadingMarginConstraint;
    NSLayoutConstraint *_trailingMarginConstraint;
}

+ (id)_mailboxIconString;
+ (id)_shortDateFormatter;
+ (id)_fullDateFormatter;
+ (id)_todayDateFormatter;
+ (BOOL)automaticallyNotifiesObserversOfShowingAllHeaders;
@property(nonatomic) __weak NSLayoutConstraint *trailingMarginConstraint; // @synthesize trailingMarginConstraint=_trailingMarginConstraint;
@property(nonatomic) __weak NSLayoutConstraint *leadingMarginConstraint; // @synthesize leadingMarginConstraint=_leadingMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingDividerPadding; // @synthesize trailingDividerPadding=_trailingDividerPadding;
@property(retain, nonatomic) NSLayoutConstraint *leadingDividerPadding; // @synthesize leadingDividerPadding=_leadingDividerPadding;
@property(nonatomic) __weak NSBox *dividerView; // @synthesize dividerView=_dividerView;
@property(readonly, nonatomic) NSTextAttachment *attachmentTextAttachment; // @synthesize attachmentTextAttachment=_attachmentTextAttachment;
@property(readonly, nonatomic) NSTextAttachment *flagTextAttachment; // @synthesize flagTextAttachment=_flagTextAttachment;
@property(nonatomic) BOOL showDetailsButton; // @synthesize showDetailsButton=_showDetailsButton;
@property(retain, nonatomic) HeaderTruncationAttachmentCell *truncationCell; // @synthesize truncationCell=_truncationCell;
@property(nonatomic) BOOL suppressesContentUpdates; // @synthesize suppressesContentUpdates=_suppressesContentUpdates;
- (void).cxx_destruct;
- (id)_displayStringForTruncationCell;
- (void)viewerPreferencesChanged:(id)arg1;
- (void)toggleVIP:(id)arg1;
- (void)certificateTrustSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showCertificateForSignerIndex:(unsigned long long)arg1;
- (void)showSignerCertificate:(id)arg1;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (struct CGRect)menuItem:(id)arg1 itemFrameForPoint:(struct CGPoint)arg2;
- (void)menuItemDidClose:(id)arg1;
- (unsigned long long)menuItem:(id)arg1 preferredEdgeForPoint:(struct CGPoint)arg2;
- (id)menuItem:(id)arg1 previewItemAtPoint:(struct CGPoint)arg2;
- (struct CGRect)_frameForToken:(id)arg1;
- (id)_dataDetectorsMenuItemForTokenAttachment:(id)arg1 representedObject:(id)arg2;
- (id)_dataDetectorsActionContextForTokenAttachment:(id)arg1 representedObject:(id)arg2;
- (id)_quicklookMenuItemForTokenAttachment:(id)arg1 representedObject:(id)arg2;
- (id)tokenAttachment:(id)arg1 _immediateActionAnimationControllerForRepresentedObject:(id)arg2 inTextView:(id)arg3;
- (id)menuForTokenAttachment:(id)arg1;
- (BOOL)hasMenuForTokenAttachment:(id)arg1;
- (BOOL)textView:(id)arg1 writeCell:(id)arg2 atIndex:(unsigned long long)arg3 toPasteboard:(id)arg4 type:(id)arg5;
- (id)textView:(id)arg1 writablePasteboardTypesForCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)layoutManager:(id)arg1 textContainer:(id)arg2 didChangeGeometryFromSize:(struct CGSize)arg3;
- (void)_insertAddressesInRange:(struct _NSRange)arg1 toLines:(unsigned long long)arg2 startingWithTruncatedItems:(id)arg3;
- (void)_truncateAddressesInRange:(struct _NSRange)arg1 toLines:(unsigned long long)arg2 startingWithTruncatedItems:(id)arg3;
- (void)_layoutTextStorageIfNeeded;
- (void)_updateDividerLines;
- (id)securityHeaderString;
- (id)collapsibleHeaderString;
- (id)subjectHeaderString;
- (id)fromHeaderString;
- (void)_updateAddressTokenSeparators;
- (void)_updateTextStorage;
- (void)_updateMailboxView;
- (void)_updateAvatarView;
- (void)_updateDateView;
- (void)_dateInvalidated:(id)arg1;
- (void)_updateFlagTextAttachment;
- (void)_updateAttachmentTextAttachment;
- (void)_updateDetailsLink;
- (void)_setImage:(id)arg1 forTextAttachmentCell:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_unregisterKVOForRepresentedObject:(id)arg1;
- (void)_registerKVOForRepresentedObject:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (id)_messageViewer;
- (void)_installConstraints;
- (void)_updateViewAppearance;
- (void)viewDidLoad;
@property(retain) ConversationMember *representedObject;
@property(nonatomic) BOOL isSingleton;
@property(nonatomic) BOOL showingFullDivider;
- (void)_setShowingAllHeaders:(BOOL)arg1 andUpdateTextStorage:(BOOL)arg2;
@property(nonatomic) BOOL showingAllHeaders;
@property(nonatomic) BOOL expandRecipients;
- (void)_toggleDetailsClicked:(id)arg1;
@property(readonly, nonatomic) NSButton *detailsLink;
@property(readonly, nonatomic) NSTextField *mailboxView;
@property(readonly, nonatomic) NSTextField *dateView;
@property(readonly, nonatomic) NSTextView *textView;
@property(readonly, nonatomic) HeaderTextContainer *textContainer;
@property(readonly, nonatomic) UnreadVIPButton *unreadVIPButton;
@property(readonly, nonatomic) CNAvatarViewController *avatarViewController;
- (void)dealloc;
- (void)_headerViewControllerCommonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
