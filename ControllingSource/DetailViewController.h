//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Brian Pochne on 03/02/14.
//  Copyright (c) 2014 Brian Pochne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
