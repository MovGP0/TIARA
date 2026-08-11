/* Ghidra address: 00b5a120 */
/* Ghidra symbol: FUN_00b5a120 */


void FUN_00b5a120(longlong param_1)

{
  undefined8 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 8) + -0x20))(*(longlong **)(param_1 + 8),1);
  (**(code **)(**(longlong **)(param_1 + 0x10) + -0x20))(*(longlong **)(param_1 + 0x10),1);
  (**(code **)(**(longlong **)(param_1 + 0x18) + -0x20))(*(longlong **)(param_1 + 0x18),1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + -0x20))(*(longlong **)(param_1 + 0x20),1);
  uVar1 = FUN_00b59770(&DAT_00b4c5b8,1,param_1);
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_00b28c00(*(undefined8 *)(param_1 + 0x58));
  uVar1 = FUN_00b1f640(&DAT_00b1bf58,1);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_00b23bb0(&DAT_00b23028,1);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_00b24d40(&DAT_00b24340,1);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x20);
  FUN_004144d0(param_1 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = 0;
  return;
}

