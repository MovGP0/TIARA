/* Ghidra address: 00446380 */
/* Ghidra symbol: FUN_00446380 */


int FUN_00446380(longlong param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(param_1 + 0xe8) == '\0') {
    for (; (char)*param_2 != '\0'; param_2 = (short *)((longlong)param_2 + 1)) {
      iVar1 = iVar1 + 1;
    }
  }
  else {
    for (; *param_2 != 0; param_2 = param_2 + 1) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

