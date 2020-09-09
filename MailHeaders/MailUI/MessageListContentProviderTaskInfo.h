//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, NSSet;

@interface MessageListContentProviderTaskInfo : NSObject
{
    BOOL _reloadNeeded;
    BOOL _animateFoundSelection;
    NSArray *_orderedObjects;
    unsigned long long _totalMessageCount;
    NSSet *_changedThreads;
    NSSet *_changedMessages;
    NSDictionary *_originalMessageByMessageIdentifier;
    NSDictionary *_messageCopiesByMessageIdentifier;
    NSArray *_contentChanges;
    NSIndexSet *_foundSelectedIndexes;
    unsigned long long _foundPinnedIndex;
    double _foundPinnedOffset;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) BOOL animateFoundSelection; // @synthesize animateFoundSelection=_animateFoundSelection;
@property(nonatomic) double foundPinnedOffset; // @synthesize foundPinnedOffset=_foundPinnedOffset;
@property(nonatomic) unsigned long long foundPinnedIndex; // @synthesize foundPinnedIndex=_foundPinnedIndex;
@property(copy, nonatomic) NSIndexSet *foundSelectedIndexes; // @synthesize foundSelectedIndexes=_foundSelectedIndexes;
@property(nonatomic) BOOL reloadNeeded; // @synthesize reloadNeeded=_reloadNeeded;
@property(copy, nonatomic) NSArray *contentChanges; // @synthesize contentChanges=_contentChanges;
@property(copy, nonatomic) NSDictionary *messageCopiesByMessageIdentifier; // @synthesize messageCopiesByMessageIdentifier=_messageCopiesByMessageIdentifier;
@property(copy, nonatomic) NSDictionary *originalMessageByMessageIdentifier; // @synthesize originalMessageByMessageIdentifier=_originalMessageByMessageIdentifier;
@property(copy, nonatomic) NSSet *changedMessages; // @synthesize changedMessages=_changedMessages;
@property(copy, nonatomic) NSSet *changedThreads; // @synthesize changedThreads=_changedThreads;
@property(nonatomic) unsigned long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(copy, nonatomic) NSArray *orderedObjects; // @synthesize orderedObjects=_orderedObjects;
- (void).cxx_destruct;
- (id)init;

@end
