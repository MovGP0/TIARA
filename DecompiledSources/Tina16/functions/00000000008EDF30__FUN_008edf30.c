/* Ghidra address: 008edf30 */
/* Ghidra symbol: FUN_008edf30 */


ushort FUN_008edf30(undefined8 param_1,byte param_2)

{
  ushort uVar1;
  
  if (param_2 < 0x80) {
    uVar1 = (ushort)param_2;
  }
  else if (((param_2 == 0xd5) || (param_2 == 0xe7)) || (param_2 == 0xf2)) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = *(ushort *)(&DAT_01e2b5ec + (ulonglong)param_2 * 2);
  }
  return uVar1;
}

