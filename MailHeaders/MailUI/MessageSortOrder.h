//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MessageSortOrder : NSObject <NSCopying>
{
    BOOL _ascending;
    NSString *_sortOrderString;
}

@property(readonly, nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property(readonly, copy, nonatomic) NSString *sortOrderString; // @synthesize sortOrderString=_sortOrderString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSortOrderString:(id)arg1 ascending:(BOOL)arg2;

@end
