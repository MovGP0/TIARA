/* Ghidra address: 01303d50 */
/* Ghidra symbol: FUN_01303d50 */


void FUN_01303d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_012e5710(param_3);
  if (iVar1 == 0) {
    FUN_01301140(param_1,param_2,1,1,0);
  }
  else {
    iVar1 = FUN_012e5710(param_3);
    if (iVar1 == 1) {
      FUN_01301140(param_1,param_2,1,2,0);
    }
    else {
      iVar1 = FUN_012e5710(param_3);
      if (iVar1 == 2) {
        FUN_01301140(param_1,param_2,1,3,0);
      }
    }
  }
  return;
}

