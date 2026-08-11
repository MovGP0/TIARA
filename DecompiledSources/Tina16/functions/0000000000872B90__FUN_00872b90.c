/* Ghidra address: 00872b90 */
/* Ghidra symbol: FUN_00872b90 */


undefined8 FUN_00872b90(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = *(undefined4 *)(param_2 + -4);
    }
    uVar1 = FUN_00416740(param_2);
    uVar1 = (**(code **)*param_1)(param_1,uVar1,uVar2);
  }
  return uVar1;
}

