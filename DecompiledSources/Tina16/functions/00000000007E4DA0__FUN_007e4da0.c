/* Ghidra address: 007e4da0 */
/* Ghidra symbol: FUN_007e4da0 */


undefined4 FUN_007e4da0(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_007e44b0(param_1,1);
  if ((char)uVar1 != '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,1);
  }
  return uVar1;
}

