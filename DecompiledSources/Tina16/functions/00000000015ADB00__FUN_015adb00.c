/* Ghidra address: 015adb00 */
/* Ghidra symbol: FUN_015adb00 */


bool FUN_015adb00(longlong param_1,byte param_2)

{
  return (1 << (param_2 & 0x1f) & *(uint *)(param_1 + 0x70)) != 0;
}

