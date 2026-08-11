/* Ghidra address: 0061db60 */
/* Ghidra symbol: FUN_0061db60 */


char * FUN_0061db60(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((*param_1 != '\0') && (*param_2 != '\0')) {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      pcVar1 = param_1;
      pcVar2 = param_2;
      if (*param_1 == *param_2) {
        do {
          pcVar2 = pcVar2 + 1;
          pcVar1 = pcVar1 + 1;
          if (*pcVar2 == '\0') {
            return param_1;
          }
        } while ((*pcVar1 == *pcVar2) && (*pcVar1 != '\0'));
      }
    }
  }
  return (char *)0x0;
}

