//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@interface FlatTableView : NSTableView
{
}

- (BOOL)isOpaque;
- (id)_dropTargetColor;
- (id)_selectionColor;
- (id)_highlightColorForCell:(id)arg1;
- (void)_drawDropHighlightBackgroundForRow:(long long)arg1;
- (void)_highlightRow:(long long)arg1 withColor:(id)arg2;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)awakeFromNib;

@end
