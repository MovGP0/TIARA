/* Ghidra address: 0199b4b0 */
/* Ghidra symbol: FUN_0199b4b0 */


void FUN_0199b4b0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  if (-1 < param_2) {
    param_2 = param_2 + 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3c8) + (longlong)iVar3 * 8);
      if (lVar1 != 0) {
        iVar5 = *(int *)(lVar1 + 0x10);
        iVar4 = 0;
        if (-1 < iVar5 + -1) {
          do {
            uVar2 = FUN_004aeac0(lVar1,iVar4);
            FUN_004095f0(uVar2);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_00410f20(lVar1);
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_004095f0(*(undefined8 *)(param_1 + 0x3c8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3b8));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x3c0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3c0));
  return;
}

