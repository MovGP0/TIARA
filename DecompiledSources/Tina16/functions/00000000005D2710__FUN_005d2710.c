/* Ghidra address: 005d2710 */
/* Ghidra symbol: FUN_005d2710 */


undefined4 FUN_005d2710(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00416db0(param_2,&LAB_005d2754);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_005b82f0(param_1,param_2);
  }
  return uVar2;
}

