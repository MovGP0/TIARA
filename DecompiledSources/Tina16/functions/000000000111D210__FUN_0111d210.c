/* Ghidra address: 0111d210 */
/* Ghidra symbol: FUN_0111d210 */


void FUN_0111d210(longlong param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x120) + (longlong)(*(int *)(param_1 + 0x150) + 1) * 2)
  ;
  if (sVar1 == 0x3d) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 2;
    *(undefined1 *)(param_1 + 0x163) = 7;
  }
  else if (sVar1 == 0x3e) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 2;
    *(undefined1 *)(param_1 + 0x163) = 7;
  }
  else {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
    *(undefined1 *)(param_1 + 0x163) = 7;
  }
  return;
}

