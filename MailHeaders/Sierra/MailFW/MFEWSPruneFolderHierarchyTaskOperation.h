//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSPersistenceTaskOperation.h>

@class NSSet;

@interface MFEWSPruneFolderHierarchyTaskOperation : MFEWSPersistenceTaskOperation
{
    BOOL _prunedSuccessfully;
    NSSet *_foundFolderIdStrings;
}

@property(readonly, copy, nonatomic) NSSet *foundFolderIdStrings; // @synthesize foundFolderIdStrings=_foundFolderIdStrings;
@property(nonatomic) BOOL prunedSuccessfully; // @synthesize prunedSuccessfully=_prunedSuccessfully;
- (void).cxx_destruct;
- (void)main;
- (id)init;
- (id)initWithFoundFolderIdStrings:(id)arg1;

@end
