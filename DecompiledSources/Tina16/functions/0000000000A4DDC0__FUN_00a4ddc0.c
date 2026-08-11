/* Ghidra address: 00a4ddc0 */
/* Ghidra symbol: FUN_00a4ddc0 */


void FUN_00a4ddc0(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    FUN_00417c40(param_1 + 8 + (ulonglong)bVar1 * 0x40,param_2 + 8 + (ulonglong)bVar1 * 0x40,
                 &DAT_00a4d508);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 4);
  return;
}

