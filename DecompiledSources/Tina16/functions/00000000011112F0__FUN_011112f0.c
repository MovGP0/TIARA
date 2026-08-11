/* Ghidra address: 011112f0 */
/* Ghidra symbol: FUN_011112f0 */


void FUN_011112f0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0;
  do {
    bVar2 = 0;
    do {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x4a0 + (ulonglong)bVar1 * 0x20 + (ulonglong)bVar2 * 8)
                  );
      bVar2 = bVar2 + 1;
    } while (bVar2 != 3);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 9);
  return;
}

