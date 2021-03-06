#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern const struct GlobalStateNotificationStruct {
    NSString * _Nonnull infoDidChange;
    NSString * _Nonnull isPlayingDidChange;
} GlobalStateNotification;

@interface GlobalState : NSObject

@property BOOL isPlaying;
@property (nullable) NSString *title;
@property (nullable) NSString *artist;
@property (nullable) NSString *album;
@property (nullable) NSImage *albumArtwork;
@property (nullable) NSString *albumArtworkChecksum;
@property (nullable) NSDate *timestamp;
@property double duration;
@property (nonatomic) double elapsedTime;

#pragma mark - Actions

- (void)togglePlayPause;
- (void)previous;
- (void)next;

@end

NS_ASSUME_NONNULL_END
