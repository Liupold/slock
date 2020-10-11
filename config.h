/* user and group to drop privileges to */
static const char *user  = "rohnch";
static const char *group = "rohnch";


/* treat a cleared input like a wrong password (color) */
static const char *colorname[NUMCOLS] = {
       [INIT] = "black",       /* after initialization */
       [INPUT] = "#005577",    /* during input */
       [FAILED] = "#CC3333",   /* wrong password */
 };

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
               { "color0",       STRING,  &colorname[INIT] },
               { "color4",       STRING,  &colorname[INPUT] },
               { "color1",       STRING,  &colorname[FAILED] },
};

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-misc-fira code retina-medium-r-normal--0-0-0-0-m-0-iso8859-16";

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
