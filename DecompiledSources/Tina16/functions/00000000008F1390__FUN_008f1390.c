/* Ghidra address: 008f1390 */
/* Ghidra symbol: FUN_008f1390 */


ushort FUN_008f1390(undefined8 param_1,byte param_2)

{
  ushort uVar1;
  
  if (param_2 < 0x80) {
    uVar1 = (ushort)param_2;
  }
  else {
    uVar1 = *(ushort *)(&DAT_01e2f9e2 + (ulonglong)param_2 * 2);
  }
  return uVar1;
}

