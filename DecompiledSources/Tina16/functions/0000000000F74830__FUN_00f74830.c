/* Ghidra address: 00f74830 */
/* Ghidra symbol: FUN_00f74830 */


void FUN_00f74830(longlong *param_1,undefined8 param_2)

{
  FUN_00f6fbc0(param_1,param_2);
  if (0x6b < DAT_0202eed4) {
    FUN_004b84c0(param_2,param_1 + 0x22,1);
    FUN_00f60970(param_2,param_1 + 0x23,(int)param_1[1]);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}

