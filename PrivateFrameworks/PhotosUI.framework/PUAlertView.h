/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PUAlertView : UIAlertView <UIAlertViewDelegate> {
    id _completionHandler;
    id _shouldEnableFirstOtherButtonBlock;
    id _willDismissHandler;
}

@property(copy) id completionHandler;
@property(copy) id shouldEnableFirstOtherButtonBlock;
@property(copy) id willDismissHandler;

- (void).cxx_destruct;
- (void)_tearDown;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (id)completionHandler;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4;
- (void)setCompletionHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldEnableFirstOtherButtonBlock:(id)arg1;
- (void)setWillDismissHandler:(id)arg1;
- (id)shouldEnableFirstOtherButtonBlock;
- (void)showWithCompletionHandler:(id)arg1;
- (id)willDismissHandler;

@end
