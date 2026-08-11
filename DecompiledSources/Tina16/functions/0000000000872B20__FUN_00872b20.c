/* Ghidra address: 00872b20 */
/* Ghidra symbol: FUN_00872b20 */


undefined8 FUN_00872b20(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = *(ulonglong *)(param_2 + -8);
    }
    uVar2 = (**(code **)*param_1)(param_1,param_2,uVar1 & 0xffffffff);
  }
  return uVar2;
}

