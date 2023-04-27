#!/bin/sh
amixer set 'PGA1.0 1 Master' 0% &
picom &
nitrogen --restore &
dwm &
exec slstatus
