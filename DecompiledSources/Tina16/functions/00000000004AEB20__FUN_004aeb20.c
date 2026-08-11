/* Ghidra address: 004aeb20 */
/* Ghidra symbol: FUN_004aeb20 */


void FUN_004aeb20(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x10) + 1;
  if (*(longlong *)PTR_DAT_02005070 == 0) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x14);
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
    uVar1 = (**(code **)PTR_DAT_02005070)(*(uint *)(param_1 + 0x14),iVar3);
    uVar2 = (ulonglong)uVar1;
  }
  FUN_004aef40(param_1,uVar2);
  return;
}

