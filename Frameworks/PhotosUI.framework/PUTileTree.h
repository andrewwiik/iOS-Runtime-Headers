/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTileTree : NSObject <NSCopying> {
    NSMutableDictionary *__objectsByIndexPathByTileKindByDataSourceIdentifier;
    BOOL _useUniqueLeafs;
}

@property (nonatomic, readonly) NSMutableDictionary *_objectsByIndexPathByTileKindByDataSourceIdentifier;
@property (nonatomic, readonly) BOOL useUniqueLeafs;

- (void).cxx_destruct;
- (id)_objectsByIndexPathByTileKindByDataSourceIdentifier;
- (void)addObject:(id)arg1 atIndexPath:(id)arg2 tileKind:(id)arg3 dataSourceIdentifier:(id)arg4;
- (BOOL)containsObject:(id)arg1 atIndexPath:(id)arg2 tileKind:(id)arg3 dataSourceIdentifier:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initUsingUniqueLeafs:(BOOL)arg1;
- (id)objectAtIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (id)objectsAtIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1 atIndexPath:(id)arg2 tileKind:(id)arg3 dataSourceIdentifier:(id)arg4;
- (void)removeObjectAtIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (BOOL)useUniqueLeafs;

@end
