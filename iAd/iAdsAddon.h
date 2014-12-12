//
//  iAdsAddon.h
//

#import "CodeaAddon.h"

#import <Foundation/Foundation.h>
#import <iAd/iAd.h>

// This class conforms to the ADBannerViewDelegate Protocols

@interface iAdsAddon : CodeaAddon<ADBannerViewDelegate>

+ (instancetype) sharedInstance;

@property (atomic, assign) BOOL isBannerVisible;
@property (atomic, assign) BOOL showBannerFromTop;
@property (atomic, assign) BOOL adsAllowed;

@property (strong, nonatomic) ADBannerView *bannerView;

// Forward declare our Lua iAd functions. These are static to confine their scope
//  to this file. By default c functions are global.

static int showAdFromTop(struct lua_State *state);
static int showAdFromBottom(struct lua_State *state);
static int hideAd(struct lua_State *state);

@end

