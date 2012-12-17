//
//  TouchPoint.h
//  Represents a touched point (including scale)
//

#import <Foundation/Foundation.h>

@interface TouchPoint : NSObject
@property (nonatomic, readwrite, assign) CGPoint point;
@property (nonatomic, readwrite, assign) CGFloat scale;
@property (nonatomic, readwrite, assign) NSUInteger tag;

+ (TouchPoint *)touchPointForTouch:(UITouch *)touch inView:(UIView *)view scale:(CGFloat)scale;
@end