/* Ghidra address: 00708140 */
/* Ghidra symbol: FUN_00708140 */


void FUN_00708140(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x10) == -0x227) {
    uVar1 = FUN_00786090(param_1);
    if ((*(uint *)(param_2 + 8) == uVar1) && (*(longlong *)(param_1 + 0x48) != 0)) {
      FUN_007082b0(param_1);
    }
  }
  return;
}

