/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@class NSMutableArray;

@interface PRZhuyinContext : PRAutocorrectionContext  {
    NSMutableArray *_modifications;
    NSMutableArray *_addedModifications;
    NSMutableArray *_removedModifications;
    NSMutableArray *_addedRemovedModifications;
    NSMutableArray *_prefixes;
    char *_buffer;
    unsigned int *_syllableLengthArray;
    void *_connection;
    unsigned int _length;
    unsigned int _lengthBeforeApostrophes;
    unsigned int _startingPoint;
    unsigned int _lastIndexes[4];
    unsigned int _nextIndexes[2];
    unsigned int _startIndex;
    unsigned int _endIndex;
    BOOL _lastSyllableIsPartial;
}


- (void)reset;
- (id)removedModifications;
- (id)addedModifications;
- (id)currentModifications;
- (void)removeNumberOfInputCharacters:(unsigned int)arg1;
- (void)_addInsertions;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3;
- (void)_filterModifications;
- (void)_addDeletions;
- (void)_addReplacements;
- (void)_addTranspositions;
- (void)_advanceIndexes;
- (void)_removeModificationsAndMoveStartingPoint;
- (id)init;
- (void)dealloc;
- (id)description;

@end
