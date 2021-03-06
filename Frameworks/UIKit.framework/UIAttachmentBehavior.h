/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, PKExtendedPhysicsBody, PKPhysicsJoint;

@interface UIAttachmentBehavior : UIDynamicBehavior {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        unsigned int dampingSet : 1; 
        unsigned int frequencySet : 1; 
        unsigned int lengthSet : 1; 
        unsigned int isRevolute : 1; 
    PKExtendedPhysicsBody *_anchorBody;
    } _anchorPoint;
    } _anchorPointA;
    } _anchorPointB;
    int _attachedBehaviorType;
    float _damping;
    float _frequency;
    PKPhysicsJoint *_joint;
    float _length;
    } _stateFlags;
    int _type;
}

@property struct CGPoint { float x1; float x2; } anchorPoint;
@property(readonly) int attachedBehaviorType;
@property float damping;
@property float frequency;
@property(readonly) NSArray * items;
@property float length;

- (void)_associate;
- (void)_changedParameter;
- (void)_dissociate;
- (void)_reevaluateJoint;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (int)attachedBehaviorType;
- (float)damping;
- (void)dealloc;
- (id)description;
- (float)frequency;
- (id)init;
- (id)initWithItem:(id)arg1 attachedToAnchor:(struct CGPoint { float x1; float x2; })arg2;
- (id)initWithItem:(id)arg1 attachedToItem:(id)arg2;
- (id)initWithItem:(id)arg1 offsetFromCenter:(struct UIOffset { float x1; float x2; })arg2 attachedToAnchor:(struct CGPoint { float x1; float x2; })arg3;
- (id)initWithItem:(id)arg1 offsetFromCenter:(struct UIOffset { float x1; float x2; })arg2 attachedToItem:(id)arg3 offsetFromCenter:(struct UIOffset { float x1; float x2; })arg4;
- (id)initWithItem:(id)arg1 point:(struct CGPoint { float x1; float x2; })arg2 attachedToAnchor:(struct CGPoint { float x1; float x2; })arg3;
- (id)initWithItem:(id)arg1 point:(struct CGPoint { float x1; float x2; })arg2 attachedToItem:(id)arg3 point:(struct CGPoint { float x1; float x2; })arg4;
- (id)items;
- (float)length;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDamping:(float)arg1;
- (void)setFrequency:(float)arg1;
- (void)setLength:(float)arg1;
- (int)type;

@end
