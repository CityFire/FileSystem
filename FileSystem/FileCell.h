//
//  FileCell.h
//  FileSystem
//
//  Created by wjc on 15/12/5.
//  Copyright © 2015年 wjc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "File.h"

@interface FileCell : UITableViewCell

@property (nonatomic, strong) id data;
@property (nonatomic, strong) NSIndexPath *IndexPath;
@property (nonatomic, weak) UITableView *tableView;
@property (nonatomic, weak) UIViewController *controller;

- (void)loadContent;

@end
