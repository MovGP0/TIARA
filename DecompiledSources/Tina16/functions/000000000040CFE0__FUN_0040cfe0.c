/* Ghidra address: 0040cfe0 */
/* Ghidra symbol: FUN_0040cfe0 */


int FUN_0040cfe0(undefined *param_1,code *param_2)

{
  int iVar1;
  
  if (*(short *)(param_1 + 8) == -0x284f) {
    iVar1 = 0;
  }
  else if ((ushort)(*(short *)(param_1 + 8) + 0x284eU) < 2) {
    iVar1 = (*param_2)();
  }
  else if ((param_1 == &DAT_020063b0) || (param_1 == &DAT_020066a8)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x67;
  }
  if (iVar1 != 0) {
    FUN_00409930(iVar1);
  }
  return iVar1;
}

