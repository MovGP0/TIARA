/* Ghidra address: 01866ed0 */
/* Ghidra symbol: FUN_01866ed0 */


void FUN_01866ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00410ad0(param_4);
  lVar2 = FUN_018671d0(param_1,uVar1,0);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x60))(lVar2,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

