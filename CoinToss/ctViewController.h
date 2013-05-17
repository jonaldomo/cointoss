//
//  ctViewController.h
//  CoinToss
//
//  Created by John Moses on 5/17/13.
//  Copyright (c) 2013 Games. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ctViewController : UIViewController {
    UILabel *status;
    UILabel *result;
}

@property (nonatomic, retain) IBOutlet UILabel * status;
@property (nonatomic, retain) IBOutlet UILabel *result;

- (IBAction)callHeads;
- (IBAction)callTails;

@end
