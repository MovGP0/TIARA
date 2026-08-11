/* Ghidra address: 018677f0 */
/* Ghidra symbol: FUN_018677f0 */


undefined8 FUN_018677f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  uVar1 = FUN_018669c0();
  uVar2 = FUN_00410ad0(param_2);
  lVar3 = FUN_018671d0(uVar1,uVar2,0);
  if (lVar3 != 0) {
    uVar4 = (**(code **)(lVar3 + 0x18))(lVar3,param_2,param_3);
  }
  return uVar4;
}

