//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class MFMessageCriterion, NSString;
@protocol MFMessageConsumer;

@protocol MFSearchableIndexQueryResultProviderBuilder <NSObject>
@property(copy, nonatomic) NSString *logIdentifier;
@property(nonatomic) unsigned int options;
@property(retain, nonatomic) MFMessageCriterion *criterion;
@property(retain, nonatomic) id <MFMessageConsumer> target;
@end
