/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTStateManager : NSObject {
    id /* block */ _callback;
    id /* block */ _callbackWithMessage;
    NSXPCListener *_listener;
    VTXListenerDelegate *_listenerDelegate;
    BOOL _needBatteryPolicyOverride;
    VTPhraseSpotter *_phraseSpotter;
}

+ (id)_serviceClient;
+ (BOOL)enabledByAssertion;
+ (BOOL)onBattery;
+ (void)requestVoiceTriggerEnabled:(BOOL)arg1 forReason:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)getModel;
- (id)getPhraseSpotter;
- (id)initWithProperty:(id)arg1 callbackWithMessage:(id /* block */)arg2;
- (id)initWithStateTransitionCallback:(id /* block */)arg1;
- (BOOL)needBatteryPolicyOverride;
- (void)notify:(BOOL)arg1;

@end
