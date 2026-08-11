/* Ghidra address: 00b94e60 */
/* Ghidra symbol: FUN_00b94e60 */


undefined8 FUN_00b94e60(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    uVar1 = 0;
    (**(code **)(*param_1 + 8))(param_1,0xffffffff,0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1[1] + (longlong)param_2 * 8);
  }
  return uVar1;
}

