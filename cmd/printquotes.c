#include <common.h>
#include <command.h>

#define Q1 "Quote 1:\nCommon sense is nothing more than a deposit of prejudices laid down in the mind before you reach eighteen.- Albert Einstein\n\n"
#define Q2 "Quote 2:\nThe scientists of today think deeply instead of clearly. One must be sane to think clearly, but one can think deeply and be quite insane.-Nikola Tesla\n\n"
#define Q3 "Quote 3:\nMy only desire is that India should be a good producer and no one should be hungry, shedding tears for food in the country.  - Sardar Vallabhai Patel \n\n"
#define Q4 "Quote 4:\nRemember that the grossest crime is to compromise with injustice and wrong. Remember the eternal law: you must give, if you want to get. - Netaji Subhash Chandra Bose.\n\n\n"
 
int do_printquotes(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	if (argc == 2) {
		if (*argv[1] == '1')
			puts( Q1 );
		
		else if (*argv[1] == '2')
			puts ( Q2 );
		
		else if (*argv[1] == '3')
			puts( Q3 );
		
		else if (*argv[1] == '4')
			puts( Q4 );
		
		else if (*argv[1] == '0'){
		
			puts(Q1);
			puts(Q2);
			puts(Q3);
			puts(Q4);
		} else {
			puts("\ntry 'help printquotes'\n\n");
		} 
	} else {
		puts("\ntry 'help printquotes'\n\n");
	}
	
	return 0;
}

U_BOOT_CMD(
	printquotes,                                                       /*name*/
	2,                                                                 /*maxarg*/
	0,                                                                 /*repeatalble*/
	do_printquotes,                                                    /*function*/
	"prints predefined quotes in console",                             /*usage-string*/
	"[# of quote] \n  - prints predefined quotes in console"           /*help-string*/
	);
