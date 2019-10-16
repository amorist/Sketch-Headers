//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCURLOperation.h>

#import "BCLicenseOperation-Protocol.h"

@class NSError, NSString, NSURLSessionDataTask;
@protocol BCLicenseOperationResult;

@interface BCRegularLicenseOperation : BCURLOperation <BCLicenseOperation>
{
    id <BCLicenseOperationResult> _result;
    NSError *_error;
    NSURLSessionDataTask *_task;
    Class _resultType;
}

+ (void)requestMetadataForLicense:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)unregisterLicense:(id)arg1;
+ (void)requestTrialWithHandler:(CDUnknownBlockType)arg1;
+ (void)refreshLicense:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)registerWithLicenseKey:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)configureWithApplicationID:(id)arg1 publicCertificate:(id)arg2;
@property(nonatomic) Class resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <BCLicenseOperationResult> result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)executeWithHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)main;
- (id)resultWithData:(id)arg1;
- (void)handleResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)initWithRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
