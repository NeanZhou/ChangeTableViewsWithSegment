//
//  NEANTableView.h
//  test
//
//  Created by Nean on 2017/1/17.
//  Copyright © 2017年 Nean. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface NEANTableView : UITableView<UITableViewDelegate, UITableViewDataSource>

/** 创建NEANTableView
 *
 *  array: xib中cell所在顺序的数组; 
 *         例如：想要按照第0、第2、第1的顺序加载xib中的cell，
 *         则array = [NSMutableArray arrayWithObjects:@0, @2, @1, nil];
 *  width: tableView的宽度
 *
 *  注意： 1. NEANTableView高度由cell的高度以及个数决定,即(cell高度 * cell个数)；
 *  注意： 2. 默认NEANTableView不可滚动;
 *  注意： 3. 记得在NEANTableViewCell.xib中设置cell的identifier;
 *
 */
+ (instancetype)tableViewWithCellsIndexArray:(NSMutableArray *)array width:(CGFloat)width;

// 获取tableView中对应section的row的cell中的textField
- (UITextField *)getTextFieldWithRow:(NSInteger)row inSection:(NSInteger)section;

@end