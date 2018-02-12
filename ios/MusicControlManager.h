#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import <MediaPlayer/MediaPlayer.h>

@interface MusicControlManager : RCTEventEmitter <RCTBridgeModule>
    @property (nonatomic, copy) NSString *artworkUrl;
    @property (nonatomic, assign) BOOL audioInterruptionsObserved;
@end
