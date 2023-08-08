@echo off
pushd .
cd C:\Users\SaveNet
git add .
git commit -m "Enter button" > output.log 2>&1
git push >> output.log 2>&1
popd
move /Y C:\Users\SaveNet\output.log
