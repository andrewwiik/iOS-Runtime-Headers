/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropActivityViewController : UIViewController <SFAirDropBrowserDelegate, SFCollectionViewDelegateLayout, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate, UICollectionViewDataSource> {
    NSLayoutConstraint *_airDropActiveIconLeftConstraint;
    SFAirDropActiveIconView *_airDropActiveIconView;
    NSLayoutConstraint *_airDropIconLeftConstraint;
    SFAirDropIconView *_airDropIconView;
    NSLayoutConstraint *_airDropInactiveIconLeftConstraint;
    SFAirDropActiveIconView *_airDropInactiveIconView;
    ALAssetsLibrary *_assetsLibrary;
    int _attachmentCount;
    SFAirDropBrowser *_browser;
    NSMutableSet *_cachedSharedItems;
    UICollectionView *_collectionView;
    SFCollectionViewLayout *_collectionViewLayout;
    BOOL _darkStyleOnLegacyApp;
    NSObject<SFAirDropActivityViewControllerDelegate> *_delegate;
    int _generatedPreviews;
    UILabel *_instructionsLabel;
    NSLayoutConstraint *_instructionsRightConstraint;
    BOOL _itemsReady;
    BOOL _itemsRequested;
    UILabel *_noAWDLLabel;
    NSLayoutConstraint *_noAWDLRightConstraint;
    UILabel *_noWifiLabel;
    NSLayoutConstraint *_noWifiRightConstraint;
    NSMutableArray *_objectChanges;
    NSOperationQueue *_operationQueue;
    BOOL _otherActivityViewPresented;
    NSString *_overriddenInstructionsText;
    NSString *_overriddenNoAWDLText;
    NSString *_overriddenNoWiFIBTText;
    NSString *_overriddenTitleText;
    NSMutableDictionary *_personToProgress;
    NSMutableDictionary *_personToSharedItemsRequestID;
    NSMutableDictionary *_personToStoredTransferFinalState;
    id _progressToken;
    SFPersonCollectionViewCell *_prototypeActivityCell;
    NSString *_sessionID;
    BOOL _sharedItemsAvailable;
    int _sharedItemsRequestID;
    NSMutableDictionary *_sharedItemsRequestIDToPreviewPhoto;
    UILabel *_titleLabel;
    SFWirelessSettingsController *_wirelessSettings;
}

@property (nonatomic) BOOL darkStyleOnLegacyApp;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SFAirDropActivityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL otherActivityViewPresented;
@property (nonatomic, copy) NSString *overriddenInstructionsText;
@property (nonatomic, copy) NSString *overriddenNoAWDLText;
@property (nonatomic, copy) NSString *overriddenNoWiFIBTText;
@property (nonatomic, copy) NSString *overriddenTitleText;
@property (nonatomic) BOOL sharedItemsAvailable;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } suggestedThumbnailSize;
@property (readonly) Class superclass;

+ (BOOL)airDropActivityCanPerformActivityWithItems:(id)arg1;
+ (id)classesForItem:(id)arg1;
+ (BOOL)isAirDropAvailable;

- (void).cxx_destruct;
- (BOOL)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5;
- (BOOL)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (id)attributedStringWithTitle:(id)arg1 content:(id)arg2;
- (void)browser:(id)arg1 didDeletePersonAtIndex:(unsigned int)arg2;
- (void)browser:(id)arg1 didInsertPersonAtIndex:(unsigned int)arg2;
- (void)browserDidChangePeople:(id)arg1;
- (void)browserWillChangePeople:(id)arg1;
- (id)cellForPerson:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 completion:(id /* block */)arg6;
- (BOOL)darkStyleOnLegacyApp;
- (void)dealloc;
- (id)delegate;
- (void)didEnterBackground:(id)arg1;
- (void)enableAirDropRequiredFeatures;
- (void)generateSpecialPreviewPhotoForRequestID:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)instructionsText;
- (BOOL)isBluetoothEnabled;
- (BOOL)isTetheredModeEnabled;
- (BOOL)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id*)arg3;
- (BOOL)isWifiEnabled;
- (id)noAWDLText;
- (id)noWiFiBTText;
- (BOOL)otherActivityViewPresented;
- (id)overriddenInstructionsText;
- (id)overriddenNoAWDLText;
- (id)overriddenNoWiFIBTText;
- (id)overriddenTitleText;
- (void)personCollectionViewCellDidFinishTransfer:(id)arg1;
- (void)personCollectionViewCellDidStartTransfer:(id)arg1;
- (void)personCollectionViewCellDidTerminateTransfer:(id)arg1;
- (void)setDarkStyleOnLegacyApp:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsRequestingSharedItems;
- (void)setOtherActivityViewPresented:(BOOL)arg1;
- (void)setOverriddenInstructionsText:(id)arg1;
- (void)setOverriddenNoAWDLText:(id)arg1;
- (void)setOverriddenNoWiFIBTText:(id)arg1;
- (void)setOverriddenTitleText:(id)arg1;
- (void)setSharedItemsAvailable:(BOOL)arg1;
- (BOOL)sharedItemsAvailable;
- (void)startBrowsing;
- (void)startTransferForPeople:(id)arg1;
- (void)stopBrowsing;
- (void)subscribeToProgresses;
- (void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2;
- (struct CGSize { float x1; float x2; })suggestedThumbnailSize;
- (id)titleText;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)unpublishedProgressForPersonWithRealName:(id)arg1;
- (void)unsubscribeToProgresses;
- (void)updateContentAreaAnimated:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)wifiBtHelpTextLocalizedStringKey;
- (void)willEnterForeground:(id)arg1;
- (void)wirelessSettingsDidChange:(id)arg1;

@end
