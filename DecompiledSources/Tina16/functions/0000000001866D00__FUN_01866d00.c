/* Ghidra address: 01866d00 */
/* Ghidra symbol: FUN_01866d00 */


undefined8 FUN_01866d00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00410ad0(param_2);
  lVar2 = FUN_018671d0(param_1,uVar1,0x20);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = (**(code **)(lVar2 + 0x18))(lVar2,param_2,param_3);
  }
  return uVar1;
}

