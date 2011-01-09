/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSURL, NSString;



@interface OADHyperlink : NSObject 
{
    NSURL *mTargetLocation;
    NSInteger mTargetMode;
    NSString *mTargetFrame;
    NSString *mAction;
    NSString *mTooltip;
    NSString *mInvalidUrl;
    BOOL mDoEndSound;
    BOOL mIsVisited;
    BOOL mDoAddToHistory;
}

@property BOOL doAddToHistory;
@property BOOL isVisited;
@property BOOL doEndSound;


- (NSUInteger)hash;
- (id)action;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)setAction:(id)arg1;
- (void)dealloc;
- (void)setInvalidUrl:(id)arg1;
- (void)setDoAddToHistory:(BOOL)arg1;
- (NSInteger)targetMode;
- (void)setTooltip:(id)arg1;
- (void)setDoEndSound:(BOOL)arg1;
- (void)setIsVisited:(BOOL)arg1;
- (void)setTargetFrame:(id)arg1;
- (void)setTargetLocation:(id)arg1;
- (void)setTargetMode:(NSInteger)arg1;
- (id)invalidUrl;
- (id)tooltip;
- (id)targetFrame;
- (BOOL)doAddToHistory;
- (BOOL)isVisited;
- (BOOL)doEndSound;
- (id)targetLocation;

@end