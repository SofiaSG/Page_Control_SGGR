//
//  ViewController.h
//  Page_Control
//
//  Created by Sofia Garcia Ramos on 3/11/14.
//  Copyright (c) 2014 Sofia Garcia Ramos. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface ViewController : UIViewController <UIScrollViewDelegate>
@property (strong, nonatomic) IBOutlet UIPageControl *pageCtrl;
@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) IBOutlet UIImageView *img1;
@property (strong, nonatomic) IBOutlet UIImageView *img2;
@property (strong, nonatomic) IBOutlet UIImageView *img3;
@property (strong, nonatomic) IBOutlet UIImageView *img4;

@end
