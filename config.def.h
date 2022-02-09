/* user and group to drop privileges to */
/* these have been set to "nobody"
 * if you are not on arch linux they should
 * probably be set to nogroup */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2e3440",   /* after initialization */
	[INPUT] =  "#2e3440",   /* during input */
	[FAILED] = "#bf616a",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
