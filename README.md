# LaunchAppAtBackground
（越狱开发）给定bundle id 一键唤醒到后台

原理：
dump了下locationd的头文件，CLApplicationLifecycleManagerAdapter 有个 launchApplication: 方法，可以把App一键唤醒到后台。

用途：
监听了显著位置变化的App，当有位置变化时系统（应该是）使用此方法唤醒的App，但是需要等待5分钟才能唤醒一次，调试起来确实麻烦。如果设备刚好是越狱的，可以使用此插件一键唤醒喽

![ui](https://github.com/YangXinlei/LaunchAppAtBackground/blob/master/ui.jpeg)
