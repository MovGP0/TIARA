/* Ghidra address: 007e1f60 */
/* Ghidra symbol: FUN_007e1f60 */


void FUN_007e1f60(longlong param_1)

{
  int iVar1;
  undefined4 local_210 [54];
  undefined4 local_138;
  undefined4 local_134;
  
  local_210[0] = FUN_0042a720();
  iVar1 = thunk_FUN_03e0f7b4(0x29,0,local_210,0);
  if (iVar1 != 0) {
    **(undefined4 **)(param_1 + 0xb0) = local_138;
    **(undefined4 **)(param_1 + 0xb8) = local_134;
  }
  return;
}

