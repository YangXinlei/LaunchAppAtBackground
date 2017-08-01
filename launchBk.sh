if [ $# -gt 0 ]; then
    cycmd='[choose(CLApplicationLifecycleManagerAdapter)[0] launchApplication:@"'
    cycmd=$cycmd$1
    cycmd=$cycmd'"]'
    echo $cycmd > tmpcmd.cy
    cycript -p locationd tmpcmd.cy
    rm tmpcmd.cy
else
    echo "usage launchBk [bundle_id]      \n eg. ./launchBk.sh com.qunar.iphoneclientdev"
fi
