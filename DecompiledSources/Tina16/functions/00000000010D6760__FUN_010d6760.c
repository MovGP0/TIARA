/* Ghidra address: 010d6760 */
/* Ghidra symbol: FUN_010d6760 */


void FUN_010d6760(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  undefined4 local_1c [3];
  
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x70);
  local_1c[0] = 0;
  *(undefined4 *)(param_1 + 0x98) = param_2;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  FUN_00409a70(local_res10,*(undefined8 *)(param_1 + 0x68),4);
  FUN_00b909d0(param_1 + 0x68,4);
  FUN_00409a70(local_1c,*(undefined8 *)(param_1 + 0x68),4);
  FUN_00b909d0(param_1 + 0x68,4);
  FUN_00409a70(local_1c,*(undefined8 *)(param_1 + 0x68),4);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x68);
  FUN_00b909d0(param_1 + 0x68,4);
  FUN_00409a70(local_res18,*(undefined8 *)(param_1 + 0x68),8);
  FUN_00b909d0(param_1 + 0x68,8);
  FUN_00409a70(local_res18,*(undefined8 *)(param_1 + 0x68),8);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x68);
  FUN_00b909d0(param_1 + 0x68,8);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x68);
  return;
}

