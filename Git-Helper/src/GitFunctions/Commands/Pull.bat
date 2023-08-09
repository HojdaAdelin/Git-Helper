@echo off
pushd .
cd location
git pull > output.log
popd
move /Y location + output.log + " ."