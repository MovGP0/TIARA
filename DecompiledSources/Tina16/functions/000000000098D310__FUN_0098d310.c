/* Ghidra address: 0098d310 */
/* Ghidra symbol: FUN_0098d310 */


undefined8 FUN_0098d310(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x108))(param_1,local_20);
  uVar1 = FUN_00948a60(local_20[0]);
  FUN_00414520(local_20);
  return uVar1;
}

