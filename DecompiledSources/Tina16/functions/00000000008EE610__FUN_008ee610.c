/* Ghidra address: 008ee610 */
/* Ghidra symbol: FUN_008ee610 */


ushort FUN_008ee610(undefined8 param_1,byte param_2)

{
  ushort uVar1;
  
  if (param_2 < 0x80) {
    uVar1 = (ushort)param_2;
  }
  else {
    uVar1 = *(ushort *)(&DAT_01e2bea2 + (ulonglong)param_2 * 2);
  }
  return uVar1;
}

