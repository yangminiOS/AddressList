AddressList
==================
1.通过分类的模式获取通讯录信息 <br>
   "UIViewController+getContactInfor.h"  <br>
 
2.block的方式回传获取的信息   <br>
   //通讯录获取联系人信息<br>
   - (NSString *)CheckAddressBookAuthorizationandGetPeopleInfor:(void (^)(NSDictionary *data))handler;<br>
   
3不同版本的通讯录信息     <br>
    iOS9.0之前  iOS90.0之后
