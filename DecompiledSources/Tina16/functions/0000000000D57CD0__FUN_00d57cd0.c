/* Ghidra address: 00d57cd0 */
/* Ghidra symbol: FUN_00d57cd0 */


void FUN_00d57cd0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_005fdcb0(param_1[0x10],0);
  FUN_005fdab0(param_1[0x10],param_3);
  (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  return;
}

