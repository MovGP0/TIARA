/* Ghidra address: 007e5530 */
/* Ghidra symbol: FUN_007e5530 */


undefined1 FUN_007e5530(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x83);
  if ((bVar1 == 2) && (*(longlong *)(param_1 + 200) != 0)) {
    uVar2 = FUN_007e5530(*(undefined8 *)(param_1 + 200));
    bVar1 = (&DAT_01e12e45)[uVar2 & 0xff];
  }
  return (&DAT_01e12e47)[bVar1];
}

