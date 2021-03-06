/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGQPStoredMessage : NSObject {
    NSString * _content;
    struct SGUnixTimestamp_ { 
        double secondsFromUnixEpoch; 
    }  _creationTimestamp;
    bool  _isSent;
    SGQPWordBoundaries * _wordBoundaries;
}

@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) struct SGUnixTimestamp_ { double x1; } creationTimestamp;
@property (nonatomic, readonly) bool isSent;
@property (nonatomic, readonly) SGQPWordBoundaries *wordBoundaries;

+ (id)messageWithContent:(id)arg1 isSent:(bool)arg2;
+ (id)messageWithContent:(id)arg1 isSent:(bool)arg2 creationTimestamp:(struct SGUnixTimestamp_ { double x1; })arg3;
+ (id)sortByCreationDesc:(id)arg1;

- (void).cxx_destruct;
- (id)content;
- (struct SGUnixTimestamp_ { double x1; })creationTimestamp;
- (id)description;
- (id)init;
- (id)initWithContent:(id)arg1 isSent:(bool)arg2 creationTimestamp:(struct SGUnixTimestamp_ { double x1; })arg3;
- (bool)isMostRecentReceivedMessageInMessages:(id)arg1;
- (bool)isMostRecentSentMessageInMessages:(id)arg1;
- (bool)isSent;
- (id)wordBoundaries;

@end
