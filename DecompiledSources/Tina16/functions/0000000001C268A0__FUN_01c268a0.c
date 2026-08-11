/* Ghidra address: 01c268a0 */
/* Ghidra symbol: FUN_01c268a0 */


void FUN_01c268a0(longlong *param_1,longlong param_2)

{
  param_1[0xac] = param_2;
  if (0.125 < (double)param_1[0xac] || (double)param_1[0xac] == 0.125) {
    if (10.0 < (double)param_1[0xac]) {
      param_1[0xac] = 0x4024000000000000;
    }
  }
  else {
    param_1[0xac] = 0x3fc0000000000000;
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}

