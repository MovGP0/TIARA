/* Ghidra address: 018676f0 */
/* Ghidra symbol: FUN_018676f0 */


undefined8 FUN_018676f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar1 = FUN_00410ad0(param_2);
  lVar2 = FUN_018671d0(param_1,uVar1,4);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(lVar2 + 0x48))(lVar2,param_2,param_3,param_4);
  }
  return uVar3;
}

