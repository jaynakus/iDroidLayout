//
//  IDLViewFactory.h
//  iDroidLayout
//
//  Created by Tom Quist on 22.07.12.
//  Copyright (c) 2012 Tom Quist. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol IDLViewFactory <NSObject>

- (UIView *)onCreateViewWithName:(NSString *)name attributes:(NSDictionary *)attributes;

@end
