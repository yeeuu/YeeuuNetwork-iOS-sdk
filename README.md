# YeeuuNetwork-iOS-sdk

Tags： sdk readme

---

>本sdk为云柚科技锁管理接口sdk
具有：获取用户锁列表，开锁等功能

## 1.使用方式

* 下载 [YeeuuNetwork](https://codeload.github.com/yeeuu/YeeuuNetwork-iOS-sdk/zip/master) 到本地。
* 解压缩后，得到`YeeuuNetwork.framework`文件，把此文件`Copy`到你的iOS项目中。
* 完成以上步骤后，就可以使用`@import YeeuuNetwork`引入云柚sdk并使用了。

## 2.示例代码

```objective-c
//
//  ViewController.m

//引入云柚skd
@import YeeuuNetwork;

-(void)viewWillAppear:(BOOL)animated
{
    //创建YeeuuNetwork实例
    YeeuuNetwork *net = [YeeuuNetwork new];
    
    //获取门锁列表
    //@"yeeToken" 需要替换为您所持有的用户登录token
    //@"hotelid" 需要替换为此用户所在的酒店id
    [net GetLocksWithToken:@"yeeToken"
                   HotelID:@"hotelid"
                   Success:^(NSArray<YeeuuLock *> *Data) {
                                //Data为获取到的YeeuuLock的数组对象
                                do something
                           }
                       Err:^(NSInteger errCode, id errMsg) {
                                //获取门锁过程产生错误
                                do something
                       }];
}

-(IBAction)OnOpen:(id)sender
{
    //创建YeeuuNetwork实例
    YeeuuNetwork *net = [YeeuuNetwork new];
    
    YeeuuLock *lock = ...;
       
    //开锁
    //yeeToken需要替换为您所持有的用户登录token
    //lock为用户当前选择的锁(YeeuuLock)
    [net OpenLockWithToken:@"yeeToken"
                    LockID:lock
                   Success:^(BOOL openSuccess, id msg) {
                       if (openSuccess) {
                           //开锁成功
                           do something
                       } else {
                           //开锁失败
                           do something
                       }
                   }];
}

```




