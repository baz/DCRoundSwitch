//
//  DCRoundSwitchDemoViewController.h
//
//  Created by Patrick Richards on 6/07/11.
//  MIT License.
//
//  http://twitter.com/patr
//  http://domesticcat.com.au/projects
//  http://github.com/domesticcatsoftware/DCRoundSwitch
//

#import <UIKit/UIKit.h>
#import "DCRoundSwitch.h"

@interface DCRoundSwitchDemoViewController : UIViewController
{
}

@property (nonatomic, strong) IBOutlet DCRoundSwitch *switch1;
@property (nonatomic, strong) IBOutlet DCRoundSwitch *switch2;
@property (nonatomic, strong) IBOutlet DCRoundSwitch *switch3;

@property (nonatomic, strong) IBOutlet DCRoundSwitch *longSwitch;
@property (nonatomic, strong) IBOutlet DCRoundSwitch *fatSwitch;

@end
