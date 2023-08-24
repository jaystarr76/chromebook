#!/bin/sh
cp .xinitrc /home/*/.xinitrc
sudo cp scripts/* /bin/*
git clone https://github.com/WeirdTreeThing/chromebook-linux-audio
cd chromebook-linux-audio
./setup-audio
