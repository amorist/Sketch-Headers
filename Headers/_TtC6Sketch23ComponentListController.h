//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Sketch34ComponentPaneOutlineViewController.h"

@class NSLayoutConstraint, NSSegmentedControl, NSTextField;

@interface _TtC6Sketch23ComponentListController : _TtC6Sketch34ComponentPaneOutlineViewController
{
    // Error parsing type: , name: userInterfaceCache
    // Error parsing type: , name: componentKindSegmentedControl
    // Error parsing type: , name: noComponentsToShowTextField
    // Error parsing type: , name: heightConstraint
    // Error parsing type: , name: delegate
    // Error parsing type: , name: currentlyPreviewedViewItem
    // Error parsing type: , name: tree
    // Error parsing type: , name: componentKind
    // Error parsing type: , name: useCase
    // Error parsing type: , name: filterSetting
    // Error parsing type: , name: deferringHeightChangeNotifications
    // Error parsing type: , name: shouldScrollSelectionToVisible
    // Error parsing type: , name: cachedRowViewRenderer
    // Error parsing type: , name: skipNotifyingDelegateAboutSelectionChange
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)pickComponentKind:(id)arg1;
- (void)documentWillSave:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
@property(nonatomic, retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint;
@property(nonatomic) __weak NSTextField *noComponentsToShowTextField; // @synthesize noComponentsToShowTextField;
@property(nonatomic) __weak NSSegmentedControl *componentKindSegmentedControl; // @synthesize componentKindSegmentedControl;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (id)outlineView:(id)arg1 pasteboardWriterForItem:(id)arg2;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItems:(id)arg4;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;

@end
