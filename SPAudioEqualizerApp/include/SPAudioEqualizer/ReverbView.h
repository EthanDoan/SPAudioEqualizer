//
//  ReverbView.h
//  AudioConfigurator
//
//  Created by Doan Phuong on 8/28/17.
//  Copyright © 2017 Phuong Doan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SingleFilterView.h"

#define DEFAULT_REVERB_VALUE_LABEL_WIDTH 30.0f

@interface ReverbView : UIView

@property (strong, nonatomic) UILabel *nameLabel;
@property (strong, nonatomic) UISegmentedControl *segmentedControl;
@property (strong, nonatomic) UISwitch *filterSwitch;
@property (strong, nonatomic) UISlider *firstSlider;
@property (strong, nonatomic) UISlider *secondSlider;
@property (strong, nonatomic) UISlider *thirdSlider;
@property (strong, nonatomic) UISlider *fourthSlider;
@property (strong, nonatomic) UISlider *fifthSlider;
@property (strong, nonatomic) UISlider *sixthSlider;
@property (strong, nonatomic) UILabel *firstValueLabel;
@property (strong, nonatomic) UILabel *secondValueLabel;
@property (strong, nonatomic) UILabel *thirdValueLabel;
@property (strong, nonatomic) UILabel *fourthValueLabel;
@property (strong, nonatomic) UILabel *fifthValueLabel;
@property (strong, nonatomic) UILabel *sixthValueLabel;
@property (strong, nonatomic) UILabel *firstSliderNameLabel;
@property (strong, nonatomic) UILabel *secondSliderNameLabel;
@property (strong, nonatomic) UILabel *thirdSliderNameLabel;
@property (strong, nonatomic) UILabel *fourthSliderNameLabel;
@property (strong, nonatomic) UILabel *fifthSliderNameLabel;
@property (strong, nonatomic) UILabel *sixthSliderNameLabel;


@property (strong, nonatomic) NSString *filterName;
@property (strong, nonatomic) NSMutableArray *colors;

- (instancetype)initWithName:(NSString *)filterName;

- (void)disableAllViewControls;

- (void)enableAllViewControls;

@end
