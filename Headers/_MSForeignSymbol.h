//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSForeignObject.h>

@class MSSymbolMaster;

@interface _MSForeignSymbol : MSForeignObject
{
    MSSymbolMaster *_originalMaster;
    MSSymbolMaster *_symbolMaster;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) MSSymbolMaster *symbolMaster; // @synthesize symbolMaster=_symbolMaster;
@property(retain, nonatomic) MSSymbolMaster *originalMaster; // @synthesize originalMaster=_originalMaster;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

