/* user and group to drop privileges to */
/* these have been set to "nobody"
 * if you are not on arch linux they should
 * probably be set to nogroup */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",   /* after initialization */
	[INPUT] =  "#282828",   /* during input */
	[FAILED] = "#cc241d",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "sandal";

/* text color */
static const char * text_color = "#ebdbb2";

/* text font */
static const char * font_name = "fixed";
