//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFEWSResponseOperation.h>

@class EWSGetItemResponseType, NSArray;

@interface MFEWSGetItemDataResponseOperation : MFEWSResponseOperation
{
    CDUnknownBlockType _dataHandler;
    NSArray *_itemIdTypes;
}

@property(retain, nonatomic) NSArray *itemIdTypes; // @synthesize itemIdTypes=_itemIdTypes;
@property(copy, nonatomic) CDUnknownBlockType dataHandler; // @synthesize dataHandler=_dataHandler;
- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
@property(retain) EWSGetItemResponseType *response;

@end

