/* Ghidra address: 00a37ae0 */
/* Ghidra symbol: FUN_00a37ae0 */


void FUN_00a37ae0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  local_2c[0] = FUN_00a32f80(param_3);
  (**(code **)(*param_1 + 0x20))(param_1,local_2c,4);
  (**(code **)(*param_1 + 0x20))(param_1,&DAT_01e7179c,4);
  local_30 = FUN_00a32ea0(0xffffffff,&DAT_01e7179c,4);
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  uVar1 = FUN_00a32ea0(local_30,param_2,param_3);
  local_30 = FUN_00a32f80(~uVar1);
  (**(code **)(*param_1 + 0x20))(param_1,&local_30,4);
  return;
}

