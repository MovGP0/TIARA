/* Ghidra address: 00593720 */
/* Ghidra symbol: FUN_00593720 */


undefined8 FUN_00593720(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x2a;
  }
  else {
    uVar1 = (**(code **)(*param_2 + -0x68))(param_2);
  }
  return uVar1;
}

