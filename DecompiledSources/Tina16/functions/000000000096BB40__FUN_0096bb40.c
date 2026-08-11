/* Ghidra address: 0096bb40 */
/* Ghidra symbol: FUN_0096bb40 */


undefined8 FUN_0096bb40(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00416420(param_2,L"#REQUIRED");
  if (iVar1 == 0) {
    *param_3 = 3;
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00416420(param_2,L"#IMPLIED");
    if (iVar1 == 0) {
      *param_3 = 2;
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_00416420(param_2,L"#FIXED");
      if (iVar1 == 0) {
        *param_3 = 1;
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

