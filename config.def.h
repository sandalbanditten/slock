/* user and group to drop privileges to */
static const char *user  = "notroot";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2e3440",   /* after initialization */
	[INPUT] =  "#2e3440",   /* during input */
	[FAILED] = "#bf616a",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
