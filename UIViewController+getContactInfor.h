//
//  UIViewController+getContactInfor.h
//  CH_GetContactInfor
//
//  Created by mini on 16/8/23.
//  Copyright © 2016年 武汉至简天成科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
/// iOS 9前的框架
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>
/// iOS 9的新框架
#import <ContactsUI/ContactsUI.h>

#define Is_up_Ios_9      ([[UIDevice currentDevice].systemVersion floatValue]) >= 9.0


@interface UIViewController (getContactInfor)<ABPeoplePickerNavigationControllerDelegate,CNContactPickerDelegate>

//通讯录获取联系人信息
- (NSString *)CheckAddressBookAuthorizationandGetPeopleInfor:(void (^)(NSDictionary *data))handler;

@end
