/* Ghidra address: 005b8110 */
/* Ghidra symbol: FUN_005b8110 */


void FUN_005b8110(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar2 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  iVar1 = 0;
  if (iVar2 - 1U < 0x80000000) {
    do {
      if (*(char *)(*(longlong *)(param_1 + 8) + 1 + (longlong)iVar1 * 0x18) == '\x02') {
        FUN_004095f0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar1 * 0x18));
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

