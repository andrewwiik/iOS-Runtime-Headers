/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSArray, EDRowBlock, EDRowBlocks, EDWorksheet, EDColumnInfoCollection;



@interface EPStyleFlattener : EDProcessor 
{
    EDWorksheet *mWorksheet;
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mCurrentRowBlock;
    EDColumnInfoCollection *mColumnInfos;
    NSArray *mKeys;
    NSMutableArray *mRanges;
    NSInteger mFirstRow;
    NSInteger mLastRow;
    NSInteger mFirstColumn;
    NSInteger mLastColumn;
    NSUInteger mFirstRowStripeSize;
    NSUInteger mSecondRowStripeSize;
    NSUInteger mFirstColumnStripeSize;
    NSUInteger mSecondColumnStripeSize;
}


- (void)dealloc;
- (void)processObject:(id)arg1;
- (struct EDCellHeader { unsigned short x1; NSUInteger x2; }*)cellWithSetupStyleAtRowNumber:(NSInteger)arg1 columnNumber:(NSInteger)arg2;
- (void)applyStyleElements:(id)arg1 toCell:(struct EDCellHeader { unsigned short x1; NSUInteger x2; }*)arg2 row:(NSInteger)arg3 column:(NSInteger)arg4;
- (void)applyDifferentialStyle:(id)arg1 borderFlags:(NSInteger)arg2 precedence:(NSInteger)arg3 toCell:(struct EDCellHeader {}**)arg4 row:(NSInteger)arg5 column:(NSInteger)arg6;
- (id)flattenBorders:(id)arg1 differentialBorders:(id)arg2 borderFlags:(NSInteger)arg3 precedence:(NSInteger)arg4 row:(NSInteger)arg5 column:(NSInteger)arg6 isBordersCopied:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void**)arg7;
     /* Encoded args for previous method: @36@0:4@8@12i16i20i24i28^B32 */

- (id)flattenBorder:(NSInteger)arg1 borders:(id)arg2 differentialBorders:(id)arg3 flag:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg4 precedence:(NSInteger)arg5 row:(NSInteger)arg6 column:(NSInteger)arg7 isBorderCopied:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void**)arg8;
     /* Encoded args for previous method: @40@0:4i8@12@16B20i24i28i32^B36 */

- (id)flattenFill:(id)arg1 differentialFill:(id)arg2 isFillCopied:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void**)arg3;
     /* Encoded args for previous method: @20@0:4@8@12^B16 */

- (id)flattenFont:(id)arg1 differentialFont:(id)arg2 isFontCopied:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void**)arg3;
     /* Encoded args for previous method: @20@0:4@8@12^B16 */

- (id)wrapDifferentialStyleInATableStyleElement:(id)arg1 type:(NSInteger)arg2;
- (id)extractGlobalStyleElements:(id)arg1;
- (id)extractKeys:(id)arg1 from:(id)arg2 parent:(id)arg3;
- (void)cacheRange:(id)arg1;
- (id)collectionFromWorksheet:(id)arg1;
- (id)styleFromObject:(id)arg1;
- (id)extractRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(NSInteger)arg3;
- (id)extractCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(NSInteger)arg3 column:(NSInteger)arg4;
- (id)keysInTheOrderTheyShouldBeApplied;
- (NSInteger)borderFlagsForStyleType:(NSInteger)arg1 row:(NSInteger)arg2 column:(NSInteger)arg3;
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;
- (void)clearCache;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;

@end