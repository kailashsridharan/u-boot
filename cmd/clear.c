/*
 * Copyright (c) 2016 Zilogic Systems
 * Written by Joses Paul <josespaul@zilogicsystems.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <command.h>

int do_clear(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
        puts("\e[2J\e[H");

	return 0;
}

U_BOOT_CMD(
	clear,                 /* Name         */
	1,                     /* Maxarg       */
	0,                     /* Repeatalble  */
	do_clear,              /* Function     */
	"Clear console",       /* Usage-string */
	"Clears the terminal"  /* Help-string  */
	);

