/* Ghidra address: 018673b0 */
/* Ghidra symbol: FUN_018673b0 */


undefined8 FUN_018673b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00410ad0(param_2);
  lVar2 = FUN_018671d0(param_1,uVar1,0);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0xb0))(lVar2,param_2);
  }
  return 0;
}

