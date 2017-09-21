//
//  TemplateView.h
//  AudioConfigurator
//
//  Created by Doan Phuong on 9/20/17.
//  Copyright © 2017 Phuong Doan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SuperpoweredFilter.h"

typedef struct {
    SuperpoweredFilterType filterType;
    float frequency;
    float resonance;
} TemplateOneTwo;

typedef struct {
    SuperpoweredFilterType filterType;
    float frequency;
    float slope;
    float dbGain;
} TemplateThreeFour;

typedef struct {
    SuperpoweredFilterType filterType;
    float frequency;
    float octaveWidth;
} TemplateFiveSix;

typedef struct {
    SuperpoweredFilterType filterType;
    float frequency;
    float octaveWidth;
    float dbGain;
} TemplateParametric;

@protocol TemplateViewDelegate <NSObject>

@required

- (void)templateViewDidClose;
- (void)templateViewValueHasChanged:(NSMutableDictionary *)params;

@end

@interface TemplateView : UIView

@property (weak, nonatomic) IBOutlet UIButton *closeBtn;
@property (weak, nonatomic) IBOutlet UIButton *oneBtn;
@property (weak, nonatomic) IBOutlet UIButton *twoBtn;
@property (weak, nonatomic) IBOutlet UISegmentedControl *firstSegmentedControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *dbSegmentedControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *frequencySegmentedControl;
@property (weak, nonatomic) IBOutlet UISwitch *firstSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *secondSwitch;
@property (assign, nonatomic) TemplateOneTwo templateOneTwo;
@property (assign, nonatomic) TemplateThreeFour templateThreeFour;
@property (assign, nonatomic) TemplateFiveSix templateFiveSix;
@property (assign, nonatomic) TemplateParametric templateParametric;

@property (strong, nonatomic) NSMutableDictionary *params;
@property (weak, nonatomic) id<TemplateViewDelegate>delegate;

@end
