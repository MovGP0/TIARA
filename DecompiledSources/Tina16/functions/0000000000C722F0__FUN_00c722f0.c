/* Ghidra address: 00c722f0 */
/* Ghidra symbol: FUN_00c722f0 */


void FUN_00c722f0(longlong param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x18 + (ulonglong)bVar2 * 4);
    if (iVar1 != -1) {
      FUN_00c71f40(*(undefined8 *)(param_1 + 0x10),iVar1);
    }
    *(undefined4 *)(param_1 + 0x18 + (ulonglong)bVar2 * 4) = 0xffffffff;
    bVar2 = bVar2 + 1;
  } while (bVar2 != 4);
  FUN_00c72110(DAT_01ea71e0,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

