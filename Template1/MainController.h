//
//  MainController.h
//  Template1
//
//  Created by IRSHAD PC on 22/10/14.
//  Copyright (c) 2014 IRSHAD PC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Setting.h"

@interface MainController : UIViewController<UITableViewDelegate,UITableViewDataSource> {
    
    IBOutlet UITableView *MIMtableView;
    IBOutlet UIToolbar *MIMtoolbar;
    IBOutlet UISegmentedControl *MIMsegmentControl;
    IBOutlet UISearchBar *MIMsearchBar;
    IBOutlet UIView *MIMview;

    
    
    //TableView Related
    NSMutableArray *sectionArray;
    NSMutableArray *cellArray;
    NSMutableArray *cellCount;
    
}
@property(nonatomic,retain)IBOutlet UITableView *MIMtableView;
@property(nonatomic,retain)IBOutlet UIToolbar *MIMtoolbar;
@property(nonatomic,retain)IBOutlet UISegmentedControl *MIMsegmentControl;
@property(nonatomic,retain)IBOutlet UISearchBar *MIMsearchBar;
@property(nonatomic,retain)IBOutlet UIView *MIMview;

-(IBAction)savePressed:(id)sender;
-(IBAction)printPressed:(id)sender;
@end
