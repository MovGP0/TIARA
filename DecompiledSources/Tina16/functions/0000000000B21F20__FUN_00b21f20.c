/* Ghidra address: 00b21f20 */
/* Ghidra symbol: FUN_00b21f20 */


void FUN_00b21f20(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
      if (lVar1 != 0) {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
        FUN_004095f0(uVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + -0x20))(*(longlong **)(param_1 + 8),1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

