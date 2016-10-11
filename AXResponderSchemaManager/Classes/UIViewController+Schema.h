//
//  UIViewController+Schema.h
//  AXViewControllerShema
//
//  Created by devedbox on 2016/10/11.
//  Copyright © 2016年 devedbox. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <UIKit/UIKit.h>

/// URL key of completion key.
extern NSString *_Nonnull const kAXResponderSchemaCompletionURLKey;

@interface UIViewController (Schema)
/// View did appear urr schema.
@property(copy, nonatomic) NSURL *viewDidAppearSchema;
/// Get the view controller for responder schema.
///
/// @param params params of the url object.
///
/// @return a new view controller.
+ (nullable instancetype)viewControllerForSchemaWithParams:(NSDictionary *_Nullable)params;
/// Get the class of navigation controller.
///
/// @return class of navigation controller.
+ (nullable Class)classForNavigationController;
/// Get the instance of view controller for the control identifier.
///
/// @param controlIdentifier a control identifier.
///
/// @return an instance of UIControl.
- (nullable __kindof UIControl *)UIControlOfViewControllerForIdentifier:(NSString *_Nullable)controlIdentifier;
@end