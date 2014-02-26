//
//  DetailViewController.h
//  BlogReader
//
//  Created by Justin Cano on 2/25/14.
//  Copyright (c) 2014 Justin Cano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
