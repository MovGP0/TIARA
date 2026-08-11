/* Ghidra address: 00879530 */
/* Ghidra symbol: FUN_00879530 */


int FUN_00879530(undefined8 param_1,longlong param_2,int *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*param_3 <= iVar2) {
      return *param_3;
    }
    if (*(char *)(param_2 + iVar2) == '\n') break;
    if (*(char *)(param_2 + iVar2) == '\r') {
      *param_4 = 1;
      iVar1 = iVar2 + 1;
      if ((iVar1 < *param_3) && (*(char *)(param_2 + iVar1) == '\n')) {
        *param_3 = iVar2 + 2;
        return iVar2;
      }
      *param_3 = iVar1;
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  }
  *param_4 = 1;
  *param_3 = iVar2 + 1;
  return iVar2;
}

