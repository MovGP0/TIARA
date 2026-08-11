/* Ghidra address: 010e7b90 */
/* Ghidra symbol: FUN_010e7b90 */


void FUN_010e7b90(longlong param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  
  bVar2 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + 200 + (ulonglong)bVar2 * 0x20);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    bVar2 = bVar2 + 1;
  } while (bVar2 != 2);
  return;
}

