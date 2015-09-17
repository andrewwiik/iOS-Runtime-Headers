/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
 */

@interface UNSNotificationScheduler : NSObject <UNSNotificationSchedulerConnectionObserver> {
    NSString *_bundleIdentifier;
    <UNSNotificationSchedulerDelegate> *_delegate;
}

@property (copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UNSNotificationSchedulerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_addScheduledLocalNotifications:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_cancelScheduledLocalNotifications:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addScheduledLocalNotifications:(id)arg1;
- (void)addScheduledLocalNotifications:(id)arg1 waitUntilDone:(BOOL)arg2;
- (id)bundleIdentifier;
- (void)cancelAllScheduledLocalNotifications;
- (void)cancelScheduledLocalNotifications:(id)arg1;
- (void)cancelScheduledLocalNotifications:(id)arg1 waitUntilDone:(BOOL)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didChangeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)didFireLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)scheduleForFetchRequest:(id)arg1;
- (void)scheduleForFetchRequest:(id)arg1 withResult:(id /* block */)arg2;
- (id)scheduledLocalNotifications;
- (void)scheduledLocalNotificationsWithResult:(id /* block */)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScheduledLocalNotifications:(id)arg1;
- (void)snoozeScheduledLocalNotifications:(id)arg1;
- (void)snoozeScheduledLocalNotifications:(id)arg1 withCompletion:(id /* block */)arg2;

@end