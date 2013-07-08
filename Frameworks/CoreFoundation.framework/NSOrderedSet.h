/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}

+ (id)orderedSetWithObject:(id)arg1;
+ (id)orderedSetWithSet:(id)arg1;
+ (id)orderedSet;
+ (id)orderedSetWithSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1;
+ (id)orderedSetWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
+ (id)orderedSetWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
+ (id)orderedSetWithObjects:(id)arg1;
+ (id)newOrderedSetWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (id)orderedSetWithArray:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)orderedSetWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;

- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)indexesOfObjectsPassingTest:(id)arg1;
- (unsigned int)indexOfObjectPassingTest:(id)arg1;
- (id)reversedOrderedSet;
- (id)reverseObjectEnumerator;
- (BOOL)isSubsetOfOrderedSet:(id)arg1;
- (BOOL)intersectsOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (BOOL)isNSOrderedSet__;
- (id)set;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)objectEnumerator;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)objectPassingTest:(id)arg1;
- (id)objectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)countForObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)allObjects;
- (id)array;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingComparator:(id)arg3;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)initWithArray:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)initWithObjects:(const id*)arg1 count:(unsigned int)arg2;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)getObjects:(id*)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)containsObject:(id)arg1;
- (unsigned int)countForObject:(id)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)firstObject;
- (id)objectsPassingTest:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 options:(unsigned int)arg3 usingComparator:(id)arg4;
- (id)sortedArrayUsingComparator:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (id)initWithSet:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (id)lastObject;
- (id)initWithObjects:(id)arg1;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)_minForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_avgForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned int)arg3 error:(out id*)arg4;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned int)arg3;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned int)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)filteredOrderedSetUsingPredicate:(id)arg1;
- (BOOL)_gkIsEqualToOrderedSet:(id)arg1;
- (id)_gkFirstObject;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkValuesForKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkFilteredOrderedSetUsingPredicate:(id)arg1;
- (id)_gkSortedOrderedSetUsingDescriptors:(id)arg1;
- (unsigned int)pl_indexOfObjectIdenticalTo:(id)arg1;
- (id)pl_shortDescription;
- (BOOL)pl_isSortedUsingComparator:(id)arg1;

@end
