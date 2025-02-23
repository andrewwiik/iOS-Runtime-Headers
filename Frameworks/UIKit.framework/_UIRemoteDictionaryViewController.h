/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRemoteDictionaryViewController : UITableViewController {
    NSArray *_availableDictionaries;
    _UIDictionaryManager *_dictionaryAssetManager;
}

@property (nonatomic, retain) _UIDictionaryManager *dictionaryAssetManager;

- (void).cxx_destruct;
- (id)_cloudBackgroundImage;
- (id)_downloadArrowImage;
- (id)_downloadButton;
- (id)_downloadImageWithTintColor:(id)arg1;
- (id)_downloadOptionsDictionary;
- (void)_handleDownloadButton:(id)arg1;
- (id)dictionaryAssetManager;
- (id)initWithStyle:(int)arg1;
- (void)setDictionaryAssetManager:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
