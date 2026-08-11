/* Ghidra address: 00c1e220 */
/* Ghidra symbol: FUN_00c1e220 */


undefined4 FUN_00c1e220(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10));
  FUN_00c1e290(param_1);
  return uVar1;
}

