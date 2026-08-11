/* Ghidra address: 00b1adb0 */
/* Ghidra symbol: FUN_00b1adb0 */


void FUN_00b1adb0(longlong param_1,int param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_00414df0(param_3);
  uVar1 = 0;
  if (*param_3 != 0) {
    uVar1 = *(undefined4 *)(*param_3 + -4);
  }
  uVar1 = FUN_00b1a7a0(param_1,uVar3,uVar1);
  lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),uVar1);
  if (lVar4 != 0) {
    iVar6 = *(int *)(lVar4 + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        iVar2 = FUN_004aeac0(lVar4,iVar5);
        if (iVar2 == param_2) {
          FUN_004ae870(lVar4,iVar5);
          break;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00b1a7f0(param_1,(longlong)param_2);
  return;
}

