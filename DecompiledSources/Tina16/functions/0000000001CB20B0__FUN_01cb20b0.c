/* Ghidra address: 01cb20b0 */
/* Ghidra symbol: FUN_01cb20b0 */


void FUN_01cb20b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [40];
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
  FUN_01d31180(param_2,0x306,0x10,uVar2);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
  lVar1 = *(longlong *)(param_1 + 8);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_01d347d0(lVar1,iVar4);
      FUN_01cb2080(auStack_48,uVar3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

