/* Ghidra address: 019c16b0 */
/* Ghidra symbol: FUN_019c16b0 */


undefined8 FUN_019c16b0(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int local_40;
  int local_3c [3];
  
  iVar2 = (**(code **)(*param_1 + 0x1c8))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_1 + 0x1f0))(param_1,iVar3,local_3c,&local_40);
      local_3c[0] = local_3c[0] / 8;
      lVar1 = (longlong)local_40;
      local_40 = (int)(lVar1 / 8);
      if ((local_3c[0] == param_2) && (local_40 == param_3)) {
        return CONCAT71((uint7)((ulonglong)(lVar1 / 8) >> 8) & 0xffffff,1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

