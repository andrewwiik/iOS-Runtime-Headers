/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityHorizontalLockupView : MusicEntityAbstractLockupView <MusicEntityContentDescriptorViewConfiguring, RUTrackDownloadViewDelegate> {
    MPUHalfTintedTransportButton *_addButton;
    RUTrackDownloadView *_buyButton;
    UIButton *_checkmarkButton;
    UIButton *_contextualActionsButton;
    <MusicEntityHorizontalLockupViewDelegate> *_delegate;
    struct { 
        unsigned int didSelectAddButton : 1; 
        unsigned int didSelectContextualActionsButton : 1; 
        unsigned int didSelectPlayButton : 1; 
        unsigned int didLayoutSubviews : 1; 
        unsigned int shouldLayoutAsEditing : 1; 
    } _delegateRespondsToSelector;
    UIImageView *_explicitBadgeImageView;
    BOOL _isContainedWithinSplitViewPrimary;
    float _textContentLeadingInset;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } artworkSize;
@property (nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (nonatomic, readonly) UIButton *contextualActionsButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicEntityHorizontalLockupViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float textContentLeadingInset;

+ (float)defaultTextDescriptorHeightAdditionsForContentDescriptor:(id)arg1 width:(float)arg2 traitCollection:(id)arg3;
+ (float)maximumHeightForContentDescriptor:(id)arg1 width:(float)arg2 traitCollection:(id)arg3;
+ (float)maximumHeightForContentDescriptor:(id)arg1 width:(float)arg2 traitCollection:(id)arg3 artworkSize:(struct CGSize { float x1; float x2; })arg4;
+ (float)maximumHeightForContentDescriptor:(id)arg1 width:(float)arg2 traitCollection:(id)arg3 textDescriptorHeightAdditions:(float)arg4 artworkSize:(struct CGSize { float x1; float x2; })arg5;

- (void).cxx_destruct;
- (id)_addButton;
- (void)_addButtonTouchDownInside:(id)arg1;
- (void)_addButtonTouchEntered:(id)arg1;
- (void)_addButtonTouchExited:(id)arg1;
- (void)_addButtonTouchUpInside:(id)arg1;
- (void)_contentDescriptorDidChange:(id)arg1;
- (void)_contextualActionsButtonTapped:(id)arg1;
- (void)_entityDisabledDidChange;
- (void)_handleArtworkViewTapped;
- (void)_handlePlayButtonTappedWithAction:(unsigned int)arg1;
- (BOOL)_shouldLayoutAsEditing;
- (BOOL)_shouldShowPlayButton;
- (struct CGSize { float x1; float x2; })artworkSize;
- (id)contentDescriptor;
- (id)contextualActionsButton;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setContentDescriptor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (float)textContentLeadingInset;
- (void)trackDownloadViewWillTransition:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
