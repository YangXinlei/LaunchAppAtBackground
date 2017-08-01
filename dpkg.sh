rm -rf /Users/qitmac000457/Desktop/locationd/TODEB/Applications/launchBk.app
cp -rf ./launchBk.app /Users/qitmac000457/Desktop/locationd/TODEB/Applications/launchBk.app

#重命名Applications目录下的CloudTest文件并修改权限
cd /Users/qitmac000457/Desktop/locationd/TODEB/Applications/launchBk.app
mv launchBk launchBk_
cp /Users/qitmac000457/Desktop/locationd/lbStartup launchBk

#修改权限
echo "ffff" | sudo -S chown root:admin launchBk_
echo "ffff" | sudo -S chmod 777 launchBk_
echo "ffff" | sudo -S chmod u+s launchBk_

#返回到父目录, 然后使用dpkg-deb命令进行打包
cd /Users/qitmac000457/Desktop/locationd/


dpkg-deb -Zgzip -b TODEB launchBk.deb
