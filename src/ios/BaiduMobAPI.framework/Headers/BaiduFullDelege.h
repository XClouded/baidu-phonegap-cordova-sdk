#import <Foundation/Foundation.h>
#import "BaiduMobAdInterstitialDelegate.h"
#import "BaiduAPI.h"
@interface BaiduFullDelege : NSObject <BaiduMobAdInterstitialDelegate>{
}
@property (nonatomic,retain) BaiduAPI* context;
@property (nonatomic,copy) NSString *baiduPublisherID;
@property (nonatomic,copy) NSString *baiduSpecKey;
@end
