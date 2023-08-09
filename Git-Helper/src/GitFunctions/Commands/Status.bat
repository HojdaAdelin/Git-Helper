@echo off
pushd .
cd location
git status > output.log
popd
move /Y location + output.log + " ."