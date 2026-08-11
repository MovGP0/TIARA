/* Ghidra address: 00a0b890 */
/* Ghidra symbol: FUN_00a0b890 */


void FUN_00a0b890(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_00607b80(*(longlong *)(param_1 + 0x48));
  }
  lVar1 = FUN_00410e60(&PTR_FUN_00a08f58,1);
  *(longlong *)(param_1 + 0x48) = lVar1;
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  return;
}

