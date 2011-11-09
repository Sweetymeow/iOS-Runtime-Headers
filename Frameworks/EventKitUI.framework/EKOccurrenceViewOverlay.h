/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKOccurrenceViewOverlay : UIView  {
    BOOL _selected;
    BOOL _tentative;
    BOOL _dimmed;
}

@property BOOL selected;
@property BOOL tentative;
@property BOOL dimmed;


- (BOOL)tentative;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDimmed:(BOOL)arg1;
- (id)_tentativeOutline;
- (BOOL)dimmed;
- (void)setTentative:(BOOL)arg1;

@end