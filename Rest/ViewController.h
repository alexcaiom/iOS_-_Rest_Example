//
//  ViewController.h
//  Rest
//
//  Created by Alexander Massuda on 30/05/17.
//  Copyright © 2017 alexcaiom. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) IBOutlet UILabel *greetingId;
@property (nonatomic, strong) IBOutlet UILabel *greetingContent;

- (IBAction)fetchGreeting :(id)sender;

@end

