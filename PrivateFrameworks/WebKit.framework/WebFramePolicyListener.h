/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {
    struct RefPtr<WebCore::Frame> { 
        struct Frame {} *m_ptr; 
    } _frame;

  /* Unexpected information at end of encoded ivar type: @"WebFrame" */
  /* Error parsing encoded ivar type info:  */
    /* Warning: Unrecognized filer type: '' using 'void*' */ void*_policyFunction;

}

+ (void)initialize;

- (void)receivedPolicyDecision:(int)arg1;
- (id)initWithFrame:(struct Frame { unsigned int x1; struct HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct FrameDestructionObserver {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct Page {} *x3; struct FrameTree { struct Frame {} *x_4_1_1; struct Frame {} *x_4_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_4_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_4_1_4; struct RefPtr<WebCore::Frame> { struct Frame {} *x_5_2_1; } x_4_1_5; struct Frame {} *x_4_1_6; struct RefPtr<WebCore::Frame> { struct Frame {} *x_7_2_1; } x_4_1_7; struct Frame {} *x_4_1_8; unsigned int x_4_1_9; } x4; struct FrameLoader { struct Frame {} *x_5_1_1; struct FrameLoaderClient {} *x_5_1_2; struct OwnPtr<WebCore::PolicyChecker> { struct PolicyChecker {} *x_3_2_1; } x_5_1_3; struct OwnPtr<WebCore::HistoryController> { struct HistoryController {} *x_4_2_1; } x_5_1_4; struct ResourceLoadNotifier { struct Frame {} *x_5_2_1; } x_5_1_5; struct SubframeLoader { boolx_6_2_1; struct Frame {} *x_6_2_2; } x_5_1_6; struct FrameLoaderStateMachine { int x_7_2_1; } x_5_1_7; struct OwnPtr<WebCore::IconController> { struct IconController {} *x_8_2_1; } x_5_1_8; struct MixedContentChecker { struct Frame {} *x_9_2_1; } x_5_1_9; struct OwnPtr<WebCore::FrameLoader::FrameProgressTracker> { struct FrameProgressTracker {} *x_10_2_1; } x_5_1_10; int x_5_1_11; int x_5_1_12; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_13_2_1; } x_5_1_13; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_14_2_1; } x_5_1_14; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_15_2_1; } x_5_1_15; boolx_5_1_16; boolx_5_1_17; boolx_5_1_18; boolx_5_1_19; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_20_2_1; } x_5_1_20; boolx_5_1_21; boolx_5_1_22; boolx_5_1_23; int x_5_1_24; boolx_5_1_25; struct RefPtr<WebCore::SerializedScriptValue> { struct SerializedScriptValue {} *x_26_2_1; } x_5_1_26; boolx_5_1_27; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_28_2_1; unsigned int x_28_2_2 : 1; unsigned int x_28_2_3 : 1; int x_28_2_4; int x_28_2_5; int x_28_2_6; int x_28_2_7; int x_28_2_8; int x_28_2_9; int x_28_2_10; int x_28_2_11; int x_28_2_12; int x_28_2_13; } x_5_1_28; struct Timer<WebCore::FrameLoader> { int (**x_29_2_1)(); double x_29_2_2; double x_29_2_3; double x_29_2_4; int x_29_2_5; unsigned int x_29_2_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_29_2_7; struct FrameLoader {} *x_29_2_8; } x_5_1_29; boolx_5_1_30; boolx_5_1_31; struct Frame {} *x_5_1_32; struct HashSet<WebCore::Frame *, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> > { struct HashTable<WebCore::Frame *, WebCore::Frame *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> > { struct Frame {} **x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_33_2_1; } x_5_1_33; boolx_5_1_34; boolx_5_1_35; boolx_5_1_36; int x_5_1_37; struct RefPtr<WebCore::FrameNetworkingContext> { struct FrameNetworkingContext {} *x_38_2_1; } x_5_1_38; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_39_2_1; unsigned int x_39_2_2 : 1; unsigned int x_39_2_3 : 1; int x_39_2_4; int x_39_2_5; int x_39_2_6; int x_39_2_7; int x_39_2_8; int x_39_2_9; int x_39_2_10; int x_39_2_11; int x_39_2_12; int x_39_2_13; } x_5_1_39; struct RefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x_40_2_1; } x_5_1_40; struct OwnPtr<WebCore::PageActivityAssertionToken> { struct PageActivityAssertionToken {} *x_41_2_1; } x_5_1_41; boolx_5_1_42; } x5; struct NavigationScheduler { struct Frame {} *x_6_1_1; struct Timer<WebCore::NavigationScheduler> { int (**x_2_2_1)(); double x_2_2_2; double x_2_2_3; double x_2_2_4; int x_2_2_5; unsigned int x_2_2_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_2_2_7; struct NavigationScheduler {} *x_2_2_8; } x_6_1_2; struct OwnPtr<WebCore::ScheduledNavigation> { struct ScheduledNavigation {} *x_3_2_1; } x_6_1_3; } x6; struct HTMLFrameOwnerElement {} *x7; struct RefPtr<WebCore::FrameView> { struct FrameView {} *x_8_1_1; } x8; struct RefPtr<WebCore::Document> { struct Document {} *x_9_1_1; } x9; struct OwnPtr<WebCore::ScriptController> { struct ScriptController {} *x_10_1_1; } x10; struct OwnPtr<WebCore::Editor> { struct Editor {} *x_11_1_1; } x11; struct OwnPtr<WebCore::FrameSelection> { struct FrameSelection {} *x_12_1_1; } x12; struct OwnPtr<WebCore::EventHandler> { struct EventHandler {} *x_13_1_1; } x13; struct OwnPtr<WebCore::AnimationController> { struct AnimationController {} *x_14_1_1; } x14; struct Timer<WebCore::Frame> { int (**x_15_1_1)(); double x_15_1_2; double x_15_1_3; double x_15_1_4; int x_15_1_5; unsigned int x_15_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_15_1_7; struct Frame {} *x_15_1_8; } x15; float x16; struct IntPoint { int x_17_1_1; int x_17_1_2; } x17; struct ViewportArguments { int x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; float x_18_1_5; float x_18_1_6; float x_18_1_7; float x_18_1_8; float x_18_1_9; float x_18_1_10; float x_18_1_11; float x_18_1_12; } x18; boolx19; struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_1_2_1; int x_1_2_2; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; } x_20_1_1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_2_2_1; int x_2_2_2; unsigned int x_2_2_3 : 3; unsigned int x_2_2_4 : 1; } x_20_1_2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_3_2_1; int x_3_2_2; unsigned int x_3_2_3 : 3; unsigned int x_3_2_4 : 1; } x_20_1_3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_4_2_1; int x_4_2_2; unsigned int x_4_2_3 : 3; unsigned int x_4_2_4 : 1; } x_20_1_4; int x_20_1_5; int x_20_1_6; unsigned int x_20_1_7 : 1; unsigned int x_20_1_8 : 1; } x20; struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_1_2_1; int x_1_2_2; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; } x_21_1_1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_2_2_1; int x_2_2_2; unsigned int x_2_2_3 : 3; unsigned int x_2_2_4 : 1; } x_21_1_2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_3_2_1; int x_3_2_2; unsigned int x_3_2_3 : 3; unsigned int x_3_2_4 : 1; } x_21_1_3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_4_2_1; int x_4_2_2; unsigned int x_4_2_3 : 3; unsigned int x_4_2_4 : 1; } x_21_1_4; int x_21_1_5; int x_21_1_6; unsigned int x_21_1_7 : 1; unsigned int x_21_1_8 : 1; } x21; float x22; float x23; float x24; int x25; boolx26; int x27; float x28; boolx29; int x30; }*)arg1 policyFunction:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg2;
     /* Encoded args for previous method: @20@0:4^{Frame=I{HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >={HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >=^^{FrameDestructionObserver}iiii}}^{Page}{FrameTree=^{Frame}^{Frame}{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{RefPtr<WebCore::Frame>=^{Frame}}^{Frame}{RefPtr<WebCore::Frame>=^{Frame}}^{Frame}I}{FrameLoader=^{Frame}^{FrameLoaderClient}{OwnPtr<WebCore::PolicyChecker>=^{PolicyChecker}}{OwnPtr<WebCore::HistoryController>=^{HistoryController}}{ResourceLoadNotifier=^{Frame}}{SubframeLoader=B^{Frame}}{FrameLoaderStateMachine=i}{OwnPtr<WebCore::IconController>=^{IconController}}{MixedContentChecker=^{Frame}}{OwnPtr<WebCore::FrameLoader::FrameProgressTracker>=^{FrameProgressTracker}}ii{RefPtr<WebCore::DocumentLoader>=^{DocumentLoader}}{RefPtr<WebCore::DocumentLoader>=^{DocumentLoader}}{RefPtr<WebCore::DocumentLoader>=^{DocumentLoader}}BBBB{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}BBBiB{RefPtr<WebCore::SerializedScriptValue>=^{SerializedScriptValue}}B{KURL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{Timer<WebCore::FrameLoader>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}^{FrameLoader}}BB^{Frame}{HashSet<WebCore::Frame *, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> >={HashTable<WebCore::Frame *, WebCore::Frame *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> >=^^{Frame}iiii}}BBBi{RefPtr<WebCore::FrameNetworkingContext>=^{FrameNetworkingContext}}{KURL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{RefPtr<WebCore::HistoryItem>=^{HistoryItem}}{OwnPtr<WebCore::PageActivityAssertionToken>=^{PageActivityAssertionToken}}B}{NavigationScheduler=^{Frame}{Timer<WebCore::NavigationScheduler>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}^{NavigationScheduler}}{OwnPtr<WebCore::ScheduledNavigation>=^{ScheduledNavigation}}}^{HTMLFrameOwnerElement}{RefPtr<WebCore::FrameView>=^{FrameView}}{RefPtr<WebCore::Document>=^{Document}}{OwnPtr<WebCore::ScriptController>=^{ScriptController}}{OwnPtr<WebCore::Editor>=^{Editor}}{OwnPtr<WebCore::FrameSelection>=^{FrameSelection}}{OwnPtr<WebCore::EventHandler>=^{EventHandler}}{OwnPtr<WebCore::AnimationController>=^{AnimationController}}{Timer<WebCore::Frame>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}^{Frame}}f{IntPoint=ii}{ViewportArguments=ifffffffffff}B{VisibleSelection={Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}iib1b1}{VisibleSelection={Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}iib1b1}fffiBifBi}812 */

- (void)continue;
- (void)ignore;
- (void)use;
- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)download;

@end
