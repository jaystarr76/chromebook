#!/bin/sh
cp .xinitrc /home/*/.xinitrc
sudo cp scripts/* /bin/*
cd chromebook-linux-audio
./setup-audio
