/* Ghidra address: 00ad1400 */
/* Ghidra symbol: FUN_00ad1400 */


void FUN_00ad1400(longlong param_1)

{
  short sVar1;
  
  while ((sVar1 = *(short *)(*(longlong *)(param_1 + 0x90) + 0x20), sVar1 != 0x3e && (sVar1 != 0)))
  {
    FUN_00ad13c0(param_1);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x80) = 0;
  return;
}

