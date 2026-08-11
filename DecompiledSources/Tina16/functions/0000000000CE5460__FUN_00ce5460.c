/* Ghidra address: 00ce5460 */
/* Ghidra symbol: FUN_00ce5460 */


void FUN_00ce5460(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if (0 < (int)param_4) {
    param_4 = ((param_4 ^ (int)param_4 >> 0x1f) - ((int)param_4 >> 0x1f)) + 0x20;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_3,param_4);
  return;
}

