/* Ghidra address: 0059b950 */
/* Ghidra symbol: FUN_0059b950 */


void FUN_0059b950(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    uVar2 = *(ulonglong *)(*param_1 + -8);
  }
  iVar3 = (int)param_1[1] + 1;
  if (*(longlong *)PTR_DAT_02005070 == 0) {
    uVar2 = uVar2 & 0xffffffff;
    do {
      iVar1 = (int)uVar2;
      if (iVar1 < 0x41) {
        if (iVar1 < 9) {
          uVar2 = (ulonglong)(iVar1 + 4);
        }
        else {
          uVar2 = (ulonglong)(iVar1 + 0x10);
        }
      }
      else {
        uVar2 = (longlong)
                ((ulonglong)(uint)((int)(uVar2 * 3) >> 0x1f) << 0x20 | uVar2 * 3 & 0xffffffff) / 2 &
                0xffffffff;
      }
      iVar1 = (int)uVar2;
      if (iVar1 < 0) {
        FUN_0044d470();
      }
    } while (iVar1 < iVar3);
  }
  else {
    iVar1 = (**(code **)PTR_DAT_02005070)(uVar2 & 0xffffffff,iVar3);
  }
  FUN_0059b400(param_1,(longlong)iVar1);
  return;
}

