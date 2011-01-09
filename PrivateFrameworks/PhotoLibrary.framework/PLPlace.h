/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MLAlbum, PLPlacesMapAnnotation, NSMutableArray;



@interface PLPlace : NSObject 
{
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _region;
    PLPlacesMapAnnotation *_annotation;
    MLAlbum *_album;
    BOOL _titleIsNumberOfPhotos;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _originalRegion;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _destinationRegion;
    NSMutableArray *_photos;
    BOOL _needsToUpdateAlbumPhotos;
}


- (id)album;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (id)initWithRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)addPhoto:(id)arg1;
- (void)removePhoto:(id)arg1;
- (BOOL)shouldGroupPhoto:(id)arg1;
- (void)setTitleIsNumberOfPhotos:(BOOL)arg1;
- (BOOL)isEqualToPlace:(id)arg1;
- (struct { double x1; double x2; })effectiveLocation;
- (BOOL)hasSameEffectiveLocationAs:(struct { double x1; double x2; })arg1;
- (void)setOriginalRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })originalRegion;
- (void)setDestinationRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })destinationRegion;
- (struct { double x1; double x2; })_placeLocation;
- (void)_setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_createAnnotationWith2DLocation:(struct { double x1; double x2; })arg1 title:(id)arg2 subtitle:(id)arg3;
- (id)_annotationTitleForNumberOfPhotos:(NSUInteger)arg1;
- (void)_updatePlaceToPlace:(id)arg1;
- (id)annotation;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end