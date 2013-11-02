//
//  MAWDetailViewController.h
//  ControllingSource
//
//  Created by michael wasserman on 11/2/2013.
//  Copyright (c) 2013 michael wasserman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MAWDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
