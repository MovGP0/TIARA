/* Ghidra address: 007e7790 */
/* Ghidra symbol: FUN_007e7790 */


undefined8 FUN_007e7790(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar2 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if ((uint)*(byte *)(param_2 + 0x87) ==
          *(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 4)) {
        FUN_007e76b0();
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

