/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeLayerTemporaryMergedStack : TSTStrokeLayerStack {
}

+ (double)p_maxWidthForMajorStrokes:(id)arg1 mergedWithMinorStrokes:(id)arg2 atIndex:(long long)arg3;
+ (double)p_maxWidthForMajorStrokes:(id)arg1 mergedWithMinorStrokes:(id)arg2 inRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg3 cachedMax:(double)arg4;

- (id)initWithMajorStrokes:(id)arg1 andMinorStrokes:(id)arg2;
- (void)lockForRead;
- (void)lockForWrite;
- (double)p_maxWidthOfStrokesInRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1 cachedMax:(double)arg2;
- (double)p_widthOfStrokesAtIndex:(long long)arg1;
- (void)unlock;

@end