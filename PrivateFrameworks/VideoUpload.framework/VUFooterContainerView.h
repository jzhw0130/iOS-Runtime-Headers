/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
 */

@class UIButton;

@interface VUFooterContainerView : UIView {
    id _delegate;
    UIButton *_termsButton;
}

@property id delegate;
@property(retain) UIButton * termsButton;

- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 bypassDelegate:(BOOL)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTermsButton:(id)arg1;
- (id)termsButton;

@end