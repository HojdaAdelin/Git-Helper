@echo off
pushd .
cd location
git log > output.log
popd
move /Y location + output.log + " ."