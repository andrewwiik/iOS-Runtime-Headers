/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class CPPage, CPObject, NSMutableArray, CPDocument;



@interface CPObject : NSObject <NSCopying>
{
    CPObject *parent;
    NSMutableArray *children;
    CPDocument *document;
    CPPage *page;
    long zOrder;
}


- (void)add:(id)arg1;
- (id)previousSibling;
- (void)remove;
- (void)removeAll;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)lastChild;
- (id)firstChild;
- (id)nextSibling;
- (NSUInteger)count;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)performSelector:(SEL)arg1;
- (void)dealloc;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)setDocument:(id)arg1;
- (id)document;
- (id)parent;
- (void)addChildren:(id)arg1;
- (id)childAtIndex:(NSUInteger)arg1;
- (void)setParent:(id)arg1;
- (id)children;
- (NSUInteger)indexOf:(id)arg1;
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;
- (id)childrenOfClass:(Class)arg1;
- (void)disposeDescendants;
- (id)copyWithoutChildren;
- (id)copyAndSplitChildrenAtIndex:(NSUInteger)arg1;
- (id)lastSibling;
- (id)firstSibling;
- (void)add:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)removeLastChild;
- (void)promoteChildren;
- (id)ancestorOfClass:(Class)arg1;
- (void)childrenOfClass:(Class)arg1 into:(id)arg2;
- (id)childrenNotOfClass:(Class)arg1;
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 last:(BOOL)arg4;
- (void)mapSafely:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;
- (void)map:(SEL)arg1 target:(id)arg2;
- (void)map:(SEL)arg1 target:(id)arg2 last:(BOOL)arg3;
- (id)descendantsOfClass:(Class)arg1 deep:(BOOL)arg2;
- (void)descendantsOfClass:(Class)arg1 to:(id)arg2;
- (id)descendantsOfClass:(Class)arg1;
- (id)shallowDescendantsOfClass:(Class)arg1;
- (id)descendantsOfClass:(Class)arg1 omitTraversing:(Class)arg2;
- (id)firstDescendantOfClass:(Class)arg1;
- (id)lastDescendantOfClass:(Class)arg1;
- (NSUInteger)countOfFirstDescendantsOfClass:(Class)arg1;
- (void)accept:(id)arg1;
- (void)recomputeZOrder;
- (void)setZOrder:(long)arg1;
- (void)clearCachedInfo;
- (id)firstDescendantsOfClass:(Class)arg1;
- (NSInteger)depth;
- (void)updateZOrder:(long)arg1;
- (NSUInteger)countOfClass:(Class)arg1;
- (void)addChildrenOf:(id)arg1;
- (id)takeChildren;
- (long)zOrder;
- (void)removeFirstChild;
- (void)remove:(id)arg1;
- (void)setPage:(id)arg1;
- (id)page;

@end