/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFMailMessage;

@interface _MFMailComposeAttachmentLoader : NSObject {
    id _content;
    BOOL _isDraft;
    MFMailMessage *_message;
}

- (void)dealloc;
- (id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(BOOL)arg3;
- (void)loadAttachments;

@end
