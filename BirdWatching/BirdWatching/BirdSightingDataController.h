#import <Foundation/Foundation.h>
@class BirdSighting;
@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

-(NSUInteger)countOfList;
-(BirdSighting*)objectInListAtIndex:(NSUInteger)theIndex;
-(void)addBirdSightingWithSighting:(BirdSighting*)sighting;

@end
