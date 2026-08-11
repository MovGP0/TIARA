/* Ghidra address: 008eea00 */
/* Ghidra symbol: FUN_008eea00 */


ushort FUN_008eea00(undefined8 param_1,byte param_2)

{
  ushort uVar1;
  
  if (param_2 < 0x80) {
    uVar1 = (ushort)param_2;
  }
  else {
    uVar1 = *(ushort *)(&DAT_01e2c7a2 + (ulonglong)param_2 * 2);
  }
  return uVar1;
}

