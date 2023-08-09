@echo off
pushd .
cd %1
git status > output.log
popd
move /Y %2 .
