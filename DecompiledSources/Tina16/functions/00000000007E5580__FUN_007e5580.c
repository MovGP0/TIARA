/* Ghidra address: 007e5580 */
/* Ghidra symbol: FUN_007e5580 */


undefined1 FUN_007e5580(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x84);
  if ((bVar1 == 2) && (*(longlong *)(param_1 + 200) != 0)) {
    uVar2 = FUN_007e5580(*(undefined8 *)(param_1 + 200));
    bVar1 = (&DAT_01e12e45)[uVar2 & 0xff];
  }
  return (&DAT_01e12e47)[bVar1];
}

