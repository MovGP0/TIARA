/* Ghidra address: 018770a0 */
/* Ghidra symbol: FUN_018770a0 */


void FUN_018770a0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = auStack_78;
  local_38 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  local_40 = (**(code **)(*param_1 + 0x28))(param_1,param_3);
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar4 = FUN_004095c0((longlong)iVar3);
  uVar2 = local_38;
  local_30 = uVar4;
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_00409a70(uVar2,uVar4,(longlong)iVar3);
  uVar1 = local_40;
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_00409a70(uVar1,uVar2,(longlong)iVar3);
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_00409a70(uVar4,uVar1,(longlong)iVar3);
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_004095f0(local_30,(longlong)iVar3);
  return;
}

