#import <UIKit/UIKit.h>
@class BirdSighting;
@interface AddSightingViewController : UITableViewController<UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *birdnameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInput;
@property (strong, nonatomic) BirdSighting* birdSighting;
@end
