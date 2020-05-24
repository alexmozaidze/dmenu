/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                 /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                  /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};

static const char black[]           = "#282C34";
static const char lighter_black[]   = "#646E82";
static const char gray[]            = "#ABB2BF";
static const char blue[]            = "#61AFEF";
static const char red[]             = "#E06C75";
static const char purple[]          = "#C678DD";
static const char green[]           = "#98C379";
static const char yellow[]          = "#E5C07B";
static const char cyan[]            = "#56B6C2";
static const char white[]           = "#F0F2F4";

static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                        fg         bg       */
	[SchemeNorm]          = { gray,      black },
	[SchemeSel]           = { white,     red   },
	[SchemeSelHighlight]  = { red,       black },
	[SchemeNormHighlight] = { red,       black },
	[SchemeOut]           = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
