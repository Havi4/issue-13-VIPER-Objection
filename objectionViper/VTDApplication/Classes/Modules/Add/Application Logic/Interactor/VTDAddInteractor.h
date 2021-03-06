//
//  VTDAddInteractor.h
//  objectionViper
//
//  Created by 崔 明辉 on 15/1/21.
//  Copyright (c) 2015年 多玩事业部 iOS开发组 YY Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VTDAddDataManager.h"

@interface VTDAddInteractor : NSObject

@property (nonatomic, strong) VTDAddDataManager *dataManager;

- (void)saveNewEntryWithName:(NSString *)name dueDate:(NSDate *)dueDate;

@end
