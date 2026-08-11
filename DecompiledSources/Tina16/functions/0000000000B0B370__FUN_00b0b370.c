/* Ghidra address: 00b0b370 */
/* Ghidra symbol: FUN_00b0b370 */


void FUN_00b0b370(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    iVar1 = FUN_00848350(param_1);
    if (iVar1 < *(int *)(param_1 + 0x4e0)) {
      FUN_0064d0b0(param_1);
    }
    else {
      FUN_0064d0b0(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x4bc);
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_00848220(param_1,iVar2);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar2 = FUN_00848310(param_1);
    iVar1 = *(int *)(param_1 + 0x4e8);
    if (iVar1 <= iVar2 + -1) {
      iVar2 = ((iVar2 + -1) - iVar1) + 1;
      do {
        FUN_00848220(param_1,iVar1);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00848310(param_1);
  }
  if (*(longlong *)(param_1 + 0x658) != 0) {
    (**(code **)(param_1 + 0x658))(*(undefined8 *)(param_1 + 0x660),param_1);
  }
  return;
}

