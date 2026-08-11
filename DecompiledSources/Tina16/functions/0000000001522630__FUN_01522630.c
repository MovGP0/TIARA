/* Ghidra address: 01522630 */
/* Ghidra symbol: FUN_01522630 */


undefined8 FUN_01522630(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if (*(longlong *)(param_1 + 0x1a5c8) == 0) {
    uVar2 = FUN_004095c0();
    *(undefined8 *)(param_1 + 0x1a5c8) = uVar2;
    bVar1 = 0;
    do {
      bVar3 = 0;
      do {
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x1a5c8) + (ulonglong)bVar1 * 0x20 + (ulonglong)bVar3 * 8) = 0;
        bVar3 = bVar3 + 1;
      } while (bVar3 != 4);
      bVar1 = bVar1 + 1;
    } while (bVar1 != 4);
  }
  return *(undefined8 *)(param_1 + 0x1a5c8);
}

