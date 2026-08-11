/* Ghidra address: 00563c50 */
/* Ghidra symbol: FUN_00563c50 */


undefined8 FUN_00563c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_005630a0(param_1,param_3);
  iVar2 = FUN_00562ff0(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_00562a90(param_2,param_3,0);
  }
  else {
    uVar3 = FUN_00563310(param_1,param_3,uVar1,3);
    FUN_00562a90(param_2,param_3,uVar3);
  }
  return param_2;
}

