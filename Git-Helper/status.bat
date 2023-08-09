@echo off
pushd .
cd "C:\Users\adeli\Git-Helper"
git pull > output.log
popd
move /Y "C:\Users\adeli\Git-Helper\output.log" .
