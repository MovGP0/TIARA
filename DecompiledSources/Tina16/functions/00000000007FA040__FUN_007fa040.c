/* Ghidra address: 007fa040 */
/* Ghidra symbol: FUN_007fa040 */


int FUN_007fa040(longlong param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    if ((*(char *)(param_1 + 0x60) != '\0') &&
       (cVar1 = FUN_007f9ff0(param_1,param_2), cVar1 == '\0')) {
      iVar2 = thunk_FUN_0410f747(param_3);
      return -(iVar2 - *(int *)(param_1 + 0x2c));
    }
    if ((*(char *)(param_1 + 0x60) == '\0') &&
       (cVar1 = FUN_007f9ff0(param_1,param_2), cVar1 != '\0')) {
      iVar2 = thunk_FUN_0410f747(param_3);
      iVar2 = iVar2 - *(int *)(param_1 + 0x2c);
    }
  }
  return iVar2;
}

