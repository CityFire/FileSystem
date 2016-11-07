//
//  FileViewController.h
//  FileSystem
//
//  Created by wjc on 15/12/5.
//  Copyright © 2015年 wjc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "File.h"

@interface FileViewController : UIViewController

/**
 *  根节点
 */
@property (nonatomic, strong) File *rootFile;

@end
