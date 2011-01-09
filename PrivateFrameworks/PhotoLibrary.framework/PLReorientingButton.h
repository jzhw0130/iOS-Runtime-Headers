/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */



@interface PLReorientingButton : UIButton 
{
    BOOL _watchingOrientationChanges;
    NSInteger _orientation;
    float _hitRectExtension;
    BOOL _animatingOrientationChange;
    float _endCapRadius;
    struct CGPoint { 
        float x; 
        float y; 
    } _defaultAnchorCenter;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _defaultAnchorTransform;
}

@property float endCapRadius;
@property float hitRectExtension;


- (void)startWatchingDeviceOrientationChanges;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_transformForOrientation:(NSInteger)arg1 rotationMode:(NSInteger)arg2;
- (void)_setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1 rotationMode:(NSInteger)arg2;
- (NSInteger)_modeForRotationFromOrientation:(NSInteger)arg1 toOrientation:(NSInteger)arg2;
- (float)endCapRadius;
- (float)hitRectExtension;
- (void)rotationAnimationDidStop;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForOrientation:(NSInteger)arg1;
- (void)setButtonOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)setHitRectExtension:(float)arg1;
- (void)stopWatchingDeviceOrientationChanges;
- (void)setEndCapRadius:(float)arg1;
- (void)didMoveToSuperview;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end