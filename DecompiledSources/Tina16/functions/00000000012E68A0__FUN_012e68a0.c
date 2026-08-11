/* Ghidra address: 012e68a0 */
/* Ghidra symbol: FUN_012e68a0 */


undefined8 FUN_012e68a0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_00800470(param_1,7);
  iVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (iVar1 == 1) {
    FUN_0064dd90(param_1[0xd9],param_2);
  }
  else {
    FUN_00414480(param_2);
  }
  FUN_00805ad0(param_1);
  return param_2;
}

