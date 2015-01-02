//
//  ToDoItem.h
//  ToDoList
//
//  Created by Yara Ryan on 2/01/2015.
//  Copyright (c) 2015 Yara Ryan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
