/* Ghidra address: 00b9c7f0 */
/* Ghidra symbol: FUN_00b9c7f0 */


undefined4 FUN_00b9c7f0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 6;
  uVar2 = 0x40;
  if (0x40 < param_1) {
    do {
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 * 2;
    } while (uVar2 < param_1);
  }
  return *(undefined4 *)((longlong)&UNWIND_INFO_01e95b08 + (longlong)iVar1 * 4 + 4);
}

