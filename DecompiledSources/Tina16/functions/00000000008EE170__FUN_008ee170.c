/* Ghidra address: 008ee170 */
/* Ghidra symbol: FUN_008ee170 */


ushort FUN_008ee170(undefined8 param_1,byte param_2)

{
  ushort uVar1;
  
  if (param_2 < 0x80) {
    uVar1 = (ushort)param_2;
  }
  else {
    uVar1 = *(ushort *)(&DAT_01e2b6ec + (ulonglong)param_2 * 2);
  }
  return uVar1;
}

