#import <UIKit/UIKit.h>
#import "JCDialPad.h"
#import "PKTPhone.h"

@interface PKTCallViewController : UIViewController <JCDialPadDelegate, PKTPhoneDelegate>

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) UILabel  *callStatusLabel;

- (void)setMainText:(NSString *)text;

@end