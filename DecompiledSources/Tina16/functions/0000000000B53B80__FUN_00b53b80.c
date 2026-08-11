/* Ghidra address: 00b53b80 */
/* Ghidra symbol: FUN_00b53b80 */


void FUN_00b53b80(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 100) + -1;
  if (-1 < iVar2) {
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2) == '\x01') {
        uVar1 = FUN_00b53890(*(undefined8 *)(param_1 + 0xa0),iVar2);
        FUN_00b538c0(*(undefined8 *)(param_1 + 0xa0),uVar1);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

