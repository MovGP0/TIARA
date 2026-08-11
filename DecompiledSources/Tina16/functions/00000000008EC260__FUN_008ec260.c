/* Ghidra address: 008ec260 */
/* Ghidra symbol: FUN_008ec260 */


ushort FUN_008ec260(undefined8 param_1,byte param_2)

{
  ushort uVar1;
  
  if (param_2 < 0xa0) {
    uVar1 = (ushort)param_2;
  }
  else {
    uVar1 = *(ushort *)((longlong)&DAT_01e287ec + (ulonglong)param_2 * 2);
  }
  return uVar1;
}

