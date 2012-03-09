/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPipelineJPEGDecoder : NSObject  {
    struct StackItem { void *x1; struct StackItem {} *x2; } *stackTopBGRA;
    struct StackItem { void *x1; struct StackItem {} *x2; } *stackTop420;
    struct StackItem { void *x1; struct StackItem {} *x2; } *stackTopJPEG;
    struct dispatch_queue_s { } *stackQueueBGRA;
    struct dispatch_queue_s { } *stackQueue420;
    struct dispatch_queue_s { } *stackQueueJPEG;
    struct __CFDictionary { } *acceleratorOptions;
    struct __CFDictionary { } *surfaceBGRAOptions;
    struct CGSize { 
        float width; 
        float height; 
    } imageSize;
    unsigned int requestedImageCount;
    int currentBGRASurfaceCount;
    unsigned int maxJPEGSize;
}

@property unsigned int maxJPEGSize;

+ (void)_pushSurfaceAccelerator:(struct __IOSurfaceAccelerator { }*)arg1;
+ (struct __IOSurfaceAccelerator { }*)_popSurfaceAccelerator;
+ (struct __IOSurfaceAccelerator { }*)_createAccelerator;
+ (struct dispatch_queue_s { }*)_stackQueueTransferSession;

- (void)dealloc;
- (id)newImageFrom420Data:(id)arg1;
- (void)_removeBGRASurface;
- (struct __IOSurface { }*)_createJPEGSurface;
- (struct __IOSurface { }*)_create420Surface;
- (unsigned int)maxJPEGSize;
- (struct __IOSurface { }*)_popBGRASurface;
- (void)_pushJPEGSurface:(struct __IOSurface { }*)arg1;
- (void)_decodeJPEG:(id)arg1 withInputSurface:(struct __IOSurface { }*)arg2 toIOSurface:(struct __IOSurface { }*)arg3;
- (struct __IOSurface { }*)_popJPEGSurfaceOfSize:(unsigned int)arg1;
- (void)_push420Surface:(struct __IOSurface { }*)arg1;
- (id)_newImageFrom420Surface:(struct __IOSurface { }*)arg1;
- (struct __IOSurface { }*)_pop420Surface;
- (void)_receivedMemoryWarning:(id)arg1;
- (void)_pushBGRASurface:(struct __IOSurface { }*)arg1;
- (struct __IOSurface { }*)_createBGRASurface;
- (void)setMaxJPEGSize:(unsigned int)arg1;
- (id)newImageFromJPEGData:(id)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 cachedCount:(int)arg2;

@end