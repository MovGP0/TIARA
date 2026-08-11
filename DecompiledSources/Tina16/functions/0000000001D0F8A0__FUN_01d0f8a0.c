/* Ghidra address: 01d0f8a0 */
/* Ghidra symbol: FUN_01d0f8a0 */


void FUN_01d0f8a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1[2];
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,iVar3);
      FUN_00410f20(*(undefined8 *)(lVar1 + 0x11f));
      uVar2 = FUN_004aeac0(param_1,iVar3);
      FUN_004095f0(uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}

