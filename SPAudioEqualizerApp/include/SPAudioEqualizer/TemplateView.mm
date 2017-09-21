//
//  TemplateView.m
//  AudioConfigurator
//
//  Created by Doan Phuong on 9/20/17.
//  Copyright © 2017 Phuong Doan. All rights reserved.
//

#import "TemplateView.h"

@interface TemplateView ()


@end

@implementation TemplateView

- (instancetype)init {
    self = [super init];
    if (self) {
               
    }
    
    return self;
}

- (void)enabelSectionOne:(BOOL)enable {
    if (enable) {
        _oneBtn.enabled = YES;
        _twoBtn.enabled = YES;
        _firstSegmentedControl.enabled = YES;
        _oneBtn.alpha = 1;
        _twoBtn.alpha = 1;
        
        [self setSectionOneDefaultValue];
        
    } else {
        _oneBtn.enabled = NO;
        _twoBtn.enabled = NO;
        _oneBtn.alpha = 0.4;
        _twoBtn.alpha = 0.4;
        _firstSegmentedControl.enabled = NO;
    }
}

- (void)setSectionOneDefaultValue {
    _oneBtn.selected = NO;
    _oneBtn.backgroundColor = [UIColor lightGrayColor];
    _twoBtn.selected = NO;
    _twoBtn.backgroundColor = [UIColor lightGrayColor];
    _firstSegmentedControl.selectedSegmentIndex = UISegmentedControlNoSegment;
}

- (void)enabelSectionTwo:(BOOL)enable {
    if (enable) {
        _dbSegmentedControl.enabled = YES;
        _frequencySegmentedControl.enabled = YES;
        [self setSectionTwoDefaultValue];
    } else {
        _dbSegmentedControl.enabled = NO;
        _frequencySegmentedControl.enabled = NO;
    }
}

- (void)setSectionTwoDefaultValue {
    
    _dbSegmentedControl.selectedSegmentIndex = 0;
    _frequencySegmentedControl.selectedSegmentIndex = 0;
    
    _templateParametric.filterType = SuperpoweredFilter_Parametric;
    _templateParametric.frequency = 40;
    _templateParametric.octaveWidth = 3.0;
    _templateParametric.dbGain = 9.0;
    NSLog(@"templateParametric default applied");
}

- (IBAction)oneButtonClicked:(UIButton *)sender {
    
    self.oneBtn.selected = !self.oneBtn.selected;
    
    if (self.oneBtn.isSelected) {
        _oneBtn.backgroundColor = [UIColor redColor];
        
        _twoBtn.selected = NO;
        _twoBtn.backgroundColor = [UIColor lightGrayColor];
        
        _templateOneTwo.filterType = SuperpoweredFilter_Resonant_Highpass;
        _templateOneTwo.frequency = 80;
        _templateOneTwo.resonance = 0.1;
        
        NSLog(@"templateOneTwo: Resonant highpass");

    } else {
        
        _oneBtn.backgroundColor = [UIColor lightGrayColor];
        
        NSLog(@"button one is deselected");
    }
    
}

- (IBAction)twoButtonClicked:(UIButton *)sender {
    
    self.twoBtn.selected = !self.twoBtn.selected;
    
    if (self.twoBtn.isSelected) {
        _twoBtn.backgroundColor = [UIColor redColor];
        
        _oneBtn.selected = NO;
        _oneBtn.backgroundColor = [UIColor lightGrayColor];
        
        _templateOneTwo.filterType = SuperpoweredFilter_Resonant_Lowpass;
        _templateOneTwo.frequency = 10000;
        _templateOneTwo.resonance = 0.1;
        
        NSLog(@"templateOneTwo: Resonant lowpass");
        
    } else {
        _twoBtn.backgroundColor = [UIColor lightGrayColor];
        
        NSLog(@"button two is deselected");

    }

}

- (IBAction)firstSegmentedControlValueChanged:(UISegmentedControl *)sender {
    
    switch (sender.selectedSegmentIndex) {
        case 0:
        {
            _templateThreeFour.filterType = SuperpoweredFilter_LowShelf;
            _templateThreeFour.frequency = 1000;
            _templateThreeFour.slope = 0.1;
            _templateThreeFour.dbGain = 7.8;
        }
            break;
        case 1:
        {
            _templateThreeFour.filterType = SuperpoweredFilter_HighShelf;
            _templateThreeFour.frequency = 1000;
            _templateThreeFour.slope = 0.1;
            _templateThreeFour.dbGain = 7.8;
        }
            break;
        case 2:
        {
            _templateFiveSix.filterType = SuperpoweredFilter_Bandlimited_Bandpass;
            _templateFiveSix.frequency = 1000;
            _templateFiveSix.octaveWidth = 2.0;
        }
            break;
        case 3:
        {
            _templateFiveSix.filterType = SuperpoweredFilter_Bandlimited_Notch;
            _templateFiveSix.frequency = 1000;
            _templateFiveSix.octaveWidth = 1.0;
        }
            break;
            
        default:
            break;
    }
    
}

- (IBAction)dbSegmentedControlValueChanged:(UISegmentedControl *)sender {
    
    switch (sender.selectedSegmentIndex) {
        case 0:
        {
            _templateParametric.dbGain = 9.0f;
        }
            break;
        case 1:
        {
            _templateParametric.dbGain = -9.0f;
        }
            break;
        default:
            break;
    }
    
}

- (IBAction)frequencySegmentedControlValueChanged:(UISegmentedControl *)sender {
    switch (sender.selectedSegmentIndex) {
        case 0:
        {
            _templateParametric.frequency = 40;
        }
            break;
        case 1:
        {
            _templateParametric.frequency = 80;
        }
            break;
        case 2:
        {
            _templateParametric.frequency = 125;
        }
            break;
        case 3:
        {
            _templateParametric.frequency = 1000;
        }
            break;
        case 4:
        {
            _templateParametric.frequency = 2500;
        }
            break;
        case 5:
        {
            _templateParametric.frequency = 6300;
        }
            break;
        case 6:
        {
            _templateParametric.frequency = 12500;
        }
            break;
            
        default:
            break;
    }
}

- (IBAction)closeButtonClicked:(UIButton *)sender {
    [self.delegate templateViewDidClose];
}


- (IBAction)firstSwitchValueChanged:(UISwitch *)sender {
    [self enabelSectionOne:sender.isOn];
}
- (IBAction)secondSwitchValueChanged:(UISwitch *)sender {
    [self enabelSectionTwo:sender.isOn];
}




@end
