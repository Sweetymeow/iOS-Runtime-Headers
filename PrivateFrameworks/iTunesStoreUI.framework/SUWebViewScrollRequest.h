/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SUDOMElement;



@interface SUWebViewScrollRequest : NSObject 
{
    BOOL _animated;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    SUDOMElement *_element;
}

@property(retain) SUDOMElement *element;
@property(copy) ? *completionHandler;
@property BOOL animated;


- (id)element;
- (void)setElement:(id)arg1;
- (id)completionHandler;
- (void)setCompletionHandler:(id)arg1;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
- (void)dealloc;

@end