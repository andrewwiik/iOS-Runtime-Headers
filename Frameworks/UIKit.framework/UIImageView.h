/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIImageView : UIView {
    BOOL __animatesContents;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _cachedEdgeInsetsForEffects;
    BOOL _edgeInsetsForEffectsAreValid;
    UITraitCollection *_lastResolvedTraitCollection;
    id _storage;
    BOOL _templateSettingsAreInvalid;
}

@property (setter=_setAnimatesContents:, nonatomic) BOOL _animatesContents;
@property (setter=_setDefaultRenderingMode:, nonatomic) int _defaultRenderingMode;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } _edgeInsetsForEffects;
@property (setter=_setEdgeInsetsForEffectsAreValid:, nonatomic) BOOL _edgeInsetsForEffectsAreValid;
@property (setter=_setMasksTemplateImages:, nonatomic) BOOL _masksTemplateImages;
@property (setter=_setTemplateImageRenderingEffects:, nonatomic) unsigned int _templateImageRenderingEffects;
@property (nonatomic, readonly) BOOL _templateSettingsAreInvalid;
@property (nonatomic) double animationDuration;
@property (nonatomic, copy) NSArray *animationImages;
@property (nonatomic) int animationRepeatCount;
@property (nonatomic) int drawMode;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic, copy) NSArray *highlightedAnimationImages;
@property (nonatomic, retain) UIImage *highlightedImage;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *tintColor;
@property (getter=isUserInteractionEnabled, nonatomic) BOOL userInteractionEnabled;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (id)_activeImage;
- (id)_adaptiveImageForImage:(id)arg1 assignedImage:(id)arg2 currentImage:(id)arg3 hasAdapted:(BOOL*)arg4;
- (void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)_animatesContents;
- (void)_applySettingsForLegibilityStyle:(int)arg1;
- (id)_cachedPretiledImageForImage:(id)arg1;
- (BOOL)_canDrawContent;
- (id)_checkHighlightedImageForAdaptation:(id)arg1 hadAdapted:(BOOL*)arg2;
- (id)_checkImageForAdaptation:(id)arg1 hasAdapted:(BOOL*)arg2;
- (void)_clearPretiledImageCacheForImage:(id)arg1;
- (void)_configureForLayeredImage:(id)arg1;
- (id)_currentHighlightedImage;
- (id)_currentImage;
- (id)_decompressingImageForType:(unsigned int)arg1;
- (int)_defaultRenderingMode;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)_displayImageAsLayered:(id)arg1;
- (void)_drawImageEffectsForImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_edgeInsetsForEffects;
- (BOOL)_edgeInsetsForEffectsAreValid;
- (id)_effectiveTintColorWithImage:(id)arg1;
- (id)_generateBackdropMaskImage;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_invalidateTemplateSettings;
- (BOOL)_masksTemplateImages;
- (BOOL)_needsImageEffectsForImage:(id)arg1;
- (BOOL)_needsImageEffectsForImage:(id)arg1 suppressColorizing:(BOOL)arg2;
- (BOOL)_recomputePretilingState;
- (void)_resolveImageForTrait:(id)arg1;
- (void)_setAnimatesContents:(BOOL)arg1;
- (void)_setDecompressingImage:(id)arg1 forType:(unsigned int)arg2;
- (void)_setDefaultRenderingMode:(int)arg1;
- (void)_setEdgeInsetsForEffectsAreValid:(BOOL)arg1;
- (BOOL)_setImageViewContents:(id)arg1;
- (void)_setMasksTemplateImages:(BOOL)arg1;
- (void)_setTemplateImageRenderingEffects:(unsigned int)arg1;
- (void)_setViewGeometry:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forMetric:(int)arg2;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)_shouldDrawImage:(id)arg1;
- (BOOL)_shouldTreatImageAsTemplate:(id)arg1;
- (void)_teardownLayeredImage;
- (unsigned int)_templateImageRenderingEffects;
- (BOOL)_templateSettingsAreInvalid;
- (void)_templateSettingsDidChange;
- (void)_updateImageViewForOldImage:(id)arg1 newImage:(id)arg2;
- (void)_updateMasking;
- (void)_updatePretiledImageCacheForImage:(id)arg1;
- (void)_updateState;
- (void)_updateTemplateProperties;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (double)animationDuration;
- (id)animationImages;
- (int)animationRepeatCount;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (unsigned long long)defaultAccessibilityTraits;
- (int)drawMode;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)highlightedAnimationImages;
- (id)highlightedImage;
- (id)image;
- (struct CGImage { }*)imageRef;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isAnimating;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (void)setAnimating:(BOOL)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationImages:(id)arg1;
- (void)setAnimationRepeatCount:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCGImageRef:(struct CGImage { }*)arg1;
- (void)setDrawMode:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlightedAnimationImages:(id)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSemanticContentAttribute:(int)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)useBlockyMagnificationInClassic;

// Image: /System/Library/Frameworks/PassKit.framework/PassKit

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRect;
- (struct CGSize { float x1; float x2; })alignmentSize;
- (void)setAlignmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)pu_extractPlayOverlayBackgroundImageFromCenter:(struct CGPoint { float x1; float x2; })arg1 asynchronously:(BOOL)arg2 handler:(id /* block */)arg3;

@end
