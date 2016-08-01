#include <common.h>
#include <command.h>
#include <asm-generic/signal.h>

int quit(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	raise(SIGKILL);
}


U_BOOT_CMD(
	quit,                                                       /*name*/
	1,                                                          /*maxarg*/
	0,                                                          /*repeatalble*/
	quit,                                                       /*function*/
	"exit uboot",                                               /*usage-string*/
	"quit-exits to the terminal"                                /*help-string*/
	);
