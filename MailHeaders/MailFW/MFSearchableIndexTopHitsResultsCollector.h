//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mail/EFCancelable-Protocol.h>
#import <Mail/EFLoggable-Protocol.h>
#import <Mail/MFSearchableIndexQueryResultProvider-Protocol.h>
#import <Mail/MFSearchableIndexTopHitsResultsCollectorBuilder-Protocol.h>

@class EFFuture, EMSearchableIndexTopHitsQuery, MFMessageCriterion, NSArray, NSString;
@protocol MFMessageConsumer, MFSearchableIndexQueryResultProcessor;

@interface MFSearchableIndexTopHitsResultsCollector : NSObject <EFLoggable, MFSearchableIndexTopHitsResultsCollectorBuilder, EFCancelable, MFSearchableIndexQueryResultProvider>
{
    unsigned int _options;
    MFMessageCriterion *_criterion;
    id <MFMessageConsumer> _target;
    NSArray *_filterQueries;
    NSString *_logIdentifier;
    EMSearchableIndexTopHitsQuery *_topHitsQuery;
    id <MFSearchableIndexQueryResultProcessor> _processor;
}

+ (void)setMostRecentTopHitsQueryResult:(id)arg1;
+ (id)mostRecentTopHitsQueryResult;
+ (id)log;
@property(retain, nonatomic) id <MFSearchableIndexQueryResultProcessor> processor; // @synthesize processor=_processor;
@property(retain, nonatomic) EMSearchableIndexTopHitsQuery *topHitsQuery; // @synthesize topHitsQuery=_topHitsQuery;
@property(copy, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(copy, nonatomic) NSArray *filterQueries; // @synthesize filterQueries=_filterQueries;
@property(retain, nonatomic) id <MFMessageConsumer> target; // @synthesize target=_target;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
@property(retain, nonatomic) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)cancel;
@property(readonly, nonatomic) EFFuture *gatheredFuture;
- (void)_processTopHitsQueryResult:(id)arg1;
- (void)start;
- (id)initWithSearchPhrase:(id)arg1 processor:(id)arg2 builder:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

