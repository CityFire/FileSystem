//
//  File.h
//  FileSystem
//
//  Created by wjc on 15/12/5.
//  Copyright © 2015年 wjc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, EFile) {
    kFile,   // 文件
    kFolder, // 文件夹
};

@interface File : NSObject

/**
 *  文件夹或者文件的名字，根据EFile类别来区分
 */
@property (nonatomic, strong) NSString *name;

/**
 *  文件类型
 */
@property (nonatomic) EFile fileType;

/**
 *  子文件集合
 */
@property (nonatomic, strong, readonly) NSMutableArray <File *> *childFiles;

/**
 *  添加文件
 *
 *  @param file 文件
 */
- (void)addFile:(File *)file;

/**
 *  便利构造器
 *
 *  @param fileType 文件类型
 *  @param name     文件名字
 *
 *  @return 文件对象
 */
+ (instancetype)fileWithFileType:(EFile)fileType fileName:(NSString *)name;


@end
