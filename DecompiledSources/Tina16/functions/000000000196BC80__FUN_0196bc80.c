/* Ghidra address: 0196bc80 */
/* Ghidra symbol: FUN_0196bc80 */


void FUN_0196bc80(longlong *param_1,byte param_2)

{
  if (((char)param_1[0x36] == '\0') || ((param_2 & 1) == 0)) {
    (**(code **)(*param_1 + 200))(param_1,(double)param_1[0x35] * DAT_01fb7da0);
  }
  else {
    (**(code **)(*param_1 + 200))(param_1,(double)param_1[0x39] * DAT_01fb7da0);
  }
  (**(code **)(*param_1 + 0xd0))(param_1,(double)param_1[0x3c] * DAT_01fb7da0);
  return;
}

