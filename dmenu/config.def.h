/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {	"Liberation Mono:size=16" };

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */

	[SchemeNorm] = { "#ECEFF4", "#2E3440" },
	[SchemeSel]  = {"#2E3440" , "#88C0D0" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* dmx is pixels from left 2 right, dmy is pixels from top to bottom, dmw is width in pixels, lineheight is height in pixels */
static unsigned int lineheight = 33;
static unsigned int min_lineheight =32;
static int dmx = 0;
static int dmy = 0;
static int dmw = 1366;
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
