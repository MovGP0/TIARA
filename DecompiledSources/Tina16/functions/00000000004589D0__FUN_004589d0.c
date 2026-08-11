/* Ghidra address: 004589d0 */
/* Ghidra symbol: FUN_004589d0 */


undefined8 FUN_004589d0(uint param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0xfc;
  puVar1 = (uint *)&DAT_01dbec24;
  do {
    if (param_1 == *puVar1 >> 0x10) {
      FUN_004167a0(param_2,s_b_us_ascii_01dbf011 + (ulonglong)(ushort)*puVar1 + 3);
      return 1;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

