/* Ghidra address: 00ad0940 */
/* Ghidra symbol: FUN_00ad0940 */


void FUN_00ad0940(longlong param_1)

{
  short sVar1;
  
  while ((sVar1 = *(short *)(*(longlong *)(param_1 + 0x50) + 0x20), sVar1 != 0x3e && (sVar1 != 0)))
  {
    FUN_00ad06f0(param_1);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x80) = 0;
  return;
}

