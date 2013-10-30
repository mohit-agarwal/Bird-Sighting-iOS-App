#import <UIKit/UIKit.h>
@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdSightingDataController* dataController;

-(IBAction)done:(UIStoryboardSegue*)segue;
-(IBAction)cancel:(UIStoryboardSegue*)segue;
@end
