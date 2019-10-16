//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMenu, NSString;
@protocol MSFrequentObjectsControllerDelegate;

@interface MSFrequentObjectsController : NSObject
{
    NSArray *_frequentObjects;
    id <MSFrequentObjectsControllerDelegate> _delegate;
    NSMenu *_menu;
}

+ (id)menuItemAttributedTitleForTitle:(id)arg1 description:(id)arg2;
@property(retain, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) __weak id <MSFrequentObjectsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *frequentObjects; // @synthesize frequentObjects=_frequentObjects;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)showMenuAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)refreshMenuItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
