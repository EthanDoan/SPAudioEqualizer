//
//  ControlView.h
//  AudioConfigurator
//
//  Created by Doan Phuong on 8/28/17.
//  Copyright © 2017 Phuong Doan. All rights reserved.
//

#import <UIKit/UIKit.h>

#define CONTROL_VIEW_HEIGHT 60.0f

@interface ControlView : UIView

@property (strong, nonatomic) UIButton *playPause;
@property (strong, nonatomic) UIButton *next;
@property (strong, nonatomic) UILabel *nameLabel;

@end
