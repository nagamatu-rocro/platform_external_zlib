extern char *gets(char *);

void
test() {
    char buf[256];
    char *s0 = gets(buf);	// notmal case
    char *s1 = gets 	 (buf);	// space between brace and function
    char *s2 = gets    	 	
                   (buf);	// space and linefeed between brace and func
    char *s3 = gets		// not supported orz
                   (buf);
}
