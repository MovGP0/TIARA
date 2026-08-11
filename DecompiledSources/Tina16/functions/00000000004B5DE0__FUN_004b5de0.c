/* Ghidra address: 004b5de0 */
/* Ghidra symbol: FUN_004b5de0 */


void FUN_004b5de0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1[8] + 1;
  if (*(longlong *)PTR_DAT_02005070 == 0) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
    do {
      iVar4 = (int)uVar2;
      if (iVar4 < 0x41) {
        if (iVar4 < 9) {
          uVar2 = (ulonglong)(iVar4 + 4);
        }
        else {
          uVar2 = (ulonglong)(iVar4 + 0x10);
        }
      }
      else {
        uVar2 = (longlong)
                ((ulonglong)(uint)((int)(uVar2 * 3) >> 0x1f) << 0x20 | uVar2 * 3 & 0xffffffff) / 2 &
                0xffffffff;
      }
      if ((int)uVar2 < 0) {
        FUN_0044d470();
      }
    } while ((int)uVar2 < iVar3);
  }
  else {
    uVar1 = (**(code **)PTR_DAT_02005070)(*(uint *)((longlong)param_1 + 0x44),iVar3);
    uVar2 = (ulonglong)uVar1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,uVar2);
  return;
}

