//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface _MFMailboxChildrenEnumerator : NSEnumerator
{
    struct __CFTree *_root;
    struct __CFTree *_currentTree;
    BOOL _includeHidden;
}

@property(readonly, nonatomic) BOOL includeHidden; // @synthesize includeHidden=_includeHidden;
- (id)nextObject;
- (void)dealloc;
- (id)init;
- (id)initWithTree:(struct __CFTree *)arg1 includeHiddenChildren:(BOOL)arg2;

@end

