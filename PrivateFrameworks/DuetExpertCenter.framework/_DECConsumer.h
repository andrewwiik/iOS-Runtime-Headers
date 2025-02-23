/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECConsumer : NSObject {
    _DECResult *_cachedResult;
    unsigned int _category;
    NSXPCConnection *_connection;
    unsigned int _consumerType;
    id /* block */ _handler;
    unsigned int _limit;
    NSObject<OS_dispatch_queue> *_queue;
    _DECResultNotificationReceiver *_receiver;
    BOOL _startedMonitoring;
}

@property (nonatomic) unsigned int category;

- (void).cxx_destruct;
- (void)_setupConnection;
- (unsigned int)category;
- (void)fetchPredictionsWithLimit:(unsigned int)arg1 handler:(id /* block */)arg2;
- (void)fetchPredictionsWithLimit:(unsigned int)arg1 providesFeedback:(BOOL)arg2 handler:(id /* block */)arg3;
- (id)init;
- (id)initWithCategory:(unsigned int)arg1 consumerType:(unsigned int)arg2;
- (id)initWithCategory:(unsigned int)arg1 consumerType:(unsigned int)arg2 queue:(id)arg3;
- (void)receivePrediction:(id)arg1 consumer:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)setCategory:(unsigned int)arg1;
- (void)startMonitoringForPredictionsWithLimit:(unsigned int)arg1 handler:(id /* block */)arg2;
- (void)stopMonitoringForPredictions;

@end
