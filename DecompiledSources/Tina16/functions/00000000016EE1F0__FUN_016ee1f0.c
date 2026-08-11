/* Ghidra address: 016ee1f0 */
/* Ghidra symbol: FUN_016ee1f0 */


void FUN_016ee1f0(longlong param_1,undefined8 param_2,short param_3)

{
  if (*(longlong *)(param_1 + 0x60) == 0) {
    FUN_01b04d70(0x211,&LAB_016ee250,0);
  }
  else if (*(short *)(param_1 + 0x58) == param_3) {
    FUN_00409a70(*(longlong *)(param_1 + 0x60),param_2,*(short *)(param_1 + 0x58));
  }
  else {
    FUN_01b04d70(0x212,&LAB_016ee250,0);
  }
  return;
}

