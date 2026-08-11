/* Ghidra address: 005940b0 */
/* Ghidra symbol: FUN_005940b0 */


undefined8 FUN_005940b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00416350(param_2,param_3);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_00416350(param_2,param_3);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

