/* Ghidra address: 008efdb0 */
/* Ghidra symbol: FUN_008efdb0 */


ushort FUN_008efdb0(undefined8 param_1,byte param_2)

{
  ushort uVar1;
  
  if ((byte)(param_2 + 0x80) < 0x20 && 1 << (param_2 + 0x80 & 0x1f) != 0) {
    uVar1 = *(ushort *)(&DAT_01e2eca2 + (ulonglong)param_2 * 2);
  }
  else {
    uVar1 = (ushort)param_2;
  }
  return uVar1;
}

