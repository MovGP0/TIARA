/* Ghidra address: 00c25810 */
/* Ghidra symbol: FUN_00c25810 */


int FUN_00c25810(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    while( true ) {
      if (param_3 < 1) {
        return iVar1;
      }
      iVar2 = *(int *)(param_1 + 0x44);
      if (iVar2 < 1) break;
      if (param_3 < iVar2) {
        iVar2 = param_3;
      }
      FUN_00409a70(*(undefined8 *)(param_1 + 0x38),param_2,(longlong)iVar2);
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + (longlong)iVar2;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) - iVar2;
      param_2 = param_2 + iVar2;
      param_3 = param_3 - iVar2;
      iVar1 = iVar1 + iVar2;
    }
    if (*(char *)(param_1 + 0x48) != '\0') break;
    FUN_00c25600(param_1);
  }
  return iVar1;
}

