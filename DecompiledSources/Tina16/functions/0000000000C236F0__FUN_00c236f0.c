/* Ghidra address: 00c236f0 */
/* Ghidra symbol: FUN_00c236f0 */


void FUN_00c236f0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar1 = *(int *)(param_1 + 0x140 + (longlong)(int)((uint)(param_2 + param_3) >> 1) * 8);
    iVar2 = param_2;
    iVar3 = param_3;
    do {
      while (0 < *(int *)(param_1 + 0x140 + (longlong)iVar2 * 8) - iVar1) {
        iVar2 = iVar2 + 1;
      }
      while (*(int *)(param_1 + 0x140 + (longlong)iVar3 * 8) - iVar1 < 0) {
        iVar3 = iVar3 + -1;
      }
      if (iVar2 <= iVar3) {
        FUN_00c236c0(param_1,param_1 + 0x140 + (longlong)iVar2 * 8,
                     param_1 + 0x140 + (longlong)iVar3 * 8);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      }
    } while (iVar2 <= iVar3);
    if (param_2 < iVar3) {
      FUN_00c236f0(param_1,param_2,iVar3);
    }
    param_2 = iVar2;
  } while (iVar2 < param_3);
  return;
}

