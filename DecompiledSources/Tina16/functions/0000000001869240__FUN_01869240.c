/* Ghidra address: 01869240 */
/* Ghidra symbol: FUN_01869240 */


undefined8 FUN_01869240(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x58))(param_2);
  }
  return uVar1;
}

