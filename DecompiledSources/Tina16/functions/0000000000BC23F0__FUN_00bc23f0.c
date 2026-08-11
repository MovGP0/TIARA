/* Ghidra address: 00bc23f0 */
/* Ghidra symbol: FUN_00bc23f0 */


void FUN_00bc23f0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00414480(param_1 + 0x22);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x148))(param_1);
  return;
}

