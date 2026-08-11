/* Ghidra address: 00e07e60 */
/* Ghidra symbol: FUN_00e07e60 */


void FUN_00e07e60(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (0x100 < param_2) {
    FUN_00e078a0();
  }
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + -4);
  }
  *(undefined4 *)(param_1 + 0x2058 + (longlong)param_2 * 4) = uVar1;
  return;
}

