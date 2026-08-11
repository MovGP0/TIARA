/* Ghidra address: 0111e2c0 */
/* Ghidra symbol: FUN_0111e2c0 */


void FUN_0111e2c0(longlong param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x120) + (longlong)(*(int *)(param_1 + 0x150) + 1) * 2)
  ;
  if (sVar1 == 0x27) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
    FUN_0111e3f0();
  }
  else if (sVar1 == 0x22) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
    FUN_0111e030();
  }
  else {
    FUN_0111d1b0();
  }
  return;
}

