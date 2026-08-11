/* Ghidra address: 009604b0 */
/* Ghidra symbol: FUN_009604b0 */


undefined8 FUN_009604b0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)*param_1)(param_1);
  if (lVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    plVar2 = (longlong *)(**(code **)*param_1)(param_1);
    (**(code **)(*plVar2 + 0x78))(*plVar2,param_2);
  }
  return param_2;
}

