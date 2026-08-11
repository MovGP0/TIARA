/* Ghidra address: 007d7c80 */
/* Ghidra symbol: FUN_007d7c80 */


undefined8 FUN_007d7c80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)*param_2)(param_2);
  lVar4 = (**(code **)*param_3)(param_3);
  if (lVar3 == lVar4) {
    uVar2 = (**(code **)*param_2)(param_2);
    cVar1 = FUN_0043e2c0(param_2[1],param_3[1],uVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

