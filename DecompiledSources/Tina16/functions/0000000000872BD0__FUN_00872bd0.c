/* Ghidra address: 00872bd0 */
/* Ghidra symbol: FUN_00872bd0 */


undefined8
FUN_00872bd0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00872a40(param_2,param_3,param_4);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)*param_1)(param_1,lVar1,param_4);
  }
  return uVar2;
}

