/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIFont;



@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView>
{
    NSInteger _deferredClearButtonMode;
    UIFont *_deferredFont;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _deferredFrame;
    float _deferredPaddingLeft;
    float _deferredPaddingTop;
    NSString *_deferredPlaceholder;
    NSString *_deferredText;
    BOOL _isDeferringInterfaceUpdates;
}

@property(getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;


- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
- (BOOL)isDeferringInterfaceUpdates;
- (void)setDeferringInterfaceUpdates:(BOOL)arg1;
- (float)paddingTop;
- (void)setText:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (id)text;
- (id)placeholder;
- (void)setClearButtonMode:(NSInteger)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (float)paddingLeft;
- (NSInteger)clearButtonMode;
- (id)font;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setFont:(id)arg1;
- (void)dealloc;

@end