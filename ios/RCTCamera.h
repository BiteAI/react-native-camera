#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "CameraFocusSquare.h"
#import <React/RCTComponent.h>

@class RCTCameraManager;

@interface RCTCamera : UIView

@property (nonatomic, strong) RCTDirectEventBlock onFocusChanged;
@property (nonatomic, strong) RCTDirectEventBlock onZoomChanged;

- (id)initWithManager:(RCTCameraManager*)manager bridge:(RCTBridge *)bridge;

@end
