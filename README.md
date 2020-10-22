# DXClickAnimateButton
一个按下带缩放动画效果的UIButton
#### Usage in you Podfile:
```objc
pod 'DXClickAnimateBtnPod'
```
#### 使用方法
```objc
-(DXClickAnimateButton *)nextBtn {
    if (!_nextBtn) {
        WS(weakSelf)
        _nextBtn = [DXClickAnimateButton touchUpOutsideCancelButtonWithType:UIButtonTypeSystem frame:CGRectMake(0, 0, 136, 76) title:@"确定" titleColor:[UIColor whiteColor] backgroundColor:nil backgroundImage:@"auth_redBtn" andBlock:^{
            [weakSelf requestInsideLogin];
        }];
    }
    return _nextBtn;
}

```
#### 效果
![image](https://github.com/wgziOS/DXClickAnimateButton/blob/main/buttonExp.gif)

