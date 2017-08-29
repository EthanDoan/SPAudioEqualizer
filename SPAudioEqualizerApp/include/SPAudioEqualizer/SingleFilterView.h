//
//  SingleFilterView.h
//  AudioConfigurator
//
//  Created by Doan Phuong on 8/25/17.
//  Copyright © 2017 Phuong Doan. All rights reserved.
//

#import <UIKit/UIKit.h>
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
#define VERTICAL_MARGIN 8.0f
#define HORIZONTAL_MARGIN 8.0f
#define DEFAULT_HEIGHT 210.0f
#define DEFAULT_CELL_HEIGHT 30.0f
#define DEFAULT_VALUE_LABEL_WIDTH 40.0f


@interface SingleFilterView : UIView

@property (strong, nonatomic) UILabel *nameLabel;
@property (strong, nonatomic) UISegmentedControl *segmentedControl;
@property (strong, nonatomic) UISwitch *filterSwitch;
@property (strong, nonatomic) UISlider *firstSlider;
@property (strong, nonatomic) UISlider *secondSlider;
@property (strong, nonatomic) UISlider *thirdSlider;

@property (strong, nonatomic) UILabel *firstSliderNameLabel;
@property (strong, nonatomic) UILabel *secondSliderNameLabel;
@property (strong, nonatomic) UILabel *thirdSliderNameLabel;

@property (strong, nonatomic) UILabel *firstValueLabel;
@property (strong, nonatomic) UILabel *secondValueLabel;
@property (strong, nonatomic) UILabel *thirdValueLabel;
@property (strong, nonatomic) NSString *filterName;
@property (strong, nonatomic) NSMutableArray *colors;

- (instancetype)initWithName:(NSString *)filterName;
- (void)disableAllViewControls;
- (void)enableAllViewControls;

@end
