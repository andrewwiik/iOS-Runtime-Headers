/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductAdditionalMetadataViewController : UIViewController <MusicProductDescriptionTableViewCellDelegate, MusicProductMetadataTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSIndexSet *_allowedMetadataItems;
    UIColor *_customSelectionTintColor;
    UIColor *_defaultSelectionTintColor;
    <MusicProductAdditionalMetadataViewControllerDelegate> *_delegate;
    struct { 
        unsigned int didSelectAddSongsButton : 1; 
        unsigned int didUpdateProductDescription : 1; 
        unsigned int didUpdatePublicSwitchState : 1; 
        unsigned int didUpdateVisibleSwitchState : 1; 
        unsigned int didFinishContentHeightAnimation : 1; 
        unsigned int willBeginContentHeightAnimation : 1; 
        unsigned int shouldDeferContentHeightAnimationUpdates : 1; 
    } _delegateRespondsToSelector;
    MusicMediaDetailTintInformation *_detailTintInformation;
    NSMutableIndexSet *_metadataItems;
    MusicProductDescription *_productDescription;
    int _productDescriptionMaximumLengthForTextInput;
    MusicProductDescriptionTableViewCell *_productDescriptionTableViewCell;
    NSString *_publicSwitchDescription;
    BOOL _publicSwitchOn;
    UITableView *_tableView;
    NSString *_visibleSwitchDescription;
    BOOL _visibleSwitchOn;
}

@property (nonatomic, copy) NSIndexSet *allowedMetadataItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicProductAdditionalMetadataViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) MusicMediaDetailTintInformation *detailTintInformation;
@property (nonatomic, readonly) float effectiveContentHeight;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) MusicProductDescription *productDescription;
@property (nonatomic) int productDescriptionMaximumLengthForTextInput;
@property (nonatomic, copy) NSString *publicSwitchDescription;
@property (getter=isPublicSwitchOn, nonatomic) BOOL publicSwitchOn;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *visibleSwitchDescription;
@property (getter=isVisibleSwitchOn, nonatomic) BOOL visibleSwitchOn;

- (void).cxx_destruct;
- (void)_didFinishContentHeightAnimation;
- (void)_didSelectAddSongsButton;
- (void)_handlePreferredContentSizeCategoryDidChangeNotification:(id)arg1;
- (int)_metadataItemForRowAtIndexPath:(id)arg1;
- (id)_productDescriptionTableViewCell;
- (id)_publicSwitchCell;
- (void)_reloadTableViewRowHeights;
- (int)_rowIndexForMetadataItem:(int)arg1;
- (BOOL)_shouldDeferContentHeightAnimationUpdates;
- (void)_updateVisibleMetadataItems;
- (void)_willBeginContentHeightAnimation;
- (id)allowedMetadataItems;
- (void)dealloc;
- (id)delegate;
- (id)detailTintInformation;
- (float)effectiveContentHeight;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isPublicSwitchOn;
- (BOOL)isVisibleSwitchOn;
- (id)productDescription;
- (void)productDescriptionDidChangeForProductDescriptionTableViewCell:(id)arg1;
- (int)productDescriptionMaximumLengthForTextInput;
- (id)publicSwitchDescription;
- (void)setAllowedMetadataItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailTintInformation:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setProductDescription:(id)arg1;
- (void)setProductDescriptionMaximumLengthForTextInput:(int)arg1;
- (void)setPublicSwitchDescription:(id)arg1;
- (void)setPublicSwitchOn:(BOOL)arg1;
- (void)setVisibleSwitchDescription:(id)arg1;
- (void)setVisibleSwitchOn:(BOOL)arg1;
- (void)switchDidChangeStateInProductMetadataTableViewCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)visibleSwitchDescription;

@end
