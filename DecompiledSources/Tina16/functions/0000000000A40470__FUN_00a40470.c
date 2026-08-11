/* Ghidra address: 00a40470 */
/* Ghidra symbol: FUN_00a40470 */


void FUN_00a40470(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = -iVar1;
  if (-iVar1 == 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x18) + -1;
  }
  return;
}

