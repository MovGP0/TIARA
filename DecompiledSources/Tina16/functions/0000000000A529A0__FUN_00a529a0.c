/* Ghidra address: 00a529a0 */
/* Ghidra symbol: FUN_00a529a0 */


void FUN_00a529a0(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  bVar1 = 0;
  do {
    FUN_00461840(param_1 + 0x78 + (ulonglong)bVar1 * 0x18,param_2 + 0x78 + (ulonglong)bVar1 * 0x18);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 0x43);
  return;
}

