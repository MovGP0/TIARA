/* Ghidra address: 01b05600 */
/* Ghidra symbol: FUN_01b05600 */


int FUN_01b05600(longlong param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 < param_2) {
      if ((uint)bVar1 + (uint)*(byte *)(param_1 + 6) < (uint)param_2) {
        iVar2 = 0;
        FUN_01b04d70(0x216,&LAB_01b05680,0);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x78) + ((uint)param_2 - (uint)bVar1) + -1;
      }
    }
    else {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + -4 + (ulonglong)param_2 * 4);
      if (iVar2 < 1) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

