//
//  iAdsAddon.h
//

#import "CodeaAddon.h"

#import <Foundation/Foundation.h>
#import <iAd/iAd.h>

@interface iAdsAddon : CodeaAddon<ADBannerViewDelegate>

+ (instancetype) sharedInstance;

@end

