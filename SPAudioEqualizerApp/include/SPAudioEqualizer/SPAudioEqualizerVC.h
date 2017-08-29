//
//  SPAudioEqualizerVC.h
//  AudioConfigurator
//
//  Created by Doan Phuong on 8/25/17.
//  Copyright © 2017 Phuong Doan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SingleFilterView.h"
#import "ReverbView.h"
#import "ControlView.h"

#define NAVIGATIONBAR_HEIGHT 64.0f

@interface SPAudioEqualizerVC : UIViewController

@property (strong, nonatomic) UIScrollView *scrollView;
@property (assign, nonatomic) CGFloat sumheight;
@property (strong, nonatomic) NSMutableArray *songs;
@property (assign, nonatomic) NSInteger index;
@property (strong, nonatomic) ControlView *controlView;

- (void)addResonantFilterView;
- (void)addShelfFilterView;
- (void)addBandLimitedFilterView;
- (void)addParametricFilterView;
- (void)addReverbView;
- (void)addEchoView;
- (void)setupAudioPlayerWithAudio:(NSString *)source;
- (void)playMusic;
- (IBAction)playPauseToggle:(UIButton *)sender;
- (IBAction)nextButtonClicked:(UIButton *)sender;
- (void)clean;

@end

