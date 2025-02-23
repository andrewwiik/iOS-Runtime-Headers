/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions> {
    AVAudioClient *_audioClient;
}

@property (nonatomic, retain) AVAudioClient *audioClient;
@property (nonatomic, retain) AVAudioDevice *currentInputDevice;
@property (nonatomic, retain) AVAudioDevice *currentOutputDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *inputDevices;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)audioClient;
- (id)currentInputDevice;
- (id)currentOutputDevice;
- (id)init;
- (id)inputDevices;
- (id)outputDevices;
- (void)setAudioClient:(id)arg1;
- (void)setCurrentInputDevice:(id)arg1;
- (void)setCurrentInputDeviceToDeviceWithID:(id)arg1;
- (void)setCurrentOutputDevice:(id)arg1;
- (void)setCurrentOutputDeviceToDeviceWithID:(id)arg1;

@end
