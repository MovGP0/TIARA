/* Ghidra address: 017f3eb0 */
/* Ghidra symbol: FUN_017f3eb0 */


void FUN_017f3eb0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int local_1c;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
    FUN_017f3fb0(param_1);
  }
  cVar1 = FUN_017f3f30(param_1,param_2,&local_1c);
  if (cVar1 == '\0') {
    FUN_00409a70(*(longlong *)(param_1 + 0x18) + (longlong)local_1c * 4,
                 *(longlong *)(param_1 + 0x18) + (longlong)(local_1c + 1) * 4,
                 (longlong)((*(int *)(param_1 + 8) - local_1c) * 4));
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)local_1c * 4) = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

