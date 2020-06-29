// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "weather", 3600, 0},
	{"", "kbmap",	0,	3},
	{"",	"internaltemp",	10,	0},
	{"",	"i3pacupd",		14400,	2},
	/* {"",	"memory",	10,	14}, */
	/* {"",	"cpu",		10,	18}, */
	/* {"",	"moonphase",	18000,	17}, */
	{"",	"network",	3,	0},
	{"",	"volume",	0,	1},
	{"",	"battery",	10,	0},
	{"",	"date '+\%a \%Y-\%m-\%d \%H:\%M:\%S'",	1,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";

// To refresh dwmblocks:
// sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
