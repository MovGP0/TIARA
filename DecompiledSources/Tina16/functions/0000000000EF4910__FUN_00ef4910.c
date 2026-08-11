/* Ghidra address: 00ef4910 */
/* Ghidra symbol: FUN_00ef4910 */


void FUN_00ef4910(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0;
  do {
    bVar2 = 0;
    do {
      *(undefined8 *)(*param_1 + (ulonglong)bVar1 * 0x200 + (ulonglong)bVar2 * 8) = 0;
      bVar2 = bVar2 + 1;
    } while (bVar2 != 0x40);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 0x40);
  return;
}

