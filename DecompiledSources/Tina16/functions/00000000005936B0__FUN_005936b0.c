/* Ghidra address: 005936b0 */
/* Ghidra symbol: FUN_005936b0 */


undefined8 FUN_005936b0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    if (param_3 == (longlong *)0x0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)(*param_3 + -0x70))(param_3);
    }
  }
  else {
    uVar1 = (**(code **)(*param_2 + -0x70))(param_2,param_3);
  }
  return uVar1;
}

