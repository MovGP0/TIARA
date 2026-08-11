/* Ghidra address: 00be0860 */
/* Ghidra symbol: FUN_00be0860 */


undefined8 FUN_00be0860(longlong param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + (longlong)iVar2 * 0x14);
      if (piVar1[1] == param_2) {
        *param_3 = iVar2;
        return 1;
      }
      if (param_2 < *piVar1) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

