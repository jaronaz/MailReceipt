//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class ECLocalMessageAction, ECMessageFlagChange, ECTransferMessageAction, ECTransferMessageActionResults, NSArray, NSData, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL;
@protocol ECMessage, EDReceivingAccount;

@protocol EDMessageChangeManagerSubClassMethods <NSObject>
- (BOOL)mailboxPartOfAllMail:(NSURL *)arg1;
- (BOOL)mailboxIsAllMail:(NSURL *)arg1;
- (void)messageWasAppended:(id <ECMessage>)arg1;
- (void)displayErrorForTransferAction:(ECTransferMessageAction *)arg1 withResults:(ECTransferMessageActionResults *)arg2;
- (void)actionHasChangedAccount:(ECLocalMessageAction *)arg1;
- (void)checkForNewActionsInMailboxID:(long long)arg1;
- (void)setData:(NSData *)arg1 onMessage:(id <ECMessage>)arg2;
- (void)setRemoteID:(NSString *)arg1 onMessageWithDatabaseID:(long long)arg2;
- (NSArray *)addLabels:(NSSet *)arg1 removeLabels:(NSSet *)arg2 toMessagesInDatabase:(NSArray *)arg3;
- (void)resetStatusCountsForMailboxWithURL:(NSURL *)arg1;
- (NSArray *)applyFlagChange:(ECMessageFlagChange *)arg1 toMessagesInDatabase:(NSArray *)arg2;
- (BOOL)haveCompleteMIMEForMessage:(id <ECMessage>)arg1;
- (void)deletePersistedMessages:(NSArray *)arg1;
- (BOOL)persistNewMessages:(NSArray *)arg1 mailboxURL:(NSURL *)arg2 oldMessagesByNewMessage:(NSMutableDictionary *)arg3 fromSyncing:(BOOL)arg4;
- (NSDictionary *)iterateMessagesInMailboxURLs:(NSArray *)arg1 excludingMessages:(NSArray *)arg2 batchSize:(unsigned long long)arg3 returnMessagesForFlagChange:(ECMessageFlagChange *)arg4 handler:(void (^)(NSArray *))arg5;
- (NSArray *)messagesForRemoteIDs:(NSArray *)arg1 mailboxURL:(NSURL *)arg2;
- (id <ECMessage>)messageForDatabaseID:(long long)arg1;
- (id <EDReceivingAccount>)accountForMailboxURL:(NSURL *)arg1;
- (long long)mailboxDatabaseIDForURL:(NSURL *)arg1;
@end

