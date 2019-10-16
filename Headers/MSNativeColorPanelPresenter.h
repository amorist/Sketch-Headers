//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

@class NSView;
@protocol MSNativeColorPanelPresenterDelegate;

@interface MSNativeColorPanelPresenter : NSResponder
{
    id <MSNativeColorPanelPresenterDelegate> _delegate;
    NSView *_nextResponderView;
}

@property(nonatomic) __weak NSView *nextResponderView; // @synthesize nextResponderView=_nextResponderView;
@property(nonatomic) __weak id <MSNativeColorPanelPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeColorPanel;
- (id)nextResponder;
- (void)changeColor:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)presentWithColor:(id)arg1;
- (id)initWithNextResponderView:(id)arg1 delegate:(id)arg2;

@end
