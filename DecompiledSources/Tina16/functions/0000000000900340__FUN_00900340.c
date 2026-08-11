/* Ghidra address: 00900340 */
/* Ghidra symbol: FUN_00900340 */


undefined8 FUN_00900340(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416420(param_2,&PTR_DAT_0090041c);
  if (iVar1 == 0) {
    FUN_00414b90(param_1,&DAT_00900428);
  }
  else {
    iVar1 = FUN_00416420(param_2,&PTR_DAT_00900430);
    if (iVar1 == 0) {
      FUN_00414b90(param_1,&DAT_0090043c);
    }
    else {
      iVar1 = FUN_00416420(param_2,&DAT_00900444);
      if (iVar1 == 0) {
        FUN_00414b90(param_1,&DAT_00900450);
      }
      else {
        iVar1 = FUN_00416420(param_2,L"apos");
        if (iVar1 == 0) {
          FUN_00414b90(param_1,&DAT_00900468);
        }
        else {
          iVar1 = FUN_00416420(param_2,L"quot");
          if (iVar1 == 0) {
            FUN_00414b90(param_1,&LAB_00900480);
          }
          else {
            FUN_00414b90(param_1,param_2);
          }
        }
      }
    }
  }
  return param_1;
}

