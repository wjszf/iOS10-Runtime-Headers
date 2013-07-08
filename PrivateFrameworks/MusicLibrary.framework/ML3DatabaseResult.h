/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3DatabaseStatement, NSDictionary;

@interface ML3DatabaseResult : NSObject  {
    ML3DatabaseStatement *_statement;
    NSDictionary *_columnNameIndexMap;
}

@property(readonly) ML3DatabaseStatement * statement;


- (id)statement;
- (id)columnNameIndexMap;
- (unsigned int)indexForColumnName:(id)arg1;
- (id)initWithStatement:(id)arg1;
- (id)stringValueForFirstRowAndColumn;
- (id)objectForFirstRowAndColumn;
- (BOOL)hasAtLeastOneRow;
- (void)enumerateRowsWithBlock:(id)arg1;
- (long long)int64ValueForFirstRowAndColumn;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)rows;

@end
