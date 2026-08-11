/* Ghidra address: 01b23730 */
/* Ghidra symbol: FUN_01b23730 */


undefined8 FUN_01b23730(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)*param_1)(param_1);
  lVar4 = (**(code **)*param_2)(param_2);
  if (lVar3 == lVar4) {
    uVar2 = (**(code **)*param_1)(param_1);
    cVar1 = FUN_0043e2c0(param_1[1],param_2[1],uVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

