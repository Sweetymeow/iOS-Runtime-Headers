/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKSearchRequesterDelegate>, GMMRequester;



@interface MKSearchRequester : NSObject <PBRequesterDelegate>
{
    <MKSearchRequesterDelegate> *_delegate;
    GMMRequester *_requester;
    NSInteger _defaultSearchResultType;
}

@property id delegate;


- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithSearchDelegate:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 defaultSearchResultType:(NSInteger)arg2;
- (void)requesterDidFinish:(id)arg1;
- (void)requesterDidCancel:(id)arg1;

@end