/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoComposition, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVVideoCompositionRenderContextInternal : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct { 
        int horizontalSpacing; 
        int verticalSpacing; 
    struct { 
        float left; 
        float top; 
        float right; 
        float bottom; 
    struct { 
        int width; 
        int height; 
    NSDictionary *_basisProperties;
    struct __CFDictionary { } *_cleanApertureDict;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    NSDictionary *_destinationDesiredPixelBufferAttributes;
    } _destinationPixelBufferDimensions;
    } _edgeWidths;
    BOOL _highQualityRendering;
    } _pixelAspectRatio;
    struct __CFDictionary { } *_pixelAspectRatioDict;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    NSObject<OS_dispatch_queue> *_pixelBufferPoolQ;
    float _renderScale;
    } _renderTransform;
    } _size;
    AVVideoComposition *_videoComposition;
}

- (void)_willDeallocOrFinalize;
- (void)dealloc;
- (void)finalize;

@end