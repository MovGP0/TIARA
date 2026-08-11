/* Ghidra address: 00da09e0 */
/* Ghidra symbol: FUN_00da09e0 */


undefined8 FUN_00da09e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00d9ff60(param_1,param_3);
  iVar2 = FUN_00d9feb0(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_00d9f9e0(param_2,param_3,0);
  }
  else {
    uVar3 = FUN_00da01b0(param_1,param_3,uVar1,3);
    FUN_00d9f9e0(param_2,param_3,uVar3);
  }
  return param_2;
}

