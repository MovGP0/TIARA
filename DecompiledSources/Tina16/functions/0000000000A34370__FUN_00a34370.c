/* Ghidra address: 00a34370 */
/* Ghidra symbol: FUN_00a34370 */


undefined8 FUN_00a34370(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1c = FUN_00a32f80(*(undefined4 *)(param_1 + 0x10));
  (**(code **)(*param_2 + 0x20))(param_2,&local_1c,4);
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x20,4);
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10));
  }
  local_20 = FUN_00a32ea0(0xffffffff,param_1 + 0x20,4);
  uVar1 = FUN_00a32ea0(local_20,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  local_20 = FUN_00a32f80(~uVar1);
  (**(code **)(*param_2 + 0x20))(param_2,&local_20,4);
  return 1;
}

