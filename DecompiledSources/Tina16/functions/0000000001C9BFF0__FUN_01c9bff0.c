/* Ghidra address: 01c9bff0 */
/* Ghidra symbol: FUN_01c9bff0 */


void FUN_01c9bff0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int extraout_var;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x12b8) + 0xd8))(*(longlong **)(param_1 + 0x12b8));
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x12b8) + 0xd8))(*(longlong **)(param_1 + 0x12b8));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x12b8) + 0xd8))(*(longlong **)(param_1 + 0x12b8));
  (**(code **)(**(longlong **)(param_1 + 0x12b8) + 0xd8))(*(longlong **)(param_1 + 0x12b8));
  iVar3 = FUN_0064d120(*(undefined8 *)(param_1 + 0x12b8));
  FUN_00498350(&local_38,uVar1,uVar4 >> 0x20,iVar2 + 100,extraout_var + iVar3);
  *(undefined8 *)(param_3 + 0x60) = local_38;
  *(undefined8 *)(param_3 + 0x68) = uStack_30;
  return;
}

