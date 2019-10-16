//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSGPUTexture-Protocol.h>

@protocol MTLTexture;

@interface MSMetalTexture : NSObject <MSGPUTexture>
{
    id <MTLTexture> _metalTexture;
}

@property(retain, nonatomic) id <MTLTexture> metalTexture; // @synthesize metalTexture=_metalTexture;
- (void).cxx_destruct;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)replaceRegion:(CDStruct_bf95b13b)arg1 bytesPerRow:(unsigned long long)arg2 pixels:(const void *)arg3;
- (id)initWithMetalTexture:(id)arg1;

@end
