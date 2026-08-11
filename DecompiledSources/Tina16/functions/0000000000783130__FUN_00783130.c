/* Ghidra address: 00783130 */
/* Ghidra symbol: FUN_00783130 */


void FUN_00783130(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined *local_20 [2];
  
  local_20[0] = param_2;
  iVar1 = FUN_00596a10(DAT_02012588 + 8,local_20);
  if (iVar1 != -1) {
    FUN_00599670(DAT_02012588 + 8,iVar1,5);
    if (PTR_PTR_02012568 == param_2) {
      if (*(int *)(DAT_02012588 + 0x10) < 1) {
        FUN_007828b0(0);
      }
      else {
        if (*(int *)(DAT_02012588 + 0x10) == 0) {
          FUN_00594f90();
        }
        FUN_007828b0(**(undefined8 **)(DAT_02012588 + 8));
      }
    }
  }
  return;
}

