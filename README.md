# LaunchAppAtBackground
（越狱开发）给定bundle id 一键唤醒到后台

看了下locationd的头文件，CLApplicationLifecycleManagerAdapter 有个 launchApplication: 方法，可以把App一键唤醒到后台。

监听了显著位置变化的App，当有位置变化时系统（应该是）使用此方法唤醒的App

![ui](https://github.com/YangXinlei/LaunchAppAtBackground/blob/master/ui.jpeg)
