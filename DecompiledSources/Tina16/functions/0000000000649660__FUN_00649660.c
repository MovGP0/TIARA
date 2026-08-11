/* Ghidra address: 00649660 */
/* Ghidra symbol: FUN_00649660 */


uint FUN_00649660(undefined8 param_1,uint param_2,uint param_3)

{
  if ((int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f)) <
      (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) {
    param_3 = param_2;
  }
  return param_3;
}

