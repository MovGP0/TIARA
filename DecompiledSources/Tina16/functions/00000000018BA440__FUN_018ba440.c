/* Ghidra address: 018ba440 */
/* Ghidra symbol: FUN_018ba440 */


void FUN_018ba440(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_018b7df0(param_1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x88),iVar2);
      *(undefined8 *)(lVar1 + 0x110) = 0;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x268))(*(longlong **)(param_1 + 0x20),0);
  FUN_01887fc0(*(undefined8 *)(param_1 + 0x80));
  return;
}

