/* Ghidra address: 00827890 */
/* Ghidra symbol: FUN_00827890 */


void FUN_00827890(longlong param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x18 + (ulonglong)bVar2 * 4);
    if (iVar1 != -1) {
      FUN_008274c0(*(undefined8 *)(param_1 + 0x10),iVar1);
    }
    *(undefined4 *)(param_1 + 0x18 + (ulonglong)bVar2 * 4) = 0xffffffff;
    bVar2 = bVar2 + 1;
  } while (bVar2 != 4);
  FUN_00827690(DAT_01e17888,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

