//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorValueAdaptorDelegate-Protocol.h"

@class NSNumber, NSString;

@protocol MSInspectorMathValueAdaptorDelegate <MSInspectorValueAdaptorDelegate>

@optional
- (NSNumber *)inspectorValueAdaptor:(id)arg1 nilOperandDropInForModel:(id)arg2 operator:(NSString *)arg3 operand2:(double)arg4;
- (BOOL)inspectorValueAdaptorAllowFloat:(id)arg1;
@end
