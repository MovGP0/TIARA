/* Ghidra address: 009f04b0 */
/* Ghidra symbol: FUN_009f04b0 */


void FUN_009f04b0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(short *)(param_1 + 0x2e) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = DAT_01e6d70c;
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x40) + 8);
  *plVar1 = *plVar1 - (ulonglong)*(ushort *)(param_1 + 0x2c);
  return;
}

