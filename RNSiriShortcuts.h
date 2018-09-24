#import <Foundation/Foundation.h>
#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

@interface RNSiriShortcuts : NSObject <RCTBridgeModule>

@property NSUserActivity *lastRNSiriShortcuts;
@property NSMutableArray* lastUserActivities;

@end
