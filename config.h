
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira Code:size=8"
};
static const char *prompt  = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                            fg         bg       */
	[SchemeNorm]          = { "#ebdbb2", "#282828" },
	[SchemeSel]           = { "#282828", "#ebdbb2" },
	[SchemeNormHighlight] = { "#98971a", "#282828" },
	[SchemeSelHighlight]  = { "#282828", "#ebdbb2" },
	[SchemeOut]           = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 4;
