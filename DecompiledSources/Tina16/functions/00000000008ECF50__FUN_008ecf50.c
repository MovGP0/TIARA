/* Ghidra address: 008ecf50 */
/* Ghidra symbol: FUN_008ecf50 */


ushort FUN_008ecf50(undefined8 param_1,byte param_2)

{
  ushort uVar1;
  
  if (param_2 < 0xa0) {
    uVar1 = (ushort)param_2;
  }
  else {
    uVar1 = *(ushort *)(&DAT_01e28aec + (ulonglong)param_2 * 2);
  }
  return uVar1;
}

