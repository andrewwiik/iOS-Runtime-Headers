/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate> {
    NSMutableArray *_activeCommands;
    MPFeedbackCommand *_addItemToLibraryCommand;
    MPFeedbackCommand *_addNowPlayingItemToLibraryCommand;
    MPRemoteCommand *_advanceRepeatModeCommand;
    MPRemoteCommand *_advanceShuffleModeCommand;
    MPFeedbackCommand *_bookmarkCommand;
    MPPurchaseCommand *_buyAlbumCommand;
    MPPurchaseCommand *_buyTrackCommand;
    BOOL _canBeNowPlayingApplication;
    MPPurchaseCommand *_cancelDownloadCommand;
    MPRemoteCommand *_changePlaybackPositionCommand;
    MPChangePlaybackRateCommand *_changePlaybackRateCommand;
    MPChangeRepeatModeCommand *_changeRepeatModeCommand;
    MPChangeShuffleModeCommand *_changeShuffleModeCommand;
    MPRemoteCommand *_createRadioStationCommand;
    MPRemoteCommand *_disableLanguageOptionCommand;
    MPFeedbackCommand *_dislikeCommand;
    MPRemoteCommand *_enableLanguageOptionCommand;
    MPRemoteCommand *_insertIntoPlaybackQueueCommand;
    MPFeedbackCommand *_likeCommand;
    void *_mediaRemoteCommandHandler;
    MPRemoteCommand *_nextTrackCommand;
    MPRemoteCommand *_pauseCommand;
    MPRemoteCommand *_playCommand;
    MPPurchaseCommand *_preOrderAlbumCommand;
    MPRemoteCommand *_previousTrackCommand;
    MPRatingCommand *_ratingCommand;
    BOOL _scheduledSupportedCommandsChangedNotification;
    MPRemoteCommand *_seekBackwardCommand;
    MPRemoteCommand *_seekForwardCommand;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MPSetPlaybackQueueCommand *_setPlaybackQueueCommand;
    MPSkipIntervalCommand *_skipBackwardCommand;
    MPSkipIntervalCommand *_skipForwardCommand;
    MPRemoteCommand *_specialSeekBackwardCommand;
    MPRemoteCommand *_specialSeekForwardCommand;
    MPRemoteCommand *_stopCommand;
    MPRemoteCommand *_togglePlayPauseCommand;
}

@property (nonatomic, readonly) MPFeedbackCommand *bookmarkCommand;
@property (nonatomic, readonly) MPChangePlaybackRateCommand *changePlaybackRateCommand;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MPRemoteCommand *disableLanguageOptionCommand;
@property (nonatomic, readonly) MPFeedbackCommand *dislikeCommand;
@property (nonatomic, readonly) MPRemoteCommand *enableLanguageOptionCommand;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MPFeedbackCommand *likeCommand;
@property (nonatomic, readonly) MPRemoteCommand *nextTrackCommand;
@property (nonatomic, readonly) MPRemoteCommand *pauseCommand;
@property (nonatomic, readonly) MPRemoteCommand *playCommand;
@property (nonatomic, readonly) MPRemoteCommand *previousTrackCommand;
@property (nonatomic, readonly) MPRatingCommand *ratingCommand;
@property (nonatomic, readonly) MPRemoteCommand *seekBackwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *seekForwardCommand;
@property (nonatomic, readonly) MPSkipIntervalCommand *skipBackwardCommand;
@property (nonatomic, readonly) MPSkipIntervalCommand *skipForwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *stopCommand;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPRemoteCommand *togglePlayPauseCommand;

+ (id)sharedCommandCenter;

- (void).cxx_destruct;
- (id)_activeCommands;
- (void)_commandTargetsDidChangeNotification:(id)arg1;
- (struct __CFArray { }*)_copySupportedCommands;
- (id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned int)arg2;
- (id)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2;
- (void)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2 completion:(id /* block */)arg3;
- (void)_scheduleSupportedCommandsChanged;
- (void)_setupMediaRemoteCommandHandler;
- (void)_setupNotifications;
- (void)_teardownMediaRemoteCommandHandler;
- (void)_teardownNotifications;
- (id)addItemToLibraryCommand;
- (id)addNowPlayingItemToLibraryCommand;
- (id)advanceRepeatModeCommand;
- (id)advanceShuffleModeCommand;
- (id)bookmarkCommand;
- (id)buyAlbumCommand;
- (id)buyTrackCommand;
- (id)cancelDownloadCommand;
- (id)changePlaybackPositionCommand;
- (id)changePlaybackRateCommand;
- (id)changeRepeatModeCommand;
- (id)changeShuffleModeCommand;
- (id)createRadioStationCommand;
- (void)dealloc;
- (id)disableLanguageOptionCommand;
- (id)dislikeCommand;
- (id)enableLanguageOptionCommand;
- (id)init;
- (id)insertIntoPlaybackQueueCommand;
- (id)likeCommand;
- (id)nextTrackCommand;
- (id)pauseCommand;
- (id)playCommand;
- (id)preOrderAlbumCommand;
- (id)previousTrackCommand;
- (id)ratingCommand;
- (void)remoteCommandDidMutatePropagatableProperty:(id)arg1;
- (id)seekBackwardCommand;
- (id)seekForwardCommand;
- (id)setPlaybackQueueCommand;
- (id)skipBackwardCommand;
- (id)skipForwardCommand;
- (id)specialSeekBackwardCommand;
- (id)specialSeekForwardCommand;
- (id)stopCommand;
- (id)togglePlayPauseCommand;

@end
