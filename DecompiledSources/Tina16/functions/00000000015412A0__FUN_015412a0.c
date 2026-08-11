/* Ghidra address: 015412a0 */
/* Ghidra symbol: FUN_015412a0 */


void FUN_015412a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_01d347d0(param_1,*(int *)(param_1 + 0x10) + -1);
  uVar2 = FUN_0153f480(&DAT_0153dd58,1,param_2,4,0);
  (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x50))(*(longlong **)(lVar1 + 0x10),uVar2);
  uVar2 = FUN_0153f480(&DAT_0153dd58,1,param_3,4,0);
  (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x50))(*(longlong **)(lVar1 + 0x10),uVar2);
  uVar2 = FUN_0153f480(&DAT_0153dd58,1,param_4,4,0);
  (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x50))(*(longlong **)(lVar1 + 0x10),uVar2);
  return;
}

