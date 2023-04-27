#!/bin/bash
mv .xinitrc ~/.xinitrc
echo "amixer set 'PGA1.0 1 Master' 1%+" > /sbin/upvol
echo "amixer set 'PGA1.0 1 Master' 1%-" > /sbin/downvol
echo "amixer set 'PGA1.0 1 Master' 0" > /sbin/mutevol
git clone https://github.com/eupnea-linux/audio-scripts
cd audio-scripts
./setup-audio
