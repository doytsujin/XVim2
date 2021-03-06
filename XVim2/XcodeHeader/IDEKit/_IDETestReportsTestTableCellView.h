//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import <IDEKit/IDETestsInTestableObserver-Protocol.h>

@class IDETest, NSButton, NSImageView, NSString;
@protocol IDETestReport_Common;

@interface _IDETestReportsTestTableCellView : NSTableCellView <IDETestsInTestableObserver>
{
    IDETest *_jumpToTest;
    BOOL _selected;
    NSImageView *_statusImageView;
    NSButton *_jumpButton;
    id <IDETestReport_Common> _item;
}

@property(retain) id <IDETestReport_Common> item; // @synthesize item=_item;
@property __weak NSButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property __weak NSImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)viewDidMoveToSuperview;
- (void)fitViews;
- (void)testsChanged:(id)arg1;
- (void)allTestablesChanged;
- (void)setBackgroundStyle:(long long)arg1;
- (void)testablesChanged:(id)arg1;
- (void)jumpToTestSourceCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

