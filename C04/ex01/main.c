#include "ft_putstr.c"

#define ANSI_COLOR_RED     "\x1b[91m"
#define ANSI_COLOR_GREEN   "\x1b[92m"
#define ANSI_COLOR_YELLOW  "\x1b[93m"
#define ANSI_COLOR_BLUE    "\x1b[94m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[96m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_ORANGE  "\x1b[31m"

int main (void)
{
	ft_putstr("Toi aussi tu pratiques la piscine ?");
	ft_putstr("\n\n");
	ft_putstr(ANSI_COLOR_GREEN "                           .8  \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_GREEN "                         .888 \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_GREEN "                       .8888\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_GREEN "                      .8888\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_GREEN "                      888\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_GREEN "                      8\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_GREEN "         .88888888888. .88888888888. \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_GREEN "      .8888888888888888888888888888888. \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_GREEN "    .8888888888888888888888888888888888. \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_YELLOW "   .&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_YELLOW "   &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_YELLOW "   &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_ORANGE "   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@: \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_ORANGE "   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@: \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_ORANGE "   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@: \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_RED "   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%. \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_RED "   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%. \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_RED "   `%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%. \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_MAGENTA "    `00000000000000000000000000000000000\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_MAGENTA "     `000000000000000000000000000000000\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_MAGENTA "      `0000000000000000000000000000000\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_CYAN "        `###########################\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_CYAN "   jgs    `#######################\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_CYAN "            `#########\'\'########\' \n" ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_CYAN "              `\"\"\"\"\"\"\'  `\"\"\"\"\"\' \n" ANSI_COLOR_RESET);
	ft_putstr("\n");
	return (0);
}