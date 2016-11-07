//
//  FileViewController.m
//  FileSystem
//
//  Created by wjc on 15/12/5.
//  Copyright © 2015年 wjc. All rights reserved.
//

#import "FileViewController.h"
#import "FileCell.h"

@interface FileViewController ()<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) UITableView *tableView;

@end

@implementation FileViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.title = self.rootFile.name;
    [self initTableView];
}

#pragma mark - tableView相关
- (void)initTableView
{
    self.tableView = [[UITableView alloc] initWithFrame:self.view.bounds style:UITableViewStylePlain];
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    self.tableView.rowHeight = 80.f;
    [self.tableView registerClass:[FileCell class] forCellReuseIdentifier:@"fileCell"];
    
    [self.view addSubview:self.tableView];
}

#pragma mark - UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.rootFile.childFiles.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    FileCell *cell = [tableView dequeueReusableCellWithIdentifier:@"fileCell"];
    cell.IndexPath = indexPath;
    cell.tableView = tableView;
    cell.controller = self;
    
    // 传入节点File
    cell.data = [self.rootFile.childFiles objectAtIndex:indexPath.row];
    [cell loadContent];
    
    return cell;
}


@end
