/* Ghidra address: 00b50120 */
/* Ghidra symbol: FUN_00b50120 */


void FUN_00b50120(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x34) + -1;
  if (-1 < iVar2) {
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2) == '\x01') {
        uVar1 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x70),iVar2);
        FUN_00b4fc80(*(undefined8 *)(param_1 + 0x70),uVar1);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

