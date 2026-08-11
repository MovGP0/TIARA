/* Ghidra address: 00dda090 */
/* Ghidra symbol: FUN_00dda090 */


void FUN_00dda090(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))(*(longlong **)(param_1 + 0x48));
    FUN_006245b0(uVar1);
  }
  return;
}

