/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

static const char *screenimage = "/usr/local/share/slock/slock.png";
static const char *screenlock = "circlelockclear";
static const int screencolors[NUMRGBCOLS] = {
	[RED] = 111,
	[GREEN] = 111,
	[BLUE] = 111,
	[ALPHA] = 255,
};
