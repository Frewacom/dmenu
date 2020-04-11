/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;
static const char *prompt      = NULL;
static const char worddelimiters[] = " ";
static const unsigned int bgalpha = 225;
static const unsigned int fgalpha = OPAQUE;
static unsigned int lines      = 0;

/* Settings loaded from Xresources */
static char font[] = "Noto Sans Mono Medium:style=Regular:size=9:antialias=true:autohint=true";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	/*		fgalpha		bgalphga	*/
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel] = { fgalpha, bgalpha },
	[SchemeOut] = { fgalpha, bgalpha },
};

