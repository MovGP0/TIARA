/* Ghidra address: 008b1f40 */
/* Ghidra symbol: FUN_008b1f40 */


void FUN_008b1f40(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 8) + -8);
  }
  FUN_00874ad0(param_1 + 8,uVar1 & 0xffffffff,0);
  return;
}

