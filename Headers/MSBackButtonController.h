//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSDocument;

@interface MSBackButtonController : NSViewController
{
    MSDocument *_doc;
}

@property(nonatomic) __weak MSDocument *doc; // @synthesize doc=_doc;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)attachToView:(id)arg1;
- (void)backButtonAction:(id)arg1;

@end
