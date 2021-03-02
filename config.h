/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#002b36",   /* after initialization */
	[INPUT] =  "#073542",   /* during input */
	[FAILED] = "#002b36",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 10;

/* set blur size, 0 means disabled */
static const int blur = 3;
