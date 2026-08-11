/* Ghidra address: 0064fa90 */
/* Ghidra symbol: FUN_0064fa90 */


undefined4 FUN_0064fa90(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3);
  if ((char)uVar1 != '\0') {
    FUN_0064fba0(param_1,param_2,param_3);
  }
  return uVar1;
}

