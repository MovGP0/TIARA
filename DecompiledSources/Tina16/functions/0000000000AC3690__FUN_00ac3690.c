/* Ghidra address: 00ac3690 */
/* Ghidra symbol: FUN_00ac3690 */


char FUN_00ac3690(longlong param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x40) == '\x11') {
    cVar1 = '\0';
  }
  else {
    if ((((param_2 < *(int *)(param_1 + 0x90)) || (*(int *)(param_1 + 0x98) <= param_2)) ||
        (param_3 < *(int *)(param_1 + 0x94))) || (*(int *)(param_1 + 0x9c) <= param_3)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    if (cVar1 != '\0') {
      *param_4 = param_2 - *(int *)(param_1 + 0x90);
      *param_5 = param_3 - *(int *)(param_1 + 0x94);
    }
  }
  return cVar1;
}

