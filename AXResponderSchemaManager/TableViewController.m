//
//  TableViewController.m
//  AXViewControllerShema
//
//  Created by devedbox on 2016/10/11.
//  Copyright © 2016年 devedbox. All rights reserved.
//

#import "TableViewController.h"
#import "AXResponderSchemaManager.h"

@interface TableViewController ()
@end

@implementation TableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
    
    [AXResponderSchemaManager registerSchema:@"viewcontroller1" forClass:@"ViewController1"];
    [AXResponderSchemaManager registerSchema:@"switch" forClass:@"ViewController1"];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    NSLog(@"%s", __FUNCTION__);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    
    switch (indexPath.row) {
        case 0:
            [[AXResponderSchemaManager sharedManager] openURL:[NSURL URLWithString:@"axviewcontrollerschema://viewcontroller/tabbar?navigation=2&selectedindex=1"]];
            break;
        case 1:
            [[AXResponderSchemaManager sharedManager] openURL:[NSURL URLWithString:@"axviewcontrollerschema://viewcontroller/viewcontroller1?navigation=0&animated=1"]];
            break;
        case 2:
            [[AXResponderSchemaManager sharedManager] openURL:[NSURL URLWithString:@"axviewcontrollerschema://viewcontroller/viewcontroller1?navigation=1&animated=1"]];
            break;
        default:
            [[AXResponderSchemaManager sharedManager] openURL:[NSURL URLWithString:[NSString stringWithFormat:@"axviewcontrollerschema://control/switch?navigation=0&animated=1&action=%@", @(1 << 12)]]];
            break;
    }
}

@end