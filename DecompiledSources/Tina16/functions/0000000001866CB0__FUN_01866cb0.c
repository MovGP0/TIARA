/* Ghidra address: 01866cb0 */
/* Ghidra symbol: FUN_01866cb0 */


undefined8
FUN_01866cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_018672a0(param_1,param_3,0x10);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_4,param_5);
  }
  return uVar2;
}

