/* Ghidra address: 008ee3f0 */
/* Ghidra symbol: FUN_008ee3f0 */


ushort FUN_008ee3f0(undefined8 param_1,byte param_2)

{
  ushort uVar1;
  
  if (param_2 < 0x25) {
    uVar1 = (ushort)param_2;
  }
  else {
    uVar1 = *(ushort *)(&DAT_01e2bca2 + (ulonglong)param_2 * 2);
  }
  return uVar1;
}

