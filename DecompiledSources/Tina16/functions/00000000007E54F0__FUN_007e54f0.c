/* Ghidra address: 007e54f0 */
/* Ghidra symbol: FUN_007e54f0 */


undefined4 FUN_007e54f0(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_007e51a0(param_1,1);
  if ((char)uVar1 != '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,1);
  }
  return uVar1;
}

