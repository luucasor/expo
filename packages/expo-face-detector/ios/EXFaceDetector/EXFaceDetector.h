//
//  EXFaceDetector.h
//  EXFaceDetector
//
//  Created by Michał Czernek on 12/04/2019.
//

#import <Foundation/Foundation.h>
#import "Firebase.h"

NS_ASSUME_NONNULL_BEGIN

@interface EXFaceDetector : NSObject

-(instancetype) initWithOptions:(NSDictionary*)options;
-(void) detectFromImage:(UIImage*)image facesTransform:(CGAffineTransform)transform completionListener:(void(^)(NSArray<NSDictionary*>* faces, NSError* error)) completion;
-(void) detectFromBuffer:(CMSampleBufferRef)buffer metadata:(FIRVisionImageMetadata*)metadata facesTransform:(CGAffineTransform)transform completionListener:(void(^)(NSArray<NSDictionary *> *faces, NSError *error))completion;

@end

NS_ASSUME_NONNULL_END
