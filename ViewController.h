//
//  ViewController.h
//  neubauer
//
//  Created by dermit on 21/07/2013.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    IBOutlet UILabel *pantalla;
    IBOutlet UITextField *input1;
    IBOutlet UITextField *input2;
    IBOutlet UITextField *input3;
    IBOutlet UITextField *input4;
}

@property (nonatomic, retain) UILabel *pantalla;
@property (nonatomic, retain) UITextField *input1;
@property (nonatomic, retain) UITextField *input2;
@property (nonatomic, retain) UITextField *input3;
@property (nonatomic, retain) UITextField *input4;

-(IBAction)cells:(id)sender;
  
@end
