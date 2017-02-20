/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLocationSeriesQueryServer : HDQueryServer {
    unsigned int  _batchCount;
    NSObject<OS_dispatch_queue> * _batchQueue;
    HKLocationSeriesSample * _locationSeries;
}

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

@end