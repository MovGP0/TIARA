/* Ghidra address: 004ef360 */
/* Ghidra symbol: FUN_004ef360 */


undefined8 FUN_004ef360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_004ee8e0(param_1,param_3);
  iVar2 = FUN_004ee830(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_004ee360(param_2,param_3,0);
  }
  else {
    uVar3 = FUN_004eeb30(param_1,param_3,uVar1,3);
    FUN_004ee360(param_2,param_3,uVar3);
  }
  return param_2;
}

