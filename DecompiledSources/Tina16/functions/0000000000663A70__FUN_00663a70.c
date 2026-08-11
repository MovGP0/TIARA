/* Ghidra address: 00663a70 */
/* Ghidra symbol: FUN_00663a70 */


void FUN_00663a70(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  
  if (param_2 == 0) {
    param_2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
  }
  FUN_006639d0(auStack_38,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))(*(longlong **)(param_1 + 0x28));
  return;
}

