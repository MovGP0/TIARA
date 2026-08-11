/* Ghidra address: 018986c0 */
/* Ghidra symbol: FUN_018986c0 */


void FUN_018986c0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x748)) {
    uVar1 = thunk_FUN_03f3ed25(0x10,param_2,0x60);
    *(undefined4 *)(param_1 + 0x730) = uVar1;
    FUN_01898f40(param_1);
    *(int *)(param_1 + 0x748) = param_2;
  }
  return;
}

