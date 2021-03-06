/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKAnchor, VKLayoutContext, VKScreenCanvas;

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        double latitude; 
        double longitude; 
    VKAnchor *_anchor;
    VKScreenCanvas *_canvas;
    BOOL _followsTerrain;
    BOOL _isUpdating;
    } _lastCoordinate;
    VKLayoutContext *_lastLayoutContext;
    double _pointsPerMeter;
    } _screenPointInCanvas;
}

@property VKScreenCanvas * canvas;
@property(readonly) struct { double x1; double x2; } coordinate;
@property BOOL followsTerrain;

- (id).cxx_construct;
- (id)_anchorWithContext:(id)arg1;
- (void)_updateCachedPointWithContext:(id)arg1;
- (void)anchorWorldPointDidChange:(void*)arg1;
- (id)canvas;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (BOOL)followsTerrain;
- (void)layoutWithContext:(id)arg1;
- (struct CGPoint { float x1; float x2; })pointInLayer:(id)arg1;
- (float)pointOffsetForDistanceOffset:(double)arg1;
- (void)setCanvas:(id)arg1;
- (void)setFollowsTerrain:(BOOL)arg1;
- (void)updateIfNeeded;

@end
