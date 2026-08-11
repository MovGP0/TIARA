/* Ghidra address: 00813ea0 */
/* Ghidra symbol: FUN_00813ea0 */


undefined8 FUN_00813ea0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar1 = 0;
  if (iVar2 - 1U < 0x80000000) {
    do {
      if (*(longlong *)(param_2 + 200) ==
          *(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar1 * 0x20)) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 1;
}

